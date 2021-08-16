#include<linux/module.h>
#include<linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rajeev_Sharma");
MODULE_DESCRIPTION("A simple hello_world kernel module");


static int __init hello_init(void)
{
        printk("Hello World\n");
        return 0;
}

static void __exit hello_cleanup(void)
{
        printk("Good Bye\n");
}

module_init(hello_init);
module_exit(hello_cleanup);

