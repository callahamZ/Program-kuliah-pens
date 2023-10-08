#include<stdio.h>
#include<math.h>

float f (float x) {
    float y;
    y = x*x - x*5 - 6;
    return y;
}

main() {
    float a, b, x[100];
    int i=0;

    printf("Masukkan a : ");
    scanf("%f", &a);
    printf("Masukkan b : ");
    scanf("%f", &b);

    x[0] = a;
    x[1] = b;

    printf("| iterasi\t|    x[i]\t|  x[i+1]\t|  f(x[i+1])\t|\n");
    printf("-----------------------------------------------------------------\n");

    do
    {
        ++i;
        x[i+1] = (x[i]*f(x[i-1]) - x[i-1]*f(x[i]))/(f(x[i-1]) - f(x[i]));

        printf("|\t%d\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\n", i, x[i], x[i+1], f(x[i+1]));

    } while (fabs(f(x[i+1])) > 0.1);

    printf("Akar adalah = %.2f", x[i+1]);
}
