#include <unistd.h>

int     main(int argc, char *argv[])
{
    int i = 0;

    if(argc > 1)
    {
        while(argv[argc - 1][i])
        {
            write(1, &argv[argc - 1][i++], 1);
        }
    }
    write(1, "\n", 1);
    return(0);
}

/*Напишите программу, которая принимает строки в качестве аргументов и 
отображает последний аргумент, за которым следует новая строка.
Если количество аргументов меньше 1, программа отображает новую строку.
Пример:
$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$*/