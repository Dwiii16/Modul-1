#include <stdio.h>

int main() {
    double putaran = 5;
    double jarak = 14;
    double pi = 3.141592653589793;

    double keliling, jari_jari;

    keliling = jarak / putaran;
    jari_jari = keliling / (2 * pi);

    printf("Diketahui :\n\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n",
           putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n",
           jarak);

    printf("\nJawaban :\n\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n",
           jari_jari);

    return 0;
}