#include<stdio.h>

float f (float x) {
    float y;

    y = x*x + 5*x - 6;
    return y;
}

main () {
    float xx, yy=0, x[100], y[100], L[100], a, b;
    int n;

    printf("Masukkan x :");
    scanf("%f", &xx);

    printf("Masukkan banyaknya n :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("------------\n");
        printf("Masukkan x%d :", i);
        scanf("%f", &x[i]);
        printf("Masukkan y%d :", i);
        scanf("%f", &y[i]);
    }

    for (int i = 0; i < n; i++)
    {
        a = 1;
        b = 1;

        for (int j = 0; j < n; j++)
        {
            if (j==i)
                continue;

            a = a * (xx - x[j]);

        }

        for (int k = 0; k < n; k++)
        {
            if (k==i)
                continue;

            b = b * (x[i] - x[k]);
        }

        L[i] = a / b;
        printf("L%d = %.2f\n", i, L[i]);


    }

    for (int p = 0; p < n; p++)
    {
        yy = yy + y[p]*L[p];
    }

    printf("\nMaka Y = %.2f\n", yy);

}
