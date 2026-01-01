# command line make file only invokes Kbuild makefile 
# Kbuild make will look at the obj-m variable 
# generate module.mod.c and creates module.o and module.mod.o
# links these two files and creates a module.ko
#

ifneq ($(KERNELRELEASE),)

obj-m := myFirstModule.o

else

KDIR ?= /lib/modules/$(shell uname -r)/build

PWD := $(shell pwd)

.PHONY: build clean

build:
	$(MAKE) -C $(KDIR) M=$(PWD) modules
clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean

endif


