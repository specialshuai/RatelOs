/*
 * =====================================================================================
 *
 *       Filename:  entry.c
 *
 *    Description:  RatelOs 内核的入口C函数
 *
 * =====================================================================================
 */
 
#include "console.h"
#include "debug.h"

int kern_entry()
{
	init_debug();
	
	console_clear();
	
	printk_color(rc_black, rc_green, "Hello, RatelOs kernel!\n");
	
	panic("test");
	
	return 0;
}