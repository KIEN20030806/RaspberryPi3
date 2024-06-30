obj-m :=i2c-bcm2835.o i2c-dev.o

KERNEL_DIR ?= $(HOME)/ln/linux

all:
	make -C $(KERNEL_DIR) \
		ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- \
		M=$(PWD) modules

clean:
	make -C $(KERNEL_DIR) \
		ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- \
		M=$(PWD) clean

deploy:
	scp -P 5555 *.ko pi@localhost:/home/pi/dr

