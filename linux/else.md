
# setting tools
## basic
Xfce4-manager  
## advanced
ccsm  
# check system information
cat /proc/version  
# check hardware
lshw (-short)  
## show gpu information
lspci -vnn | grep VGA -A 12  
### show Nv
lspci | grep -i nvidia  
//OR//  
nvidia-smi  
