#include <conio.h>
#include <stdio.h>
  
#define SIZE 10
#define false 0
#define true !false
 
int main() {
    float a[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 0.0f};
    float tmp;
    unsigned i, j;
    char flag;
 
    //Выводи массив
    for (i = 0; i < SIZE; i++) {
        printf("%.3f ", a[i]);
    }
    printf("\n");
 
    //Пока массив не отсортирован
    do {
        flag = false;
        //Проходим по массиву. Если следующий элемент больше предыдущего, то
        //меняем их местами и по новой проверяем массив
        for (i = 1; i < SIZE; i++) {
            if (a[i] > a[i - 1]) {
                tmp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = tmp;
                flag = true;
            }
        }
 
    } while(flag == true);
 
    //Выводим отсортированный массив
    for (i = 0; i < SIZE; i++) {
        printf("%.3f ", a[i]);
    }
 
    getch();
}
