#include <unistd.h>

int     main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    int t = 0;

    while(argv[1][t])
        t++;
    while(t >= 0)
    {
        write(1, &argv[1][t], 1);
        t--;
    }
    write(1, "\n", 1);
    return(0);
}

/*Напишите программу, которая принимает строку и отображает строку в обратном
порядке, за которой следует новая строка.
Если количество параметров не равно 1, программа отображает новую строку.
Примеры:
$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$*/