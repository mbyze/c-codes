#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
    int id;
    int vize;
    int final;
    float ortalama;
    struct ogrenci *sonraki;
};

void ogrenci_ekle(struct ogrenci *ilk) 
{
    while(1)
    {
struct ogrenci* yeni_ogrenci=(struct ogrenci*)malloc(sizeof(struct ogrenci));
    printf("ogrenci eklemesini tamamlamak icin ID olarak -1 giriniz .\n");
    printf("ogrencinin ID'sini giriniz: ");
    scanf("%d",&yeni_ogrenci->id);
    if(yeni_ogrenci->id==-1)
    {
        break;
    }
    else
    {
    printf("ogrencinin vize notu giriniz: ");
    scanf("%d",&yeni_ogrenci->vize);
    printf("ogrencinin final notu giriniz: ");
    scanf("%d",&yeni_ogrenci->final);
    yeni_ogrenci->ortalama=(yeni_ogrenci->vize)*0.4+(yeni_ogrenci->final)*0.6;
    yeni_ogrenci->sonraki=NULL;
    if (ilk==NULL) 
    {
        ilk=yeni_ogrenci;
    } 
    else 
    {
        struct ogrenci* gecici=ilk;
        while(gecici->sonraki!=NULL) 
        {
            gecici=gecici->sonraki;
        }
        gecici->sonraki=yeni_ogrenci;
    }
    }
    printf("Ortalama: %.2f\n",yeni_ogrenci->ortalama);
    }
    
}
    
int main() 
{
    struct ogrenci* yeni_ogrenci=(struct ogrenci*)malloc(sizeof(struct ogrenci));
    struct ogrenci* ilk = NULL;
    char devam;
        ogrenci_ekle(ilk);
        printf("ID olarak -1 girdiniz bu programi sonlandirmak anlamina geliyor. Devam etmeyeceginize emin misiniz? (E/H): ");
        scanf(" %c", &devam);
    
    if (devam == 'H' || devam == 'h')
    {
       ogrenci_ekle(yeni_ogrenci);
    }
    else
    {
    printf("hesaplamalar bitmistir.");
    }

return 0;
}
