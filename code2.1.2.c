/*Oluşturduğunuz sayilar.txt dosyasındaki sayıları okuyunuz. Okuduğunuz sayılardan asak sayı olanları sayilar2.txt dosyasına kaydediniz. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int asal_mi(int sayi)
{
    if(sayi<=1)
    {
        return 0;
    }
    int i;
    for (i=2;i<=sqrt(sayi);i++)
    {
        if(sayi%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    FILE *dosya;
    dosya=fopen(sayilar.txt,"w+");
    if(dosya==NULL)
    {
        printf("dosya acma hatasi\n");
        return 1;
    }
    FILE *dosya2;
    dosya2=fopen(sayilar2.txt,"w");
    if(sayilar2.txt==NULL)
    {
        printf("dosya acma hatasi\n");
        return 1;
    }
    int sayi;
    while (fscanf(dosya,"%d",&sayi)!=EOF)
    {
        if(asal_mi(sayi))
        {
            fprintf(sayilar2.txt,"%d\n",sayi);
        }
    }
    fclose(sayilar.txt);
    fclose(sayilar2.txt);
    printf("asal sayilar %s dosyasina kaydedildi.\n"sayilar2.txt);
    return 0;
}