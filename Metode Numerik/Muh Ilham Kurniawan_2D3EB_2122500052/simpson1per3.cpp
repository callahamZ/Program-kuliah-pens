#include<stdio.h>

float f (float x) {
    float y;
    y = 1 / (1 + x);

    return y;
}

 main () {
    float a, b, h, x[100], L[100], luas=0;
    int n;

    printf("Masukkan a = ");
    scanf("%f", &a);
    printf("Masukkan b = ");
    scanf("%f", &b);
    printf("Masukkan n = ");
    scanf("%d", &n);

    h = (b - a) / (2 * n);

    for (int i = 1; i <= n; i++)
    {
        x[i] = x[i-1] + 2 * h;

        L[i] = (h / 3) * (f(x[i-1]) + (4 * f((x[i-1] + x[i]) / 2)) + f(x[i]));
    }

    for (int i = 1; i <= n; i++)
    {
        luas = luas + L[i];
    }
    
    printf("Hasil = %f", luas);
    
 }