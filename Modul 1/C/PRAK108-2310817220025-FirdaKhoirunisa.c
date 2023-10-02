#include<stdio.h>

void main(){
    int mengelilingi_taman = 5;
    int jarak_tempuh = 14;
    float keliling = (float) jarak_tempuh/mengelilingi_taman;
    //keliling = 2*22/7*r
    //jari-jari = 7/44*keliling
    float r = (float) 7/44*keliling;

    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", r);
}