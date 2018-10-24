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
#include "idt.h"

int kern_entry()
{
	init_debug();
	init_gdt();
	init_idt();

	console_clear();
	printk_color(rc_black, rc_green, "Hello, RatelOs kernel!\n");
	
	asm volatile ("int $0x3");
	asm volatile ("int $0x4");
	asm volatile ("int $0x5");
	
	return 0;
}


