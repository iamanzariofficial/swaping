/*
 ============================================================================
 Name        : swaping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=40,b=20,temp;
	temp=b;
	b=a;
	a=temp;
	printf("a:%d  b:%d",a,b);
	return EXIT_SUCCESS;
}
