#include<stdio.h>

void main(){
    int jumlah_pasukan = 958730;
    int pahlawan = 5;
    int dikalahkan = (int) jumlah_pasukan/pahlawan;

    printf("Jumlah pasukan yang harus dikalahkan = %d\n", jumlah_pasukan);
    printf("Jumlah pahlawan = %d\n", pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", dikalahkan);
}