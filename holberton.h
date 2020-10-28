#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
void putstringsp(char *, int *);
int _printf(const char *, ...);
int _putchar(char);
void putstring(char *, int *, int *);
int _strlen(const char *);
void _printd(int *, int *);
void _putcharp(char, int *, int *);
void _number(int, int *);
int _putchars(char, int *);
void _printbi(int, int *);
void _printo(int, int *);
void _unint(unsigned int, int*);
void _printh(int, int *);
void _printhm(int, int *);

#endif
