#include "holberton.h"
/**
 * print_alphabet - print alphabet lowercase x10
 *
 * Description: call print_alphabet() x10
 * Return: sucessful alphabet
 */
void print_alphabet_x10(void) {
	int i;
	for(i=0;i<10;i++) {
		print_alphabet();
	}
}
