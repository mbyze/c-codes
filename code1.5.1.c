#include <stdio.h>
#include <string.h>

struct isci{
    char adi[30];
    char soyadi[30];
    int yas;
    double maas;
};
struct isci isci_bilgileri(){
    struct isci i
    printf("adinizi giriniz:");
    gets(i.adi);

    printf("soyadinizi giriniz:");
    gets(i.soyadi);

    printf("yasinizi giriniz:");
    scanf("%d",&i.yas);

    printf("maasinizi giriniz:");
    scanf("%lf",&i.maas);
return i;
}
int main()
{
    struct isci i=isci_bilgileri();
    printf("iscinin adi=%s\n",i.adi);
    printf("iscinin soyadi=%s\n",i.soyadi);
    printf("iscinin yasi=%d\n",i.yas);
    printf("iscinin maasi=%.lf\n",i.maas);
    return 0;
}
