#include <hello1.h>

MODULE_AUTHOR("Tkachenko Oleksandr");
MODULE_DESCRIPTION("Labwork 4 hello2.c");
MODULE_LICENSE("Dual BSD/GPL");

static uint myparam = 1;

module_param(myparam, uint, 0444);
MODULE_PARM_DESC(myparam, "My description");

static int __init hello2_init(void){
	pr_emerg("Calling print_hello() from hello2...\n");
	print_hello(myparam);
	return 0;
}

static void __exit hello2_exit(void){}

module_init(hello2_init);
module_exit(hello2_exit);
