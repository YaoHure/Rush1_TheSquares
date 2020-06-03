/*
** EPITECH PROJECT, 2018
** rush-1-3
** File description:
** Yaowanart & William
*/

void rush(int columns, int lines)
{
    if (columns <= 0 ||  lines <= 0) {
        char error[15] = "Invalid size\n";
        int i = 0;
        while (error[i] != '\0') {
            my_putchar(error[i]);
            i++;
        }
        return (0);
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
    if(lines == 1 || columns == 1) {
        my_putchar('B');
    }else {
        if (l > 0 && l < lines-1) {
            if (c == 0 || c == columns-1) {
                my_putchar('B');
            }else {
                my_putchar(' ');
            }
        }else {
            display_starter_end(columns, lines, l, c);
        }
    }
}

void display_starter_end(int columns, int lines, int l, int c)
{
    if (l == 0 && (c == 0 || c == columns-1)) {
        my_putchar('A');
    }else if (l == lines-1 && (c == 0 || c == columns-1)) {
        my_putchar('C');
    }else {
        my_putchar('B');
    }
}
