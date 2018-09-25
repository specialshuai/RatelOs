#!Makefile
#--------------------------------------------------------------
#
#		Ratel Os 内核的Makefile文件	
#		默认使用的C编译器是GCC(cpp+ccl+as+ld)、汇编编译器是nasm
#
#---------------------------------------------------------------
#
# patsubst处理所有在C_SOURCE或者S_SOURCES下的一系列文件名，如果是.c或者.s，则用.o代替
C_SOURCES = $(shell find . -name "*.c")
C_OBJECTS = $(patsubst %.c, %.o, $(C_SOURCES))
S_SOURCES = $(shell find . -name "*.s")
S_OBJECTS = $(patsubst %.s, %.o, $(S_SOURCES))

CC = gcc
LD = ld
ASM = nasm

C_FLAGS = -c -Wall -m32 -ggdb -gstabs+ -nostdinc -fno-builtin -fno-stack-protector -I include
LD_FLAGS = -T scripts/kernel.ld -m elf_i386 -nostdlib
ASM_FLAGS = -f elf -g -F stabs

all: $(S_OBJECTS) $(C_OBJECTS) link update_image
# The automatic variable `$<' is just the first prerequisite
# The automatic variable `$^' is all prerequisite
# The automatic variable `$@' is the target file