#  Description
The order to use a local repo yum

mount /dev/cdrom /media/CentOS/




### local.repo
```
[mLocal]
name=My Local Yum
baseurl=file:///media/CentOS
gpgcheck=0
gpgkey=file:///etc/pki/rpm-gpg/RPM-KEY-CentOS-7
enabled=1
```

```
yum --disablerepo=\* --enablerepo=c7-media
```


# work flow

```
mkdir /media/CentOS/

mount /dev/cdrom /media/CentOS/

yum --disablerepo=\* --enablerepo=c7-media
```
