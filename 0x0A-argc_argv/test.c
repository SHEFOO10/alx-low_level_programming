#include <stdio.h>

int main(int argc __attribute__((unused)), char *argv[])
{
    // printf("%c", argv[1][2]);
    char t_name = 'c';
    char d_name = 'd';
    const char *name = "shefoo"; // const here add restrict on change value
    char *const name = "shefoo"; // const here add restrict on change what pointer point to

    return (0);
}