#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    float avg;

    printf("Введіть перше число: ");
    scanf("%d", &num1);

    printf("Введіть друге число: ");
    scanf("%d", &num2);

    printf("Введіть третє число: ");
    scanf("%d", &num3);

    printf("Введіть четверте число: ");
    scanf("%d", &num4);

    printf("Введіть п'яте число: ");
    scanf("%d", &num5);

    avg = (num1 + num2 + num3 + num4 + num5) / 5.0;

    printf("Середнє арифметичне: %f", avg);

    return 0;
}
