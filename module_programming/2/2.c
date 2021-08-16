#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");      
MODULE_AUTHOR("RAjeev_Sharma");  
MODULE_DESCRIPTION(" module parameter.");


//variable are declear as static to keep their scope local to this module
static int intvar = 10;

module_param(intvar, int, S_IRUGO); 

 // using this macro variabl are enable to modified from command line
static int  param_init(void)
{
       printk(KERN_ALERT "\n we are in init function\n");
       printk(KERN_ALERT"\n the value of intvar is: %d\n",intvar);
       return 0;
}

static void  param_exit(void)
{
   printk(KERN_ALERT "\n Good bye\n");

}

module_init(param_init);
module_exit(param_exit);
