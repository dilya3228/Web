#include <unistd.h>

void    ft_rot_13(char *str)
{
    int up;
    int dwn;
    int i;

    i = 0;
    while(str[i])
    {
        up = str[i] + 13;
        dwn = str[i] - 13;
        if(('A' <= str[i] && 'M' >= str[i]) || ('a' <= str[i] && 'm' >= str[i]))
            write(1, &up, 1);
        else if(('N' <= str[i] && 'Z' >= str[i]) || ('n' <= str[i] && 'z' >= str[i]))
            write(1, &dwn, 1);
        else
            write(1, &str[i], 1);
        i++;
    }
}

int     main(int argc, char *argv[])
{
    if(argc == 2)
        ft_rot_13(argv[1]);
    write(1, "\n", 1);
    return(0);
}

/*Напишите программу, которая берет строку и отображает ее, заменяя каждую из ее букв на 13 букв вперед в алфавитном порядке.
«z» становится «m», а «Z» становится «M». Дело остается без изменений.
За выходом последует новая строка.
Если количество аргументов не равно 1, программа отображает новую строку.
Пример:
$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>*/