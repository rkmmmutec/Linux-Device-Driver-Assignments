#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rajeev_Sharma");

static int my_add(int a,int b)
{
  return (a+b);
}

static int hello_init(void)
{
  printk(KERN_ALERT"\nhello to all\n");

}

static int hello_exit(void)
{
printk(KERN_ALERT"\ngood bye\n");
}

module_init(hello_init);
module_exit(hello_exit);
