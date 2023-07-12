/* 0 ile 1000 arasında rastgele ürettiğinin 100 adet tam sayıyı sayilar.txt dosyasına yazınız. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DOSYA_ADI "sayilar.txt"
#define HEDEF 100
#define MIN_SAYI 0
#define MAKS_SAYI 1000

int main()
{
    srand(time(NULL));
    FILE *dosya =fopen(DOSYA_ADI,"w");
    if(dosya==NULL){
        printf("dosya acma hatasi\n");
        return 1;
    }
    int i,num;
    for (i=0;i<HEDEF;i++)
    {
        num=(rand()%(MAKS_SAYI-MIN_SAYI+1))+MIN_SAYI;
        fprintf(dosya, "%d\n",num);
    }
    fclose(dosya);
    printf("%d adet rastgele sayi %s dosyasina yazildi.\n",HEDEF,DOSYA_ADI);
    return 0;
}
