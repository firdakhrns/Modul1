#include<stdio.h>

void main(){
    //miring = 144-25
    int alas = 5;
    int tinggi = 12;
    int miring = 13;
    int keliling = (int) alas+tinggi+miring;
    int luas = (int) alas*tinggi/2;

    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", miring);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm", luas);
}