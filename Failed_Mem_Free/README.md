# Memory Not Free'd

## Table of Contents
  [Build](#build)
  
## Build

### Requirements
- Ubuntu 20.04
- (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0

### Make
- To compile without Address Sanitizer being used, type ```make``` in the command line.<br>
<img src="images/Capture.PNG">

  - Valgrind Output
  <img src="images/valgrind.PNG"> 

- To compile with Address Sanitizer, use ```make debug``` in the command line.<br>
  - Address Sanitizer Output
  <img src="images/address_sanitizer.PNG"> 
