#include <unistd.h>

int         main(int argc, char *argv[])
{
    int a = 0;

    if(argc == 2)
    {
        while(argv[1][a])
        {
            int c = 0;

            if(argv[1][a] >= 'A' && argv[1][a] <= 'Z')
            {
                c = argv[1][a] - 64;
                while(c--)
                {
                    write(1, &argv[1][a], 1);
                }   
            }
            if(argv[1][a] >= 'a' && argv[1][a] <= 'z')
            {
                c = argv[1][a] - 96;
                while(c--)
                {
                    write(1, &argv[1][a], 1);
                }
            }
            else
                write(1, &argv[1][a], 1);
                a++;
        }
    }  
    write(1, "\n", 1);
    return(0);
}

/*Напишите программу с именем repeat_alpha, которая берет строку и отображает ее,
повторяя каждый алфавитный символ столько раз, сколько его алфавитный указатель, 
за которым следует новая строка.
'a' стнаовится 'a', 'b' становится 'bb', 'e' становится 'eeeee', и так далее...
Если количество аргументов не равно 1, просто отобразите новую строку.
Примеры:
$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/