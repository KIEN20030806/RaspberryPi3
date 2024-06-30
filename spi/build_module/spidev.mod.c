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
	{ 0x8018c34b, "param_ops_uint" },
	{ 0x1c074a1f, "no_llseek" },
	{ 0x1a623d4e, "driver_unregister" },
	{ 0x96312b2b, "class_destroy" },
	{ 0x59843eab, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x9437905c, "__class_create" },
	{ 0x7d14df87, "__register_chrdev" },
	{ 0xd4856a12, "put_device" },
	{ 0xafe59de7, "spi_setup" },
	{ 0xf3b55ecd, "get_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x5c5abd92, "device_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11c192dc, "spi_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3a30eeee, "device_create" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x61a4da1d, "kmem_cache_alloc_trace" },
	{ 0x79a54ed9, "kmalloc_caches" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9c59b28e, "stream_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x754e57ab, "spi_slave_abort" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crohm,dh2228fv");
MODULE_ALIAS("of:N*T*Crohm,dh2228fvC*");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488C*");
MODULE_ALIAS("of:N*T*Cge,achc");
MODULE_ALIAS("of:N*T*Cge,achcC*");
MODULE_ALIAS("of:N*T*Csemtech,sx1301");
MODULE_ALIAS("of:N*T*Csemtech,sx1301C*");
MODULE_ALIAS("of:N*T*Clwn,bk4");
MODULE_ALIAS("of:N*T*Clwn,bk4C*");
MODULE_ALIAS("of:N*T*Cdh,dhcom-board");
MODULE_ALIAS("of:N*T*Cdh,dhcom-boardC*");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpld");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpldC*");

MODULE_INFO(srcversion, "394BE2B2D8B048755F2F434");
