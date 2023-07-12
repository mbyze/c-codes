//ödev5soru2
/*Kullanıcı tarafından negatif tam sayı girilene kadar tam sayı girmesini isteyiniz.Girilen sayılardan 
3’e ve 5’e tam bölünenleri dinamik olarak oluşturacağınız bir diziye pointer aritmetiği kullanarak yazınız.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    int bolunenler=0;
    int sayi;
    int *p1=NULL;
    printf("lutfen bir tamsayi giriniz:");
    scanf("%d",&sayi);
    while(sayi>=0)
      {
        if (sayi%3==0 || sayi%5==0)
        {
            bolunenler++;
            p1=realloc(p1,bolunenler* sizeof(int));
        }
        printf("lutfen bir tamsayi giriniz:");
        scanf("%d",&sayi);
      }
    
    printf("3 sayisina veya 5 sayisina tam bolunenler:");
    for(int i=0;i<bolunenler;i++)
    {
        printf("%d",*(p1+i));
    }
    free(p1);

return 0;
}