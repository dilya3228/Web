#include <unistd.h>
#include <stdio.h>

int			main(int argc, char *argv[])
{
	int log = 1;
	int i = 0;
	int j = 0;
	int u = 0;

	printf("%c", argv[1][0]);
	while(argv[1][i])
	{
		j = 0;
		while(j < 1)
		{
			if(argv[1][i] == argv[1][j])
			{
				log = 0;
				break;
			}
			j++;
		}
		if(log == 1)
			printf("%c", argv[1][i]);
		log = 1;
		i++;
	}
	int f = 0;
	int y = 0;
	int h = 0;
	log = 1;

	while(argv[2][f])
	{
		y = 0;
		while(y < f)
		{
			if(argv[2][f] == argv[2][y])
			{
				log = 0;
				break;
			}
			y++;
		}
		h = 0;

		while(argv[1][h])
		{
			if(argv[1][h] == argv[2][f])
			{
				log = 0;
				break;
			}
			h++;
		}
		if(log == 1)
		{
			printf("%c", argv[2][f]);
		}
		log = 1;
		f++;
	}
	printf("\n");
	return(0);
}

/*Напишите программу, которая принимает две строки и отображает без двойных символов
символы, которые появляются только в одной из строк.
Отображение будет в том порядке, в котором символы появляются в командной строке,
и за ними последует новая строка.
Если количество аргументов не равно 2, программа отображает новую строку.
Пример:
$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>*/