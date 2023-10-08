#include<stdio.h>
#include<math.h>

float fs (float x) {
    float y;
    y = x*x - 5*x - 6;
    return y;
}

main() {
    float a, b, h, x[100], akar;
    int n;
    //int n;
    printf("Masukkan a :");
    scanf("%f",&a);
    printf("Masukkan b :");
    scanf("%f",&b);
    printf("Masukkan n :");
    scanf("%d",&n);

    if (fs(a) * fs(b) < 0) {
        h = (b-a) / n;
        x[1] = a;

        printf("|\titerasi\t|\tx[i]\t|\tx[i+1]\t|\tf(a)\t|\tf(b\t|\n");

        for (int i = 1; i <= n; ++i)
        {
            x[i+1] = x[i] + h;

            printf("|\t%d\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\t%.2f\t|\n", i, x[i], x[i+1], fs(x[i]), fs(x[i+1]));

            if (fs(x[i]) * fs(x[i+1]) <= 0) {
                if (fabs(fs(x[i])) < fabs(fs(x[i+1]))) {
                    akar = x[i];
                    printf("akar = %f", akar);
                }
                else {
                    akar = x[i+1];
                    printf("akar = %f", akar);
                }
                break;
            }
            else continue;

        }
    }
    else {
        printf("Tidak ada akar");
    }

}
