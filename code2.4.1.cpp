/*0 ile 100 arasında rasgele değerlerden oluşturacağınız 20 elemanlı bir dizi içerisindeki elemanları 
pointer işlemlerini kullanarak selection sort algoritması ile büyükten küçüğe doğru sıralayınız.*/

#include <stdio.h>
#include <stdlib.h>

void siralama_fonksiyonu(int *dizi, int sayi)
{
    int i,j,enbuyuk,gecici;
    for(int i=0;i<sayi;i++)
    {
        enbuyuk=i;
        for(int j=i+1;j<sayi;j++)
        {
            if (*(dizi+j)>*(dizi+enbuyuk))
            {
                enbuyuk=j;
            }
        }
        gecici=*(dizi+i);
        *(dizi+i)=*(dizi+enbuyuk);
        *(dizi+enbuyuk)=gecici;
    }
}

int main()
{
    int dizi[20]={2,3,4,9,7,6,5,34,56,77,22,33,12,98,45,90,67,8,23,45};
    printf("dizimizin siralamadan onceki hali:\n");
    int i;
    for(i=0;i<20;i++)
    {
         printf("%d  ",dizi[i]);
    }
    siralama_fonksiyonu(dizi,20);
    printf("\ndizimizin buyukten kucuge siralanmis hali:\n");
    for(i=0;i<20;i++)
    {
        printf("%d  ",dizi[i]);
    }

return 0;
}
