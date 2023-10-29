#include<stdio.h>
#include<math.h>

float f (float x) {
    float y;
    y = 1 / (1 + x);

    return y;
}

 main () {
    float a, b, h, x[100], L[100], luas=0, err;
    int n;

    printf("Masukkan a = ");
    scanf("%f", &a);
    printf("Masukkan b = ");
    scanf("%f", &b);
    printf("Masukkan n = ");
    scanf("%d", &n);

    h = (b - a) / (3.0 * n);
    x[0] = a;

    for (int i = 0; i < n; i++)
    {
        x[i+1] = x[i] + 3.0 * h;

        L[i+1] = (3.0 / 8.0) * h * (f(x[i]) + (3 * f(x[i] + h)) + (3 * f(x[i] + 2.0 * h)) + f(x[i+1]));
    }

    for (int i = 1; i <= n; i++)
    {
        luas = luas + L[i];
    }

    printf("Hasil = %f\n", luas);

    err = (fabs(0.6931 - luas) / 0.6931) * 100;
    printf("Error = %.2f%%\n", err);

 }
