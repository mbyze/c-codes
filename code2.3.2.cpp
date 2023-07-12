/*Girilen sayıya kadar olan pozitif tamsayıların toplamını bulan öz yinelemeli fonksiyonu yazınız.*/#include <stdio.h>
#include <stdlib.h>
int topla(int sayi)
{
    if (sayi<0)
    {
        printf ("lutfen pozitif bir sayi giriniz!\n");
    }
    else 
    {
        if (sayi==1)
        {
            return 0;
        }
        else 
        {
            return (sayi-1)+topla(sayi-1);
        }
    }
}
int main()
{
    int n;
    printf("lutfen bir sayi giriniz:\n");
    scanf("%d",&n);
    if (n>0)
    {
        printf("girilen sayiya kadar olan pozitif tamsayilarin toplami=%d",topla(n));
    }
    else
    {
        topla(n);
    }
return 0;
}