
# download a package without installing it
apt-get -d install -y 'pkg'
# cp the downloaded packages
cp /var/cache/apt/archives/'pkg' 'path'
# dependency
## upgrade and resolve dependences
apt-get dist-upgrade
## repair
apt-get update; apt-get -f install -y
# search a package
apt-cache search
# upgrade
## upgrade the specified packages
apt-get install --only-upgrade 'pkg'
## list upgradable pkgs
apt list --upgradable
## ignore the specified pkgs
apt-mark hold 'pkg'  
&emsp;&emsp;apt-mark unhold - unlock the pkgs
# pkginfo
##basic infomation
apt-cache showpkg
## detailed information
apt-cache show 
## show info of a downloaded pkg
dpkg -I 'pkg'
# show the installation directory of a app
dpkh -L 'app'
# clean up residual残余 data
dpkg -l | grep '^rc' | awk '{print $2}' | sudo xargs dpkg -P
# uninsta libreoffice
apt-get autoremove --purge 'libreoffice?'

