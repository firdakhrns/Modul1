#include<stdio.h>

void main(){
    int a, b, c, d;
    a = 400000;
    b = 350000;
    c = (int) a - 0.13 * a;
    d = (int) b - 0.21 * b;

    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", c);
    printf("Sepatu B mendapat diskon 21%% sehigga harganya menjadi %d", d);

}