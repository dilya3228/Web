#include <unistd.h>

void        ft_putstr(char *str)
{
    while(*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}

/*------------------*/
int         main(void)
{
    char *str = "esrhs";

    ft_putstr(str);
    write(1, "\n", 1);
        return(0);
}

/*Напишите функцию, которая отображает строку в стандартном выводе.
Указатель, переданный функции, содержит адрес первого символа строки.
Ваша функция должна быть объявлена ​​следующим образом:
void	ft_putstr(char *str);*/