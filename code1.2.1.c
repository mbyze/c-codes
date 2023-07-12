#include <stdio.h>
int main()
{
    int dizi[50];
    int ustunde=0;
    int altinda=0;
    int i;
    int sayac;
    float toplam=0;
    float ortalama;

    for(i=0;i<50;i++)
    {
        printf("%d. sayiyi giriniz:",i+1);
        scanf("%d",&dizi[i]);
        sayac++;
        toplam+=dizi[i];
    }
    ortalama=toplam/50;
    for(i=0;i<50;i++)
    {
        if(dizi[i]<ortalama)
        {
            altinda++;
        }
        else if(dizi[i]>ortalama)
        {
            ustunde++;
        }
    }
    printf("ortalama=%.2f\n",ortalama);
    printf("ortalamanin altinda olanlarin sayisi: %d\n",altinda);
    printf("ortalamanin ustunde olanlarin sayisi: %d\n",ustunde);
    return 0;
}