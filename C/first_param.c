#include <unistd.h>

int     main(int argc, char *argv[])
{
    int i = 0;

    if(argc > 1)
    {
        while(argv[1][i])
        {
            write(1, &argv[1][i++], 1);
        }
    }
    write(1, "\n", 1);
    return(0);
}

/*Напишите программу, которая принимает строки в качестве аргументов и отображает их первый аргумент, сопровождаемый новой строкой.
Если количество аргументов меньше 1, то программа отображает новую строку.
Пример:
$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$*/