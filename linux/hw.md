# check hardware
lshw (-short)  
# cpu
## display info
lscpu  
## check real-time frequency
watch -n 1 grep 'MHz' /proc/cpuinfo  
# gpu
nvidia-smi  
  
watch -n 1 nvidia-smi  

