/* Task01 из большой в маленькую
Дана большая латинская буква. Напечатайте соответствующую ей маленькую латинскую букву.
Посылать всю программу. Проверку входных данных делать не нужно, гарантируется, что первый символ входного потока - большая латинская буква.
Sample Input:
    A
Sample Output:
    a
*/
#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    c = c - 'A' + 'a';
    
    printf("%c", c);

    return 0;
}