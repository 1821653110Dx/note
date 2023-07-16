# session
ls s  
create :new  
kill   
current :kill-session  
all tmux kill-server  
other tmux kill-session -t otherSession  
rename $  
detach d  
reconnect tmux at -t  <session-name>  
# window
list w  
create c  
close &  
switch num  
move .  
next n  
previous p  
find-window f  
number ? <number>  
rename ,  
change number '  
# panel
close x  
division  
vertical  "  
horizontal %   
# respawn
R
# else
enable scrolling mode C b, [  
quit q  
help ?  
  
set clock t  
  
mouse mode  
enable mouse scrolling  
set -g mouse on  
 
