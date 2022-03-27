#include <unistd.h>

int     ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
    {
        i++;
    }
    return(i);  
}

int     main(int argc, char *argv[])
{
    if(argc != 4)
    {
        write(1, "\n", 1);
        return(0);
    }
    if(ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
    {
        write(1, "\n", 1);
        return(0);
    }
    int i = 0;

    while(argv[1][i])
    {
        if(argv[1][i] == argv[2][0])
        {
            argv[1][i] = argv[3][0];
        }
        i++;
    }
    i = 0;
    while(argv[1][i])
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}

/*Напишите программу с именем search_and_replace, которая принимает 3 аргумента.
Первый аргумент программы - это строка, в которой нужно найти и заменить буквы.
Второй аргумент программы - будет содрежать пример буквы, которую нужно заменить.
Третий аргумент программы - будет содрежать пример буквы, которая будет напечатана взамен буквы из второго аргумента.
аргументом, на другую букву, которая будет в 3-м аргументе.
Если количество аргументов не равно 3, просто отобразите новую строку.
Если второй аргумент не содержится в первом (строке), тогда программа просто переписывает строку, за которой следует новая строка.
Примеры:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $*/