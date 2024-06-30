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
	{ 0x1ddb80f, "platform_driver_unregister" },
	{ 0xd5a5b02, "__platform_driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe707bb9e, "gpiod_direction_output_raw" },
	{ 0x4e2dcde3, "_dev_err" },
	{ 0x9050f4c2, "w1_add_master_device" },
	{ 0x995685f4, "gpiod_direction_output" },
	{ 0x9fbc4a52, "devm_gpiod_get_index_optional" },
	{ 0x94ef3d6b, "devm_gpiod_get_index" },
	{ 0x2886c852, "of_get_property" },
	{ 0x5aeae81a, "devm_kmalloc" },
	{ 0x590284f5, "of_root" },
	{ 0xc84acb3d, "gpiod_get_value" },
	{ 0xf696e29a, "w1_remove_master_device" },
	{ 0x3d3e0a86, "gpiod_set_value" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("of:N*T*Cw1-gpio");
MODULE_ALIAS("of:N*T*Cw1-gpioC*");

MODULE_INFO(srcversion, "89D33780A3861BE22B688C6");
