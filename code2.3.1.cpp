/*Kendisine parametre olarak gönderilen iki tam sayının OBEB (Ortak Bölenlerin En Büyüğü)ini
 bulan öz yinelemeli fonksiyonları yazınız.*/
#include <stdio.h>
#include <stdlib.h>

int obeb(int sayi1 , int sayi2)
{
    if(sayi2==0)
    return sayi1;
    return obeb(sayi2,sayi1%sayi2);
}
int main ()
{
    int s1=20;
    int s2=4;
    if(s1<=0 || s2<=0)
    {
        printf("lutfen pozitif sayilar giriniz.\n0 ve negatif sayilar icin obeb kurallari gecerli degildir.");
    }
    else
    {
        printf("%d ve %d sayilari icin obeb = %d",s1,s2,obeb(s1,s2));
    }
return 0;
}
