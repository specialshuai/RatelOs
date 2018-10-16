/*
 * =====================================================================================
 *
 *       Filename:  entry.c
 *
 *    Description:  RatelOs 内核的入口C函数
 *
 * =====================================================================================
 */
 
 
#include "gdt.h"
#include "console.h"
#include "debug.h"

int kern_entry()
{
	init_debug();
	init_gdt();
	
	console_clear();
	printk_color(rc_black, rc_green, "Hello, RatelOs kernel!\n");
	
	return 0;
}


