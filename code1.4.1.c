#include <stdio.h>
float kombinasyon(int k)
{
    int i,f=1;
    for(i=2;i<=k;i++)
    f=f*i;
    return(f);
}
int main()
{
    int n,r;
    float kom;
    printf("kombinasyon hesabini C(n,r) seklinde yapacagiz. \nkombinasyon kurallarina gore n>r olmalidir. \nbu duzene gore lutfen sayilari giriniz.\n");
    printf("lutfen n degerini giriniz: ");
    scanf("%d",&n);
    printf("lutfen r degerini giriniz: ");
    scanf("%d",&r);
    kom=kombinasyon(n)/(kombinasyon(r)*kombinasyon(n-r));
    printf("kombinasyon sonucu: %.2f",kom);
    return 0;
}