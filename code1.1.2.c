#include <stdio.h>
int main()
{
    int n,i,toplam=0;
    int sayac=0;
    int ortalama=0;
    printf("lutfen bir sayi giriniz:");
    scanf("%d",&n);
    for(i=0;i>=n;i++)
    {
        if(i%2==0)
        {
            sayac++;
            toplam=toplam+i;
        }
    }
    ortalama=toplam/sayac;
    printf("%d sayisina kadar cift sayilarin toplami=%d\n",n,toplam);
    printf("%d sayisina kadar olan cift sayilarin ortalamasi=%d",n,ortalama);
    return 0;
}