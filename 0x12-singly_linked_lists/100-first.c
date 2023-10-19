#include "lists.h"

void release(void) __attribute__((constructor));

/**
 * release - The functiond that prints the sentence
 */

void release(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
