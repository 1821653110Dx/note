# excape character
\b = backward by one character  
\f = form feed换页  
\n = newline  
\r = move the cursor to the begining of the line  
\t = Tab  
\\ = \  
\' = '  
\" = "  
\? = ?  
\0 = blank space  
# GUI
thunar = super e  
xdesktop -menu = C Esc  
printscreen -r S PrtSc  
printscreen -w M PrtSc  
xflock4 = C M l  
xkill C M Esc  
  
window operate menu = M space  
switch window = S Tab  
switch workspace 1 = C f1  
add worksapce = M insert  
del wordspace = M delete  
  
back to desktop = C M d  
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
# file
## batch create批量
touch test{0001...2000}.txt  
## multi-line writing
cat > test.txt << -EOF  
\> 123  
\> 345  
\> -EOF  
## append追加 multiple lines of txt
cat >> test.txt << -EOF  
\> 123  
\> 345  
\> -EOF  
