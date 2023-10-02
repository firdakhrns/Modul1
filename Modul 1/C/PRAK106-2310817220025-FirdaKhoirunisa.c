#include<stdio.h>

void main(){
    int a = 4;
    int b = 8;
    int c = 3;
    int satu = a==b;
    int dua = b>c;
    int tiga = a!=c;

    printf("Apakah a sama dengan b? Jawabannya adalah %d\n", satu);
    printf("Apakah b lebih besar dari c? Jawabannya adalah %d\n", dua);
    printf("Apakah a tidak sama dengan c? Jawabannya adalah %d\n", tiga);
}