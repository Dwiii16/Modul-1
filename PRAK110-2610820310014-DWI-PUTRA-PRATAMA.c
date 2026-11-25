#include <stdio.h>
#include <math.h>

int main() {
    double alas = 5;
    double tinggi = 12;

    double sisi_A;
    double sisi_B;
    double sisi_C;
    double keliling;
    double luas;

    sisi_A = tinggi;
    sisi_B = sqrt((alas * alas) + (tinggi * tinggi));
    sisi_C = alas;

    keliling = sisi_A + sisi_B + sisi_C;
    luas = (alas * tinggi) / 2;

    printf("Diketahui :\n\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);

    printf("\nJawab :\n\n");

    printf("Sisi A = %.0f cm\n", sisi_A);
    printf("Sisi B = %.0f cm\n", sisi_B);
    printf("Sisi C = %.0f cm\n", sisi_C);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}