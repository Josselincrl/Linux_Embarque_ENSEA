# Linux Embarque ENSEA
## On flash l'image sur la carte SD

```
root@DE10-Standard:~# df -h
Filesystem      Size  Used Avail Use% Mounted on
/dev/root       3.0G  1.3G  1.5G  47% /
devtmpfs        375M     0  375M   0% /dev
tmpfs           376M  4.0K  376M   1% /dev/shm
tmpfs           376M  9.8M  366M   3% /run
tmpfs           5.0M  4.0K  5.0M   1% /run/lock
tmpfs           376M     0  376M   0% /sys/fs/cgroup
tmpfs            76M  4.0K   76M   1% /run/user/0
```

Apres un ifconfig on obtient l'IP suivant : 192.168.88.68
On réalise la connecion avec la carte en SSH via teraterm (Baud 115200) ou sinon avec la commande :
```
ssh root@192.168.88.68
```
On recupere les informations CPU avec la ligne de commade suivante : 
```
root@DE10-Standard:/proc# cat cpuinfo
processor       : 0
model name      : ARMv7 Processor rev 0 (v7l)
BogoMIPS        : 200.00
Features        : half thumb fastmult vfp edsp thumbee neon vfpv3 tls vfpd32
CPU implementer : 0x41
CPU architecture: 7
CPU variant     : 0x3
CPU part        : 0xc09
CPU revision    : 0

processor       : 1
model name      : ARMv7 Processor rev 0 (v7l)
BogoMIPS        : 200.00
Features        : half thumb fastmult vfp edsp thumbee neon vfpv3 tls vfpd32
CPU implementer : 0x41
CPU architecture: 7
CPU variant     : 0x3
CPU part        : 0xc09
CPU revision    : 0

Hardware        : Altera SOCFPGA
Revision        : 0000
Serial          : 0000000000000000
```



