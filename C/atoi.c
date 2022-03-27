#include <unistd.h>
#include <stdio.h>

int         ft_atoi(const char *str)
{
    int i = 0;
    int negative = 0;
    int nubmer = 0;

    while((str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == '\t'))
        i++;
    if(str[i] == '-')
        negative = 1;
    if((str[i] == '-') || (str[i] == '+'))
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        nubmer *= 10;
        nubmer += ((int)str[i] - '0');
        i++;
    }
    if(negative == 1)
        return(-nubmer);
    else
        return(nubmer);
}
/*---------------*/

int     main(void)
{
    printf("%d(456)\n", ft_atoi("456"));
    printf("%d( -42)\n", ft_atoi(" -42"));
    printf("%d( --+--069)\n", ft_atoi(" --+--069"));
    printf("%d(47h045)\n", ft_atoi("47h045"));
    printf("%d( 45 45)\n", ft_atoi(" 45 45"));
    printf("%d(--12+7h4)\n", ft_atoi("--12+7h4"));
    printf("%d( ++--p)\n", ft_atoi(" ++--p"));
    printf("%d( ---2147483648)\n", ft_atoi(" ---2147483648 "));
    printf("%d(2147483647)\n", ft_atoi("2147483647"));
}

/*Напишите функцию, которая преобразует строковый аргумент `str` 
в целое число (тип int) и возвращает его.
Он работает так же, как стандартная функция atoi (const char * str), 
смотрите руководство `man`.
Ваша функция должна быть объявлена ​​следующим образом:
	int	ft_atoi(const char *str);*/