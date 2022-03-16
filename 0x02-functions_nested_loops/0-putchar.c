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
int i = 0;
while (i < 9)
{
_putchar(word[i]);
i++;
}
_putchar("\n");
return (0);
}
