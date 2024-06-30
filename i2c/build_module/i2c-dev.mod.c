#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x96d13653, "module_layout" },
	{ 0x1c074a1f, "no_llseek" },
	{ 0x974b95cd, "bus_unregister_notifier" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xac715828, "i2c_for_each_dev" },
	{ 0x96312b2b, "class_destroy" },
	{ 0xda7c0bcf, "bus_register_notifier" },
	{ 0xa74448d5, "i2c_bus_type" },
	{ 0x9437905c, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf539f7b6, "i2c_smbus_xfer" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x9dd619, "i2c_transfer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeacd068, "cdev_device_del" },
	{ 0xc5850110, "printk" },
	{ 0xd4856a12, "put_device" },
	{ 0x50cc6230, "cdev_device_add" },
	{ 0x402c3dc0, "dev_set_name" },
	{ 0x842bc92c, "device_initialize" },
	{ 0x2b827688, "cdev_init" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x61a4da1d, "kmem_cache_alloc_trace" },
	{ 0x79a54ed9, "kmalloc_caches" },
	{ 0x3b05b602, "i2c_get_adapter" },
	{ 0x7e5faa1e, "i2c_transfer_buffer_flags" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x85716561, "i2c_verify_client" },
	{ 0xad0ddd0a, "device_for_each_child" },
	{ 0xb36522cc, "i2c_adapter_type" },
	{ 0x37626cf2, "i2c_put_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "61F542EB2F961D0651830E1");
