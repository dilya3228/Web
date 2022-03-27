#include <unistd.h>

void        last_word(char *str)
{
    int start = -1;
    int i = 0;
    int log = 0;
    while(str[i])
    {
        if(i == '\t' || i == '\n' || i == '\v' || i == '\f' || i == ' ' || i == '\r')
        {
            log = 0;
        }
        else
        {
            if(log == 0)
            {
                start = i;
                log = 1;
            }
        }
        i++;
    }
    while(str[start] && start != -1)
    {
        if(str[start] != '\t' && str[start] != '\n' && str[start] != '\v' && str[start] != '\f' && str[start] != '\r' && str[start] != ' ')
        {
            write(1, &str[start], 1);
        }
        else
            break;
        start++;
    }
}

int         main(void)
{
    char *str = "dfg rhet rdseh";
    last_word(str);
    write(1, "\n", 1);
    return(0);
}

/*Напишите программу, которая принимает строку и отображает ее последнее слово, за которым следует новая строка.
Слово - это раздел строки, разделенный пробелами/табуляцией или началом/концом строки.
Если количество параметров не равно 1 или нет слов, отобразите новую строку.
Пример:
$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/