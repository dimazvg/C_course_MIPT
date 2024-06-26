/* for_6 Сколько раз встретилась цифра в ОЧЕНЬ БОЛЬШОМ числе?
Даны через пробел цифра d и целое число в десятичной записи k. 0 <= k <= 10^100.
 Напечатайте d, k и сколько раз цифра d входит в десятичную запись числа k?

Подсказка-1: это не копия предыдущей задачи. k не поместится ни в один целочисленный тип. Придется читать и обрабатывать по символу.
Подсказка-2: как проверить, что символ - это цифра от 0 до 9? И при чем тут ctype.h?
Подсказка-2а: где в условии задачи сказано, что во входной последовательности будет обязательно \n? Нигде!
Подсказка-3: Если читаете через scanf, то вспомните, как читать неизвестное заранее количество данных
Подсказка-4: Альтернатива scanf
    int c;      // обязательно int
    while ((c = getchar()) != EOF) { ... } // читать символы до конца потока (файла)
...
Sample Input:
    3 13234533
Sample Output:
    3 13234533 4

=== !!! работает только с файоами с входными данными через перенаправление потока a.out < test.txt !!! ===
    иначе уходит в бесконечный цикл
*/
#include <stdio.h>

int main()
{
    int d;
    scanf("%d ", &d);
    printf("%d ", d);
    
    int count = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c - '0' == d) count++;
        putchar(c);
    }

    printf(" %d", count);
          
    return 0;
}