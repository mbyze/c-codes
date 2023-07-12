//ödev5soru1
/*0 ile 100 arasında rasgele değerlerden oluşturacağınız 100 adet tam sayıyı sayi.txt dosyasına kaydediniz.
 sayi.txt dosyasındaki tamsayılardan 5. biti 0 olanları oluşturacağınız dinamik bir dizi içerisine pointer 
 işlemeleri kullanarak aktarınız. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define DOSYA_ADI "sayilar.txt"
int sayi;
int sayilar[100];

int main()
{
    srand(time(NULL));
    FILE *dosya=fopen(DOSYA_ADI"w");
    if(dosya==NULL)
    {
        printf("dosya acma hatasi\n");
        return 1;
    }
    for(int i;i<100;i++)
    {
        int sayi=rand()%101;
        sayilar[i]=sayi;
        fprintf(fp,"%d",sayi);
    }
    fclose(fp);

}