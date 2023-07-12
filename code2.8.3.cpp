#include <stdio.h>
#include <stdlib.h>

struct liste{
    int veri;
    struct liste* sonraki;
};

struct liste* yeni(int veri) 
{
    struct liste* dugum=(struct liste*)malloc(sizeof(struct liste));
    dugum->veri=veri;
    dugum->sonraki=NULL;
    return dugum;
}

struct liste* degisim(int n) 
{
    struct liste* ilk=NULL;
    struct liste* son=NULL;
    struct liste* kiraz=NULL;
    
    for(int i=0;i<n;i++) 
    {
        son=yeni(rand()%100);
        if(ilk==NULL) 
        {
            ilk=son;
        } 
        else 
        {
            kiraz=ilk;
            while(kiraz->sonraki!=NULL) 
            {
                kiraz=kiraz->sonraki;
            }
            kiraz->sonraki=son;
        }
    }
    return ilk;
}

struct liste* elma(struct liste* ilk) 
{
    if(ilk==NULL || ilk->sonraki==NULL) 
    {
        return ilk;
    }
    struct liste* visne = elma(ilk->sonraki);
    ilk->sonraki->sonraki=ilk;
    ilk->sonraki = NULL;    
    return visne;
}

void listele(struct liste* ilk) 
{
    struct liste* kiraz=ilk;
    while(kiraz != NULL)
    {
        printf("%d ",kiraz->veri);
        kiraz=kiraz->sonraki;
    }
    printf("\n");
}

int main()
{
    int kactane;
    printf("Bağlı liste eleman sayısını girin: ");
    scanf("%d",&kactane);
    
    struct liste* ilk=degisim(kactane);

    printf("Oluşturulan bağlı liste: ");
    listele(ilk);
    
    ilk = elma(ilk);
    
    printf("Ters çevrilen bağlı liste: ");
    listele(ilk);
    
return 0;
}

