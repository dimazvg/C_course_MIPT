/* if_rect Принадлежит ли точка области?
По данным x и y координатам точки напечатайте - принадлежит точка к указанной области (включая границы) или нет.
Если принадлежит, напечатайте YES, иначе напечатайте NO.
        рисунок в файле 6.5.7.Task07_if_rect.md
    |            |   
 6----------------------
 4  |            |     
 2  |            |     
 0  |            |     
-2  |            |     
-4----------------------
    |            |
-4 -3 -2   0  1  2  3  5
Подсказка для тех, кто не особо силен в математике:
    -3 <= x <= 2
    -4 <= y <= 6
Sample Input:
    -2.3 3.7
Sample Output:
    YES
*/
#include <stdio.h>

int main()
{
    double x, y;
    scanf("%lf%lf", &x, &y);
    
    if (x >= -3 && x <= 2 && y >= -4 && y <= 6)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}