obj-m:=hello.o
KERNEL_SOURCE=/home/ensea/linux-socfpga
CFAGS_MODULE=-fno-pic

all :
	make -C $(KERNEL_SOURCE) M=$(PWD) modules
clean :
	make -C $(KERNEL_SOURCE) M=$(PWD) clean
install :
	make −C $(KERNEL_SOURCE) M=$(PWD) modules install
