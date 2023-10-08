#include<stdio.h>

float f(float x) {
    float y;

    y = 1 / (1 + x);

    return y;
}

main () {
    float a, b, h, L[100], x[100], jumlah;
    int n;

    printf("Masukkan a = ");
    scanf("%f", &a);
    printf("Masukkan b = ");
    scanf("%f", &b);
    printf("Masukkan n = ");
    scanf("%d", &n);

    h = (b - a) / n;
    x[0] = a;

    for (int i = 1; i <= n; i++)
    {
        x[i] = x[i-1] + h;
        L[i] = h/2 * (f(x[i-1]) + f(x[i]));
    }

    jumlah = 0;

    for (int j = 1; j <= n; j++)
    {
        jumlah = jumlah + L[j];
    }

    printf ("Hasil = %.4f", jumlah);


}
