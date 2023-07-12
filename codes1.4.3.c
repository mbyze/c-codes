#include <stdio.h>
int sayi,sayac;
int asalmi(int sayi)
{
    {
        int i;
        for(i=2;i<sayi;i++)
        {
            if(sayi%i==0)
            sayac++;
        }
    }
}
int main()
{
    printf("lutfen bir sayi giriniz:");
    scanf("%d",&sayi);
    asalmi(sayi);
    if(sayac==0 && sayi!=1)
    {
        printf("girdiginiz sayi asaldir.");
    }
    else
    {
        printf("girdiginiz sayi asal degildir.");
    }
    return 0;
}