#include <stdio.h> <math.h>

float f(float x)
{
    float y;
    y = x * x - 5 * x - 6;
    return y;
}

main()
{
    float a, b, n, c[100], h, akar;
    printf("PROGRAM TABEL\n");
    printf("Masukkan batas awal : ");
    scanf("%f", &a);
    printf("Masukkan batas akhir : ");
    scanf("%f", &b);
    printf("Masukkan banyak cacahan : ");
    scanf("%f", &n);

    if (f(a) * f(b) < 0)
    {
        
        h = (b - a) / n;
        c[0] = a;
        for (int i = 0; i <= n; i++)
        {
            c[i + 1] = c[i] + h;
            if (f(c[i]) * f(c[i + 1]) < 0)
            {
                if (fabs(f(c[i])) < fabs(f(c[i + 1])))
                {
                    akar = f(c[i]);
                    printf("Akar adalah %f  \n", akar);
                }
                else
                    akar = f(c[i + 1]);
                printf("Akar adalah %f  \n", akar);
            }
        }
    }
    else
        printf("Tidak ada akar");
}
