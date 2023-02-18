#include <stdio.h>

/**
 * main - print the number of arguments
 * @argv: strings containing program name and arguments
 * @argc: number of strings in the argv
 * Return: Always Succes 0 
 */
int main(int argc, char *argv[])
{
    (void) argv;
    printf("%d\n", argc -1);
    return (0);
}
