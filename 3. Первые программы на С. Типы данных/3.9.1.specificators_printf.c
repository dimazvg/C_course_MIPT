#include <stdio.h>
/* printf форматная строка: %[флаги][ширина][.точность][размер]тип
    тип / спецификатор:  d, u, i, c, f, s - тип значения (s - строка)
    размер:  l, ll, h, hh - это размер типа
    ширина:  на печать данных отведено ширина символов (или больше).
             для строк - печатать n или более символов, с выравниванием вправо или влево, дополняя пробелами. 
                Если строка длиннее, то ширина игнорируется.
            * означает, что нужно взять значение ширины из аргумента за форматной строкой
    .точность:  для вещественных чисел - сколько знаков после точки выводить
                для целых чисел - определяет минимальное количество знаков, 
                    если значение короче, то выводятся нули перед числом.
                    Точночть 0 означает, что для значения 0 ничего не выводится.
                для строк %.5s - напечатать не более 5 символов - обрезать строку
                * означает, что нужно взять значение точности из аргумента за форматной строкой
    флаги:  + - указывать явно знак числа, в том числе положительного.
            - - выравнивание влево по указанной ширине
            0 - дополнять слева числа до указанной ширины не пробелами, а 0.
*/
int main() {
    printf("<%d>\n", 12);       // <12>
    printf("<%4d>\n", 12);      // <  12> - дополняется пробелами слева
    printf("<%4d>\n", 12345);   // <12345> - требует больше символов, чем 4, 
                                    // занимает столько символов, сколько нужно, то есть 5
    
    printf("\n");
    printf("%+d %+d\n", 7, -12);         // +7 -12
    printf("<%3d> <%3d>\n", 7, 1234);    // <  7> <1234>
    printf("<%-3d> <%-3d>\n", 7, 1234);  // <7  > <1234>

    printf("\n");
    int h = 12, m = 5;
    printf("%02d:%02d\n", h, m);         // 12:05
    h = 3, m = 55;
    printf("%02d:%02d\n", h, m);         // 03:55
    // %02d:%02d - формат для печати времени hh:mm с лидирующими нулями.

    printf("\n");
    printf("%.3f\n", 12.345678911);   // 12.346
    printf("%8.3f\n", 12.345678911);  //   12.346

    printf("\n");
    int a=3, b=4;
    double res = 0.75;
    printf("||-----|-----|-----|-----||\n");
    printf("|| act | one | two | res ||\n");
    printf("||=====+=====+=====+=====||\n");
    printf("||%5c|%-5d|%-5d|%05d||\n",'+',a,b,a+b);
    printf("||%5c|%5d|%5d|%05d||\n",'-',a,b,a-b);
    printf("||%5c|%5d|%-5d|%05d||\n",'*',a,b,a*b);
    printf("||%-5c|%-5d|%5d|%5.3f||\n",'/',a,b,res);
    printf("===========================\n");

    printf("\n");
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++)
            printf("%-5d",i*j);
        printf("\n");
    }

    // печать строк
    printf("\n------- print strings ----------\n");
    printf("<%5s>\n", "abc");         // <  abc>
    // printf("<%05s>\n", "abc");        // <00abc> - gnu_printf format
    printf("<%-5s>\n", "abc");        // <abc  >
    printf("<%5s>\n", "abcdefgh");    // <abcdefgh>
    printf("<%.5s>\n", "abcdefgh");   // <abcde>
    printf("<%.5s>\n", "abc");        // <abc>

    // * в ширине и точности
    printf("\n------- * in printf ------------\n");
    printf("%0*.*f\n", 10, 5, 1.23456789);  // 0001.23456
                                            // то же, что и при printf("%010.5f", 1.23456789);

    return 0;
}