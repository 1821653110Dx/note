## short cut
exit&emsp;&emsp;C d  
finish&emsp;&emsp;C c  
Hang-up&emsp;&emsp;C s  
unhook&emsp;&emsp;C q  
run in the background&emsp;&emsp;C z  
# run
## run in the background
bg %jobnumber  
### excuet script every 10s in the bg  
watch -n 10 sh test.sh &  
## run in the for ground
fg %jobnumber  
# search
ps aux | grep 'key_word'
# kill
## kill by job
jobs  
kill %\<num\>  
## kill by PID
ps  
kill \<PID\>  
### efficiency
ps aux | grep \<key_word>\ | awk '{print $2}' | xargs kill  


