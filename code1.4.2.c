#include <stdio.h>
int sayi,m,toplam=0;
void fnk(int byz)
{
    while(sayi>0)
    {
        m=sayi%10;
        toplam=toplam+m;
        sayi=sayi/10;
    }
}
int main()
{
    int x;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    fnk(x);
    printf("girdiginiz sayidaki rakamlarin toplami=%d",toplam);

    return 0;
}