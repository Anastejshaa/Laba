#include <stdio.h>
#include <math.h>

// Функція для розв'язання квадратного рівняння
void solve_quadratic_equation(double a, double b, double c) {
    double discriminant, x1, x2, x;

    // Обчислюємо дискримінант
    discriminant = b * b - 4 * a * c;

    // Перевіряємо, чи має рівняння розв'язки
    if (discriminant > 0) {
        // Рівняння має два різних розв'язки
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("x1 = %.2lf\nx2 = %.2lf", x1, x2);
    } else if (discriminant == 0) {
        // Рівняння має один подвійний розв'язок
        x = -b / (2 * a);
        printf("x = %.2lf", x);
    } else {
        // Рівняння не має розв'язків у множині дійсних чисел
        printf("Рівняння не має розв'язків у множині дійсних чисел.");
    }
}

int main() {
    double a, b, c;

    printf("Введіть коефіцієнти a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Викликаємо функцію для розв'язання рівняння
    solve_quadratic_equation(a, b, c);

    return 0;
}
