#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int proverka(float srok, float sum){
    if ((sum<10000) ||(srok < 0 || srok > 365)) {
    return 1;
    }
    else return 0;
}

int main() {
float srok, sum;
int check;
    setlocale (LC_ALL, "rus");
    do {
        printf ("Введите сумму вклада (в рублях) ");
        scanf ("%f", &sum);
        printf("ВВедите срок вклада (в днях) ");
        scanf ("%f", &srok);
        check=proverka(srok, sum);
        if (check == 1) {
            printf("Неверно введены данные, введите заново:\n");
        };
    }    
}
