/*
 * =====================================================================================
 *
 *       Filename:  entry.c
 *
 *    Description:  RatelOs 内核的入口C函数
 *
 * =====================================================================================
 */
 
#include "type.h"
 
int kern_entry()
{
	uint8_t *input = (uint8_t *)0xB8000;
	uint8_t color = (0 << 4) | (15 & 0x0F);
	
	*input++ = 'H'; *input++ = color;
	*input++ = 'e'; *input++ = color;
	*input++ = 'l'; *input++ = color;
	*input++ = 'l'; *input++ = color;
	*input++ = 'o'; *input++ = color;
	*input++ = ' '; *input++ = color;
	*input++ = 'R'; *input++ = color;
	*input++ = 'a'; *input++ = color;
	*input++ = 't'; *input++ = color;
	*input++ = 'e'; *input++ = color;
	*input++ = 'l'; *input++ = color;	
	*input++ = 'O'; *input++ = color;
	*input++ = 's'; *input++ = color;
	*input++ = ' '; *input++ = color;
	*input++ = 'K'; *input++ = color;
	*input++ = 'e'; *input++ = color;
	*input++ = 'r'; *input++ = color;
	*input++ = 'n'; *input++ = color;
	*input++ = 'e'; *input++ = color;
	*input++ = 'l'; *input++ = color;
	*input++ = '!'; *input++ = color;
	
	return 0;
}