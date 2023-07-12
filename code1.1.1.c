#include <stdio.h>
#include <conio.h>

int main ()
{
    int vize,final,but;
    printf("vize notunuzu giriniz:");
    scanf("%d",&vize);
    printf("final notunuzu giriniz:");
    scanf("%d",&final);

    if(vize*0.4+final*0.6>=60)
    {
        printf("tebrikler dersten gectiniz!");
    }
    if(vize*0.4+final*0.6<60)
    {
        printf("lutfen butunleme sinavi sonucunuzu giriniz:");
        scanf("%d",&but);
        if(vize*0.4+but*0.6>=60)
        {
            printf("tebrikler bu sefer yirttiniz!");
        }
        else
        {
            printf("maalesef dersten kaldiniz.");
        }
    }
    getch();
    return 0;
}