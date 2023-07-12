#include <stdio.h>
#include <stdlib.h>

struct liste{
    int veri;
    struct liste* onceki;
    struct liste* sonraki;
};

struct liste* ilk=NULL;

struct liste* olustur(int deger) 
{
    struct liste* yeni = (struct liste*)malloc(sizeof(struct liste));
    yeni->veri = deger;
    yeni->onceki = NULL;
    yeni->sonraki = NULL;
    return yeni;
}

void bul(int deger) 
{
    struct liste* yeni = olustur(deger);
    
    if (ilk == NULL || deger < ilk->veri) {
        yeni->sonraki = ilk;
        if (ilk != NULL)
            ilk->onceki = yeni;
        ilk = yeni;
        return;
    }
    
    struct liste* nerede = ilk;
    
    while (nerede->sonraki != NULL && nerede->sonraki->veri < deger)
        nerede = nerede->sonraki;
    
    yeni->onceki = nerede;
    yeni->sonraki = nerede->sonraki;
    
    if (nerede->sonraki != NULL)
        nerede->sonraki->onceki = yeni;
    nerede->sonraki = yeni;
}

void listele() 
{
    struct liste* nerede = ilk;
    printf("listenin siralanmis hali: ");
    
    while (nerede != NULL) {
        printf("%d ", nerede->veri);
        nerede = nerede->sonraki;
    }
    
    printf("\n");
}

int main() {
    int sayi;
    char sec;
    
    do {
        printf("bir sayı girin: ");
        scanf("%d", &sayi);
        bul(sayi);
        
        listele();

        
        printf("devam etmek istiyor musunuz? (E/H): ");
        scanf(" %c", &sec);
    } while (sec == 'E' || sec == 'e');
    
    return 0;
}
