# xargs
## 3 columns each row
cat test.txt | xargs -n3  
## appoint 'X' as the delimeter
echo 'nameXnameXnameXname' | xargs -dX -n2  
