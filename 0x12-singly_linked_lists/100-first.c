#include <stdio.h>

/**
 * myStartupFun - Function to be executed before main.
 * It prints the desired message.
 */
void myStartupFun(void) __attribute__((constructor));

/**
 * myStartupFun - Implementation of myStartupFun.
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - The main function.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("(A new adventure is about to unfold...)\n");
	return (0);
}
