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
	{ 0x4829a47e, "memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0x523f0ef2, "dev_driver_string" },
	{ 0x8aaaa834, "dma_direct_map_page" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbdc596fa, "debugfs_create_u64" },
	{ 0xcc374010, "debugfs_create_dir" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x798b6ca7, "spi_register_controller" },
	{ 0xac1653ab, "devm_request_threaded_irq" },
	{ 0x22de153f, "dma_get_slave_caps" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0xe076a5b3, "vmemmap" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xa0d4beeb, "dma_request_slave_channel" },
	{ 0x3396642a, "of_get_address" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x98744a6b, "platform_get_irq" },
	{ 0x9dbfa1ed, "devm_clk_get" },
	{ 0xa2b397ec, "devm_platform_ioremap_resource" },
	{ 0x7b084bc5, "__devm_spi_alloc_controller" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdc514946, "spi_unregister_controller" },
	{ 0xaa75a25a, "debugfs_remove_recursive" },
	{ 0xaa5d3f59, "dma_direct_unmap_page" },
	{ 0xf4e4774b, "dma_release_channel" },
	{ 0x29361773, "complete" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4e2dcde3, "_dev_err" },
	{ 0x549e454, "dma_direct_sync_single_for_device" },
	{ 0xa94373c3, "_dev_info" },
	{ 0x233aaba9, "gpiochip_request_own_desc" },
	{ 0x9ce208fc, "gpiochip_find" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x86a92c40, "spi_split_transfers_maxsize" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spiC*");

MODULE_INFO(srcversion, "655798686E1207F61769176");
