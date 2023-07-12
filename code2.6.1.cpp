#include <stdio.h>
#include <stdlib.h>

struct veriler{
    int sayi;
    struct veriler* sonraki;
};

 int main(void)
 {
    struct veriler* ilk=NULL;
    struct veriler* son=NULL;
    struct veriler* gecici=NULL;
    int eklemeler;

     while (1) 
    {
        printf("Bir tam sayi girin (cikmak icin -1): ");
        scanf("%d", &eklemeler);
        if (eklemeler == -1) {
            break;
        }

        if(ilk==NULL)
        {
            ilk=(struct veriler*)malloc(1*sizeof(struct veriler));
            ilk->sayi=eklemeler;
            ilk->sonraki=NULL;
            son=ilk;
        }
        else
        {
            son->sonraki=(struct veriler*) malloc(1*sizeof(struct veriler));
            son=son->sonraki;
            son->sayi=eklemeler;
            son->sonraki=NULL;
        }
    }
    gecici=ilk;
        while(gecici!=NULL)
        {
            printf("adresi:%x, degeri:%d, sonraki adres:%x\n",gecici,gecici->sayi,gecici->sonraki);
            gecici=gecici->sonraki;
        }
 }