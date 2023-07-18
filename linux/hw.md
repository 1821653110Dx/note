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
# modify battery configuration
## 1st
cd /sys/class/power_supply/  
## Stop charging after the battery reaches 80%
write charge_control_end_threshold 80  
