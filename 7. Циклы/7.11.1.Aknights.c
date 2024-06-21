/* Aknights Рыцари и лжецы
На острове Буяне жили N человек, каждый из которых был либо рыцарем либо лжецом, встали в круг.
Рыцари говорят только правду, лжецы всегда только лгут. Каждому человеку в кругу задали вопрос: 
    «Кто ты и кто твой сосед слева: рыцарь или лжец?» 
При этом каждый человек сказал, что он – рыцарь. 
А ответы всех людей о левом соседе были записаны в следующем формате: 1 – рыцарь 0 – лжец. 
Все ответы записаны в строку через пробел. Последний спрошенный человек отвечал на вопрос о первом.
Написать программу, которая по ответам жителей определяет, какое количество рыцарей заведомо присутствует в круге.
Sample Input:
4
1 0 1 0
Sample Output:
2
*/
/* Решаем, рассуждаем - делаем 2 предполажения (варианта):
предположение/вариант 1 - первый человек - рыцарь:
    v1 - статус первого предполажения, 0 - неверное, 1 - верное
    man1 - статус текущего и затем следующего человека, 1 - рыцарь, 0 - лжец
    count1 - кол-во рыцарей, если v1 == 1
предположение/вариант 2 - первый человек - лжец:
    v2 - статус второго предполажения, 0 - неверное, 1 - верное
    man2 - статус текущего и затем следующего человека, 1 - рыцарь, 0 - лжец
    count2 - кол-во рыцарей, если v2 == 1
*/
#include <stdio.h>

int main()
{
    int v1 = 0, man1 = 1, count1 = 1;           // предположение 1, первый человек - рыцарь (1)
    int v2 = 0, man2 = 0, count2 = 0;           // предположение 2, первый человек - лжец (0)

    int n;  // кол-во человек
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int statement;
        scanf("%d", &statement);
        if (statement) {        // высказывание "следующий - рыцарь"
            // для варианта 1
            if (man1) {         // если рыцарь сказал
                man1 = 1;
                if (i != n - 1) count1++;
            } else {            // если лжец сказал
                man1 = 0;
            }
            // для варианта 2
            if (man2) {         // если рыцарь сказал
                man2 = 1;
                count2++;
            } else {            // если лжец сказал
                man2 = 0;
            }
        } else {                // высказывание "следующий - лжец"
            // для варианта 1
            if (man1) {         // если рыцарь сказал
                man1 = 0;
            } else {            // если лжец сказал
                man1 = 1;
                if (i != n - 1) count1++;
            }
            // для варианта 2
            if (man2) {         // если рыцарь сказал
                man2 = 0;
            } else {            // если лжец сказал
                man2 = 1;
                count2++;
            }
        }
    }

    if (man1) v1 = 1;
    if (!man2) v2 = 1;

    if (v1 && v2) 
        if (count1 <= count2)
            printf("%d", count1);
        else
            printf("%d", count2);
    else if (v1)
        printf("%d", count1);
    else if (v2) 
        printf("%d", count2);
    else
        printf("%d", 0);

    return 0;
}