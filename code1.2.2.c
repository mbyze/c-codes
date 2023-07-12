#include <stdio.h>
int main()
{
    int dizi1[10];
    int dizi2[10];
    int atama;
    int i,k;

    for(i=0;i<10;i++)
    {
        printf("birinci dizinin %d. elemanini giriniz:",i+1);
        scanf("%d",&dizi1[i]);
    }
    for(k=0;k<10;k++)
    {
        printf("ikinci dizinin %d. elemanini giriniz:",k+1);
        scanf("%d",&dizi2[k]);
    }
    for(int i=0;i<10;i+=2)
    {
        atama=dizi[i];
        dizi1[i]=dizi2[i+1];
        dizi2[i+1]=atama;
    }
    for(int i=0;i<10;i++)
    {
        printf("\nbirinci dizinin %d. elemani: %d",i+1,dizi1[i]);
    }
    for(int j=0;j<10;j++)
    {
        printf("\nikinci dizinin %d. elemani: %d",j+1,dizi2[j]);
    }
    return 0;
}