# SSH to local virtual machine 
* install centos 7 minimal
* enable network 
* exact virtual machine setting
    network 
    adaptor **NAT**
    
* Port Forwarding
```
Host IP:    127.0.0.1
Host Port:  2222
Guest IP:   10.0.2.15
Guest Port: 22
```


* ssh link 
```
ssh -p2222 root@127.0.0.1
```

It should succeed.


# TODO:
write guide/log for yum local iso