#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(get_fw_path, "", "");
KSYMTAB_FUNC(get_testmode, "", "");
KSYMTAB_FUNC(set_testmode, "", "");
KSYMTAB_FUNC(get_hardware_info, "", "");
KSYMTAB_FUNC(get_adap_test, "", "");
KSYMTAB_FUNC(get_userconfig_xtal_cap, "", "");
KSYMTAB_FUNC(get_userconfig_txpwr_idx, "", "");
KSYMTAB_FUNC(get_userconfig_txpwr_ofst, "", "");
KSYMTAB_FUNC(aicwf_rxbuff_size_get, "", "");
KSYMTAB_FUNC(aicwf_prealloc_rxbuff_alloc, "", "");
KSYMTAB_FUNC(aicwf_prealloc_rxbuff_free, "", "");
KSYMTAB_FUNC(aicwf_prealloc_txq_alloc, "", "");

SYMBOL_CRC(get_fw_path, 0x2986c864, "");
SYMBOL_CRC(get_testmode, 0x3a13f8bb, "");
SYMBOL_CRC(set_testmode, 0x81d11f06, "");
SYMBOL_CRC(get_hardware_info, 0xef93fea4, "");
SYMBOL_CRC(get_adap_test, 0xf6f0729b, "");
SYMBOL_CRC(get_userconfig_xtal_cap, 0x12789d30, "");
SYMBOL_CRC(get_userconfig_txpwr_idx, 0x27e5f257, "");
SYMBOL_CRC(get_userconfig_txpwr_ofst, 0x377c82c7, "");
SYMBOL_CRC(aicwf_rxbuff_size_get, 0x22fc5aac, "");
SYMBOL_CRC(aicwf_prealloc_rxbuff_alloc, 0x8cc6efef, "");
SYMBOL_CRC(aicwf_prealloc_rxbuff_free, 0x0abc244c, "");
SYMBOL_CRC(aicwf_prealloc_txq_alloc, 0x6f8e754f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x1305005c, "filp_open" },
	{ 0x28f36887, "usb_alloc_urb" },
	{ 0xc0b9e064, "usb_anchor_urb" },
	{ 0x84d10486, "usb_free_urb" },
	{ 0xa64ef37d, "skb_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb8342c83, "__kmalloc_noprof" },
	{ 0xe35d8058, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xaf805868, "usb_register_driver" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4829a47e, "memcpy" },
	{ 0x037a0cba, "kfree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x032296c9, "wake_up_process" },
	{ 0x92997ed8, "_printk" },
	{ 0x01000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf3fe8045, "__tracepoint_sched_set_state_tp" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xff515a98, "usb_submit_urb" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x39940276, "skb_pull" },
	{ 0xb6c4379f, "system_percpu_wq" },
	{ 0x4a331da5, "vmalloc_noprof" },
	{ 0x6d3c9849, "kmem_cache_free" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xecda23ea, "kthread_stop" },
	{ 0x35f82ea1, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xdcb764ad, "memset" },
	{ 0xc3a4ae6a, "kernel_read" },
	{ 0xbde397aa, "skb_dequeue_tail" },
	{ 0x804ad114, "kmem_cache_alloc_noprof" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb1388eb6, "__netdev_alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0xde5f10d1, "usb_unanchor_urb" },
	{ 0xf6c5359a, "param_ops_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bafe5e0, "skb_unlink" },
	{ 0xc0c61108, "kthread_create_on_node" },
	{ 0x999e8297, "vfree" },
	{ 0x3096be16, "names_cachep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0xd4bcf2c0, "filp_close" },
	{ 0xa96c7aac, "__kmalloc_cache_noprof" },
	{ 0x2d78a850, "usb_kill_urb" },
	{ 0x03c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x0c3690fc, "_raw_spin_lock_bh" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x9b1e4a0c, "send_sig" },
	{ 0x98cf60b3, "strlen" },
	{ 0x60d10911, "dev_kfree_skb_any_reason" },
	{ 0xbf4926c9, "param_ops_int" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11e52b22, "kmalloc_caches" },
	{ 0x53bbefe1, "__trace_set_current_state" },
	{ 0xecfaf3c9, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:vA69Cp8800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8D80d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8D81d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8D40d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8D41d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5A771BFCADE16802E70DD2F");
