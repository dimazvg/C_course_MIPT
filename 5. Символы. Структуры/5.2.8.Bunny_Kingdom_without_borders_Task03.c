/* Task03 королевство кроликов (без границ)
В игре Королевство кроликов доска 10х10 клеток. 
Ряды кодируются буквами ABCDEFGHIJ сверху вниз, столбцы кодируются числами от 1 до 10 слева направо.
В игре нужно занимать клетки, соседние по горизонтали и вертикали.
	1	2	3	4	5	6	7	9	10
A									
B									
C									
D			D4						
E		E3	E4	E5					
F			F4						
G									
H									
I									
J					
Дана координата клетки. Напечатайте верхнюю, правую, нижнюю и левую соседние клетки на одной строке через пробел.
Гарантируется, что входные данные не содержат клеток на краю поля.
Sample Input:
    E4
Sample Output:
    D4 E5 F4 E3
*/
#include <stdio.h>

int main() {
    char y, x;
    scanf("%c%hhd", &y, &x);
    
    printf("%c%hhd %c%hhd %c%hhd %c%hhd", y - 1, x, y, x + 1, y + 1, x, y, x - 1);

    return 0;
}