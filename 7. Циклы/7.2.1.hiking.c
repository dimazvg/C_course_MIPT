/* Отряд туристов отправился в поход.
В первый день они прошли L км.
Каждый следующий день проходили на k км больше.
Сколько км они прошли за 3 дня?
*/
#include <stdio.h>

int main() {
    int L;      // прошли в первый день
    int k;      // каждый день проходим на k больше

    int i;      // закончилось дней
    int step;   // проходим за 1 день
    int path;   // прошли всего с начала похода

    // читаем входные данные (что дано)
    scanf("%d", &L);
    scanf("%d", &k);

    // готовимся к походу:
    i = 0;      // поход не начался
    step = L;   // планируем в первый день пройти L
    path = 0;   // еще не прошли ничего

    while (i < 3) {
        path += step;   // прошли еще step км
        i++;            // закончили день
        printf("За %d день прошли %d, всего %d\n", i, step, path);
        step += k;      // готовимся к завтрашнему дню, планируем сколько пройти
    }

    // поход окончен, больше никуда не идем, печатаем ответ
    printf("За %d дня прошли %d км\n", i, path);

    return 0;
}