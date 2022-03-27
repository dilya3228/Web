#include <unistd.h>

int     ft_spece(char i)
{
    if(i == '\t' || i == '\n' || i == '\v' || i == '\f' || i == ' ')
        return(1);
    return(0);
}

void    ft_first_word(char *str)
{
    while(ft_spece(*str))
        str++;
    while(*str && !(ft_spece(*str)))
        write(1, str++, 1);
}

int     main(int argc, char *argv[])
{
    if(argc == 2)
        ft_first_word(argv[1]);
    write(1, "\n", 1);
    return(0);
}

/*Напишите программу, которая принимает строку и отображает ее первое слово, за 
которым следует новая строка.
Слово - это раздел строки, разделенный пробелами/табуляцией или началом/концом строки.
Если количество параметров не равно 1 или нет слов, просто отобразите новую строку.
Примеры:
$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/