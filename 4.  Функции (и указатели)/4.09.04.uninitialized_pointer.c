/* пример использования неинициализированного указателя - ОШИБКА*/
#include <stdio.h>

int main()
{
    int x;
    int * px;           // px ни на что не указывает - ошибка
    scanf("%d", px);    // результат - ошибка, запись непонятно куда

    printf("%d\n", x+1);

    return 0;
}