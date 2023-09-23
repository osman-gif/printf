#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int percent(va_list);
int _printf(const char *format, ...);
int _putchar(int c);
int _putdec(long int x, int cnt);
int _string(va_list args);
int _char(va_list args);
int _decimal(va_list args);
int _integer(va_list args);
int _uinteger(va_list args);
int octal(va_list args);
int hex(va_list);
int (*decision(char d))(va_list);
int nothing(va_list);
int percent(va_list);
int address(va_list);
int _strlen(char *, int);
int unsign(va_list);
int _isdigit(int c);
int puthex(unsigned int n, int count);
int putheX(unsigned int n, int count);
int heXa(va_list);
int hexa(va_list);
int putoct(unsigned int, int);
int oct(va_list);
int putaddr(char *, int);
int addr(va_list);
int puthexadd(unsigned long n, int count);
int binary(va_list);
int put_binary(unsigned int, int);
#endif
