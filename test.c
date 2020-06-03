/*
** EPITECH PROJECT, 2018
** Test
** File description:
** Yaowanart & William
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    rush(5, 3);
    my_putchar('\n');
    rush(5, 1);
    my_putchar('\n');
    rush(1, 1);
    my_putchar('\n');
    rush(1, 5);
    my_putchar('\n');
    rush(4, 4);
    my_putchar('\n');
    rush(0, 0);
    my_putchar('\n');
    rush(20, 20);
    return(0);
}
