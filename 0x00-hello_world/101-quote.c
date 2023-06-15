#include <unistd.h>
/**
* main - entry point
* Description: Prints "Programming is like building a multilingual puzzle"
* to the std output
* Return: 0
*/

int main(void)
{
char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDOUT_FILENO, msg, sizeof(msg) - 1);
return (1);
}
