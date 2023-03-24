#include<stdio.h>

int main(){
    int mbps;
    int mb;
    float timeDownload;

    printf("Enter file size: \n");
    scanf("%i", &mb);

    printf("Enter your internet speed: \n");
    scanf("%i", &mbps);

    timeDownload = mb / ( mbps / 8);

    printf("Estimated downlaod time: %f \n", timeDownload);

}