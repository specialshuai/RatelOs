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
 
int kern_entry()
{
	console_clear();

	console_write_color("Hello, RatelOs kernel!\n", rc_black, rc_green);
	
	return 0;
}