#include <stdio.h>
#include "main.h"
/**
 *main - main function
 *
 *Return:  0
 **/
int main(void)
{
char word[8] = "_putchar";
for (int i = 0; i < 9; i++)
_putchar("%c", word[i]);
return (0);
}
