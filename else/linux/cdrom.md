# create iso   
1)把目录a下的内容做成iso文件  
mkisofs -r -o a.iso a/ &emsp;&emsp;//mkisofs = make iso file system  
2)把目录a下的内容做成iso文件，并指定不把文件b.txt放到iso中  
mkisofs -m b.txt -r -o a.iso a/  
3)把目录a下的内容做成iso文件，并指定不把目录b放到iso中  
mkisofs -x b -r -o a.iso a/  
4)把目录a下的内容做成iso文件，并指定不把目录b放到iso中,并指定数据处理人为Jack Chen  
mkisofs -p "Jack Chen" -x b -r -o a.iso a/  
5)(把目录a下的内容做成iso文件,并指定共4张光盘，此为第2张  
mkisofs -volset-size 4 -volset-seqno 2 -r -o a.iso a/  
6)预计建立映像文件的容量大小  
mkisofs -print-size -r a/  
  
# burn iso file  
## burn CD  
### wodim  (can also be used for burning .iso into DVD, but better used for burning CD)
wodim -v dev=/dev/cdrom speed=4 -dao -data image.iso  
&emsp;&emsp;wodim = Write Optical Disk Image  
&emsp;&emsp;-v = verbose, display the detailed output  
&emsp;&emsp;-dao = Disc-At-Once  
## burn DVD (better used  for burning large amount of data ) 
### growisofs  
burn iso file into dvd  
&emsp;&emsp;growisofs -dvd-compat -Z 'path to dev'='path to .iso'   
burn directoies into dvd  
&emsp;&emsp;growisofs -dev-compat -z 'path to dev' -R -J 'path to directory'  
## xorriso
xorriso -dev 'path o dev' -map 'path to .iso' 'file name of burned .iso' -volid 'disk label' -close on -commit -eject  
