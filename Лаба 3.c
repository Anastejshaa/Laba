#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5;
    float avg;

    printf("������ ����� �����: ");
    scanf("%d", &num1);

    printf("������ ����� �����: ");
    scanf("%d", &num2);

    printf("������ ���� �����: ");
    scanf("%d", &num3);

    printf("������ �������� �����: ");
    scanf("%d", &num4);

    printf("������ �'��� �����: ");
    scanf("%d", &num5);

    avg = (num1 + num2 + num3 + num4 + num5) / 5.0;

    printf("������ �����������: %f", avg);

    return 0;
}

