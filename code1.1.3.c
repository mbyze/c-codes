#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float ciftcarpim=1;
    int sayi1,tektoplam=0;
    float sayac1=0,sayac2=0;
    float aritmetik,geometrik;
    int i;
    for(i=1;i<5;i++)
    {
        printf("%d. sayiyi giriniz:",i);
        scanf("%d",&sayi1);

        if(sayi1%2==0)
        {
            ciftcarpim*=sayi1;
            sayac2++;
        }
        else
        {
            tektoplam+=sayi1;
            sayac1++;
        }
    }
    aritmetik=tektoplam/sayac1;
    geometrik=pow(ciftcarpim,1/sayac2);

    printf("teklerin aritmetigi= %2f\n",aritmetik);
    printf("ciftlerin geometrigi= %2f\n",geometrik);

    return 0;
}