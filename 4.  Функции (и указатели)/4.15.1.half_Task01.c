/* half Делим конфеты пополам
На столе лежит n конфет, где n - натуральное число. 
Каждый ребенок берет половину конфет (с округлением вниз, из 7 конфет он возьмет 3).
Последний ребенок взял 1 конфету.
Сколько детей ели конфеты?
Пусть сначала лежало 7 конфет, их брали так:
Детей	Было    Взяли   Осталось
        конфет  конфет  конфет
1	    7       3	    4
2	    4	    2	    2
3	    2	    1       1
4	    1	    1       0
Рекомендуем написать функцию, которая по количеству конфет на столе a возвращает 
сколько детей ели это количество a конфет.
    int delim_konfety(int a);
Sample Input:
    7
Sample Output:
    4
*/
#include <stdio.h>

int delim_konfety(int a);

int main() {
    int konfet;
    scanf("%d", &konfet);

    int detey = delim_konfety(konfet);
    printf("%d\n", detey);

    return 0;
}

int delim_konfety(int a) {
    if (a == 1) return 1;
    if (a == 0) return 0;
    return 1 + delim_konfety(a - a / 2);
}
