#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0x11223344;
	int* p = &a;
	*p = 0;
	return 0;
}