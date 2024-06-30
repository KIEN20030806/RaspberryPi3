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
	{ 0x1ddb80f, "platform_driver_unregister" },
	{ 0xd5a5b02, "__platform_driver_register" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbd925e75, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e2dcde3, "_dev_err" },
	{ 0x8f72b338, "i2c_add_adapter" },
	{ 0x92dd88e1, "of_device_get_match_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc5604800, "clk_set_rate_exclusive" },
	{ 0xd579c789, "of_property_read_variable_u32_array" },
	{ 0x78d6c476, "devm_clk_register" },
	{ 0x1912be44, "clk_hw_register_clkdev" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9dbfa1ed, "devm_clk_get" },
	{ 0xd391e526, "devm_ioremap_resource" },
	{ 0xdfc9c0b8, "platform_get_resource" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5aeae81a, "devm_kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xfa02ddad, "i2c_del_adapter" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xacb4d88c, "clk_rate_exclusive_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-i2cC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-i2cC*");

MODULE_INFO(srcversion, "4DA85BEB07BF37BEDA6A0D9");
