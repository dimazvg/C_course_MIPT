/* Галеоны, сикли, кнаты  - старая задача через указатели
> задача из прошлой темы  
У магов свои деньги. В магической Великобритании это кнаты (knut), сикли (sickle) и галеоны (galleon). 
    - 1 галеон = 17 сиклей, 
    - 1 сикль = 29 кнатов *
В одном кошельке g1 галеонов s1 сиклей и k1 кнатов.
В другом кошельке g2 галеонов s2 сиклей и k2 кнатов.
Сколько всего денег в кошельках?
Представьте эту сумму, используя минимальное количество монет.
Решение:
    - прочитать входные данные
    - перевести деньги в кнаты в каждом кошельке
    - вычислить сумму в кнатах в двух кошельках
    - переведём сумму в геллеоны, сикли и кнаты
    - напечатаем результат
используем для перевода константы через define
*/

#include <stdio.h>

#define GALEON 17   // 1 galleon = 17 sickles
#define SICKLE 29   // 1 sickle = 29 knuts

int money2knats(int g, int s, int k);
void knats2money(int knuts, int* g, int* s, int* k);

int main() {
    int g1, s1, k1, t1;     // кошелек1 - g1 - галлеоны, s1 - сикли, k1 - кнаты, t1 от total1 - кошелёк 1
    int g2, s2, k2, t2;     // кошелек2 - g2 - галлеоны, s2 - сикли, k2 - кнаты, t2 от total2 - кошелёк 2
    int g, s, k, t;        // результат - сумма: галлеоны, сикли, кнаты, total - всего (кошелёк)

    // читаем данные
    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);

    // переводим все в кнаты
    t1 = money2knats(g1, s1, k1);
    t2 = money2knats(g2, s2, k2);

    // считаем сумму в кнатах, результат = кошелек 1 + кошелек 2
    t = t1 + t2;

    // переводим сумму wallet обратно в кнаты, сикли, галеоны
    knats2money(t, &g, &s, &k);

    // печатаем результат
    printf("%d %d %d\n", g, s, k);
    
    return 0;
}

int money2knats(int g, int s, int k) {
    int res = (g * GALEON + s) * SICKLE + k;
    return res;
}

void knats2money(int knuts, int* g, int* s, int* k) {
    *s = knuts / SICKLE;  // из кучи кнатов отложим сикли (большой кучей)
    *k = knuts % SICKLE;  // оставшиеся кнаты - в кошелек
    *g = (*s) / GALEON;  // из кучи сиклей отложим галеоны
    *s = (*s) % GALEON;  // оставшиеся сикли - в кошелек
}