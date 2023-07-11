# tar
## pack
tar -P -cf .tar path of to_pack  
## unpack
tar -xf '.tar' path to save  
## check
tar -tf .tar  
## create a .tar.gz
tar -czf .tar.gz path  
&emsp;z = creat .tar.gz  
&emsp;&emsp;J = .tar.xz  
&emsp;&emsp;j = .tar.bz2  
# zip
## unpack
zip -r -q -o .zip path  
&emsp;q = quite  
&emsp;o = output  
## pack
zip -r -q -o .zip path  
### set compression level and exclude files  
zip -r -9 -q -o .zip path -x file-to-exclude  
&emsp;-9 = compression level  
&emsp;-x = exclude  
## unpack
unzip .zip  

unzip -q .zip -d path  
&emsp;-d destination, if the path isn't exsist, it'll be created  
### appoint encoding type编码类型
unzip -o encoding-type .zip  
&emsp;-o appoint  
## check
unzip -l shiyanlou.zip  
&emsp;-l list  

