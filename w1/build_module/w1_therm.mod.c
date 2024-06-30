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
	{ 0xb1656107, "param_ops_int" },
	{ 0x467f944, "w1_unregister_family" },
	{ 0x1a6362e6, "w1_register_family" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe914e41e, "strcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0xbd925e75, "_dev_warn" },
	{ 0x3fdf0832, "device_create_file" },
	{ 0x61a4da1d, "kmem_cache_alloc_trace" },
	{ 0x79a54ed9, "kmalloc_caches" },
	{ 0xb5dd2392, "w1_touch_bit" },
	{ 0x876d5b3d, "w1_write_block" },
	{ 0xafad0bbb, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf251cd7, "w1_next_pullup" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5a921311, "strncmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4c0abadf, "w1_read_block" },
	{ 0x710567a3, "w1_read_8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xacbfa9bc, "w1_write_8" },
	{ 0x1f58166e, "w1_reset_bus" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa94373c3, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "A1F3ACA3353A0AF94899A5C");
