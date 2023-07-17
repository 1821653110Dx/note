# list partitions
lsblk -f  
# disk usage
## display the size of each file
du -a  
## display the total size
du -s  
## check the size of directory
lv.0 directory  
$emsp;du -d 0 path  
# disk format
## check the format of mounted disks
df -T  
## check the format of unmounted disks(check which partitions not been formatted yet)
parted -l  
## check the format of all disks
lsblk -f  
## check the format of the specified disk
file -s \<path of dev\>  
# rename
cmd \<path of the dev\> \<new_name\>  
&emsp;cmd  
&emsp;&emsp;for FAT32 = Mtools  
&emsp;&emsp;for NTFS = ntfsprogs  
&emsp;&emsp;for ext2, ext3, ext4 = e2label  
&emsp;&emsp;for exfat = exfatlabel  
# mount pernanently
stpe1  
check UUID of the specified disk  
&emsp;blkid  
step2  
&emsp;vim /etc/fstab  
step3  
&emsp;&emsp;UUID=\<UUID\> \<where to mount\> \<the format of the disk\> defaults 0 0  
//or//  
&emsp;&emsp;UUID=\<UUID\> \<where to mount\> \<the format of the disk\> defaults,utf8,uid=\<uid\>,gid=\<gid\> 0 0  
&emsp;&emsp;&emsp;&emsp;check uid and gid = id \<user\>  
# umount
for hard_drive:  
&emsp;udisksctl unmount -b /dev/sdc1  
# eject
for non-hard-drive  
&emsp;eject \<dev\>  
for hard_drive  
&emsp;udisksctl power-off -b /dev/sdc1  
# change owner
chown -R user1:group1 \<dev\>  

