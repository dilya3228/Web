#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i = 0;
    int s = 0;

    while(src[i])
        i++;
    char *new_str;
    if(!(src) || ((new_str = (char *)malloc(sizeof(new_str) * i + 1)) == NULL))
        return(NULL);
    while(src[s])
    {
        new_str[s] = src[s];
        s++;
    }
    new_str[s] = '\0';
    return(new_str);
}

int     main(void)
{
    char *src = "asdfg";
    char *str_new = "12345";

    printf("%s\n", src);
    printf("%s\n", str_new);
    str_new = ft_strdup(src);
    printf("%s\n", src);
    printf("%s\n", str_new);
    return(0);
}

/*Воспроизведите поведение функции strdup (man strdup).
Функция `strdup` дублирует строку, на которую указывает аргумент str. Память под 
дубликат строки выделяется с помощью функции `malloc`.
Ваша функция должна быть объявлена ​​следующим образом:
char    *ft_strdup(char *src);*/