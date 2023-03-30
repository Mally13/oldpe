#include "main.h"
/**
 * print_char - prints a character
 * @specifier: conversion specifier matched
 * Return: 0
 */
void print_char(va_list list)
{
	char c, *c_pointer;

	c = va_arg(list, int);
	c_pointer = &c;
	write(1, c_pointer, 1);
}
