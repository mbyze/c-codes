#include <stdio.h>
#include <stdlib.h>

struct liste{
    int sayi;
    struct liste *onceki;
    struct liste *sonraki;
};

int main(void) 
{
 struct liste *ilk=NULL;
 struct liste *ptr=NULL, *gecici=NULL;
 int okunan;
 char sec;
do
{
    printf("Bir tam sayı girin: ");
    scanf("%d", &okunan);
    
    if(ilk==NULL)
    {
        ilk=(struct liste*) malloc(1*sizeof(struct liste));
        ilk->sayi=okunan;
        ilk->onceki=NULL;
        ilk->sonraki=NULL;
        ptr=ilk;
    }
    else
    {
        ptr->sonraki=(struct liste*)malloc(1*sizeof(struct liste));
        ptr->sonraki->onceki=ptr;
        ptr=ptr->sonraki;
        ptr->sayi=okunan;
        ptr->sonraki=NULL;
    }
     
    printf("Devam etmek istiyor musunuz? (E/H): ");
    scanf(" %c", &sec);
} 
while (sec=='E'||sec=='e' );
gecici=ilk;
while(gecici!=NULL)
{
    printf("\n");
    printf("sayi: %d\nsayinin bulundugu adres: %x\nonceki sayinin adresi:%x\nsonraki sayinin adresi:%x\n",gecici->sayi,gecici,gecici->onceki,gecici->sonraki);
    printf("\n");
    gecici=gecici->sonraki;
}
return 0;
}