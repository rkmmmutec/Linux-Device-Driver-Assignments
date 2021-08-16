obj-m := char_dynamic_alloc.o
KDIR=/lib/modules/$(shell uname  -r)/build/
PWD:=$(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules
	gcc application.c -o app
clean:
	make -C $(KDIR) M=$(PWD) clean
	rm app
