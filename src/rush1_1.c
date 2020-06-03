/*
** EPITECH PROJECT, 2018
** rush1-1
** File description:
** Yaowanart & William
*/

void rush(int columns, int lines)
{
    if (columns <= 0 || lines <= 0) {
        char error[15] = "Invalid size\n";
        int i = 0;
        while (error[i] != '\0') {
            my_putchar(error[i]);
            i++;
        }
        return (error);
    }

    for (int l = 0 ; l < lines ; l++) {
        for (int c = 0 ; c < columns ; c++) {
            display_character(columns, lines, l, c);
        }
        my_putchar('\n');
    }
}

void display_character(int columns, int lines, int l, int c)
{
    if (l > 0 && l < lines-1) {
        if (c == 0 || c == columns-1) {
            my_putchar('|');
        }else {
            my_putchar(' ');
        }
    }else {
        if (c == 0 || c == columns-1) {
            my_putchar('o');
        }else {
            my_putchar('-');
        }
    }
}
