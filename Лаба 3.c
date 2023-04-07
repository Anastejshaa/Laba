#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    float avg;

    printf("¬вед≥ть перше число: ");
    scanf("%d", &num1);

    printf("¬вед≥ть друге число: ");
    scanf("%d", &num2);

    printf("¬вед≥ть третЇ число: ");
    scanf("%d", &num3);

    printf("¬вед≥ть четверте число: ");
    scanf("%d", &num4);

    printf("¬вед≥ть п'€те число: ");
    scanf("%d", &num5);

    avg = (num1 + num2 + num3 + num4 + num5) / 5.0;

    printf("—ереднЇ арифметичне: %f", avg);

    return 0;
}

