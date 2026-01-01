#include<linux/init.h>
#include<linux/module.h>
#include<linux/kernel.h>
#include"myFirstModule.h"
/*
 * declare a global variable
 * int global
 */

int global_val = 0;

/* 
 * modules body functions
 *
 */

int getValue()
{
	return global_val;
}

void setValue(int val)
{
	global_val = val;
}


/*
 * module initializer function
 * default name : init_module
 * signature : int <func>(void)
 */

int init_module(void)
{
	pr_info("insmod : hello from first module\n");
 return 0;
}

/*
 * module exit / cleanup routing
 * default name : cleanup_module
 * signature : void <func>(void)
 */

void cleanup_module(void)
{
	pr_info("rmmod : cleaning up my first module\n");

}
/* 
 * Export symbols
 * - make symbols visible for other kernel modules
 */

EXPORT_SYMBOL_GPL(setValue);
EXPORT_SYMBOL_GPL(getValue);

/* 
 * comments macros
 * - to keep the module information comments as part of binary file
 *   makes a header 
 */

MODULE_LICENSE("Dual MIT/GPL");
MODULE_AUTHOR("vsmahindrakar97@gmail.com");
MODULE_DESCRIPTION("my first kernel module");
MODULE_VERSION("v 0.01");


