.. fbmeta::
    hide_page_title=true

Buffer watermark statistics
###########################

Feature Description
-------------------

Overview
~~~~~~~~

Buffer watermark statistics is a feature that helps capture the peak buffer 
usage in the system. It is used to understand and monitor the peak buffer
utilization in switch hardware, like global shared buffers, headroom buffers, 
egress queue buffers etc.

Design
~~~~~~

Switching ASICs can keep track of peak buffer usage until a clear-on-read 
for specific stats is issued. In FBOSS implementation, high-watermark 
stats are polled from updateStats() every 60 sec by default with 
clear-on-read. The implementation makes use of quantile stats for keeping 
track of these watermark stats. These stats are published to ODS for tracking
and monitoring and is available via fb303 as well. Various watermark statistics 
available are as below:

  - Per device high-watermark: 
      buffer_watermark_device.p100
  - Per CPU queue high-watermark:
      buffer_watermark_cpu.queue0.p100
  - Per port egress queue high-watermark: 
      buffer_watermark_ucast.eth1/9/3.queue3.p100.60
  - Per Ingress Traffic Manager high-watermark: 
      buffer_watermark_global_headroom.itm1.p100
      buffer_watermark_global_shared.itm0.p100
  - Per Priority Group high-watermark:
      buffer_watermark_pg_headroom.eth1/17/1.p100
      buffer_watermark_pg_shared.eth1/17/1.p100


The watermark statistics is made available in Broadcom ASICs using a feature
named Buffer Statistics Tracking (BST). BST has two modes as below, of which
the "Watermark mode" is used in FBOSS.

- Watermark Mode: provides peak usage since last clear-on-read.
- Instantaneous Use Count Mode: provides the instantaneous value of the monitored counter.

References: Quantile stats: https://fburl.com/a6d1q09h

Scale
~~~~~

N/A

Tradeoff
~~~~~~~~

In Broadcom implementation, there is an option to use watermark mode or 
instantaneous use count mode for BST. For FBOSS buffer watermark statistics 
feature, the "watermark mode" is being used and hence will be a consideration
for features wanting to use the instantaneous mode or other conflicting 
features in the ASIC.

Usecase
-------

- Understand the peak headroom and shared buffer usage with PFC enabled to ensure
  nodrop behavior can be achieved without running out of buffers.
- Understand the queue build up for CPU queues, which will help fine tune the
  buffer allocation for CPU high vs low priority queues

Configuration
-------------

The feature is enabled by default, no configuration knobs available.


Build and test
--------------

N/A

Debug
-----

N/A

Sample Output
-------------

::

  fb303c -s $switchName:5909 getCounters | grep buffer_watermark | grep cpu

  "buffer_watermark_cpu.queue0.p100": 2769362,
  "buffer_watermark_cpu.queue0.p100.60": 0,
  "buffer_watermark_cpu.queue1.p100": 0,
  "buffer_watermark_cpu.queue1.p100.60": 0,
  "buffer_watermark_cpu.queue2.p100": 1016,
  "buffer_watermark_cpu.queue2.p100.60": 508,
  "buffer_watermark_cpu.queue9.p100": 9144,
  "buffer_watermark_cpu.queue9.p100.60": 254,

::

  fb303c -s $switchName:5909 getCounters | grep buffer_watermark | grep itm0

  "buffer_watermark_global_headroom.itm0.p100": 224536,
  "buffer_watermark_global_headroom.itm0.p100.60": 102108,
  "buffer_watermark_global_shared.itm0.p100": 15302738,
  "buffer_watermark_global_shared.itm0.p100.60": 13011658,
