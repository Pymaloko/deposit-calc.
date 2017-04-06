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
    }while (check);
    if (srok < 31) {
        if (sum <= 100000) {
            sum-=sum/10;
        }
        else 
            { sum-=sum/10;
        }
    };
    if ((srok >= 31) && (srok < 121)) {
        if (sum <= 100000) {
            sum+=sum/50;
        }
        else { 
            sum+=(sum/100)*3; 
        }
    };
    if ((srok >= 121) && (srok <241)) {
        if (sum <=100000) {
            sum+=(sum/100)*6;
        }
        else { 
            sum+=(sum/100)*8; 
        }
    };
    if (srok >= 241) {
        if (sum <= 100000) {
            sum+=(sum/100)*12;
        }
        else { 
            sum+=(sum/100)*15; 
        }
    };
    printf("Сумма вклада на момент окончания срока: \n%0f\n ", sum);    
}
