/*
 * lepitch.c - module to load the Le_Pitch
 */
 
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#define DRIVER_AUTHOR "Fred Janin & Stef Liberski"
#define DRIVER_DESC "Linux implementation of Le Pitch device driver"
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);


int init_module(void)
{
  printk(KERN_INFO "Le Pitch is loaded... SI!\n");
  return 0;
}

void cleanup_module(void)
{
  printk(KERN_INFO "Le Pitch has been unloaded! Don't forget to empty /dev/null");
}
