#include <unistd.h>

int putnbr(int n)
{
    char c;

    if(n >= 10)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int     fizzbuzz(void)
{
    int n = 1;

    while(n <= 100)
    {
        if(n % 3 == 0 && n % 5 == 0)
            write(1, "fizzbuzz", 8);
        else if(n % 3 == 0)
            write(1, "fizz", 4);
        else if(n % 5 == 0)
            write(1, "buzz", 4);
        else
            putnbr(n);
        write(1, "\n", 1);
        n++;
    }
}

int     main(void)
{
    fizzbuzz();
    return(0);
}

/*Напишите программу, которая печатает числа от 1 до 100, разделенные символом новой строки.
Если число кратно 3, вместо этого печатается «fizz».
Если число кратно 5, вместо этого выводится «жужжание».
Если число одновременно кратно 3 и кратно 5, вместо этого выводится «fizzbuzz».
Пример:
$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$> */