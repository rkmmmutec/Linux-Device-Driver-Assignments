#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include"myhead.h"

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rajeev_Sharma");

static int one =10;
static int two =20;

static int add_init(void)
{
  printk(KERN_ALERT"\nwe are going to add\n");
  printk(KERN_ALERT"\nresult is : %d\n"my_add(one,two));

}

static int add_exit(void)
{
  printk(KERN_ALERT"\n we are leaving\n");
}

module_init(add_init);
module_exit(add_exit);

