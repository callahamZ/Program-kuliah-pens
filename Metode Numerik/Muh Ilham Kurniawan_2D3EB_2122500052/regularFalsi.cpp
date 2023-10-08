#include<stdio.h>
#include<math.h>

float f (float x) {
    float y;
    y = x*x - x*5 - 6;
    return y;
}

main() {
    float a, b, c;
    int i=1;

    printf("Masukkan a : ");
    scanf("%f", &a);
    printf("Masukkan b : ");
    scanf("%f", &b);

    printf("| iterasi\t|\ta\t|\tb\t|\tc\t|\tf(c)\t|\n");

    if (f(a) * f(b) < 0) {
        c = (b*f(a) - a*f(b)) / (f(a) - f(b));
        while (fabs(f(c)) > 0.1)
        {

            if (f(a) * f(c) < 0)
                b = c;
            else
                a = c;

            c = (b*f(a) - a*f(b)) / (f(a) - f(b));
        }
        printf("|\t%d\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\n", i++, a, b, c, f(c));
    }
    else {
        printf("Tidak ada akar");
    }
}
