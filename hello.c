#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Syssoft");
MODULE_DESCRIPTION("Hello World LKM");

static int __init load(void)
{
    printk(KERN_INFO "LKM Kernelmodul: Hello world!\n");
    return 0;
}

static void __exit unload(void)
{
    printk(KERN_INFO "LKM Kernelmodul: Good night!\n");
}

module_init(load);
module_exit(unload);