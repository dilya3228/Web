#include <unistd.h>

int     main(int argc, char *argv[])
{
    while(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    int a = 0;
    char c;

    while(argv[1][a])
    {
        if((argv[1][a] >= 'A' && argv[1][a] < 'Z') || (argv[1][a] >= 'a' && argv[1][a] < 'z'))
        {
            c = argv[1][a] + 1;
            write(1, &c, 1);
        }
        else if(argv[1][a] == 'Z' || argv[1][a] == 'z')
        {
            c = argv[1][a] - 25;
            write(1, &c, 1);
        }
        a++;
    }
    write(1, "\n", 1);
    return(0);
}

/*Напишите программу, которая берет строку и отображает ее, заменяя каждую из 
ее букв на следующую в алфавитном порядке. символ «z» становится символом «a»,
а символ «Z» становиться становится сиволом «A». Сама строка остается без изменений.
За выходом последует новая строка.
Если количество аргументов не равно 1, программа отображает новую строку.
Пример:
$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y" | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>*/