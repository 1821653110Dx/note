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
# Hibernation
systemctl suspend  
# system setting
## setting tools
### basic
Xfce4-manager  
### advanced
ccsm  
## else
### change "use 'alt + mouse_1 to move window'" to "use 'super + mouse_2 to move window'"
设置/窗口管理器微调/辅助功能/用来捕获和移动窗口的快捷键：Alt -> Super  
# check system information
cat /proc/version  
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
# add the appimage to the app list
<https://zhuanlan.zhihu.com/p/215507075>  
  
cp ***/tmp/.xxx/xxx.desktop*** to ***/usr/share/applications***  
edit the blow of ***xxx.desktop***  
```bash
Exec=xxx
Icon=xxx
```
## get the icon
get one from /tmp/.xxx/usr/share/application  
# Set default launcher for a file with specific format
<https://www.cnblogs.com/KoiC/p/17112703.html>  
  
add the below code to /usr/share/applications/defaults.list  
```bash
'unknownformat'=app.desktop;
```

