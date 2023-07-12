/*0 ile 100 arasında rasgele oluşturduğunuz 100 sayıdan 5. bitleri 0 olan sayıların 4. 
bitini 1 yaparak sayilar0.txt dosyasına 5. bitleri 1 olan sayıların 3. bitini 0 yaparak 
sayilar1.txt dosyasına yazan program kodunu yazınız.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *f0, *f1;
	f0=fopen("sayilar0.txt","w");
	f1=fopen("sayilar1.txt","w");
	int i,sayi;
	for(i=0;i<100;i++)
	{
		sayi=rand()%100;
		if((sayi%16)==0)
		{
			sayi |=8;
			fprintf(f0,"%d\n",sayi);
        }			
        else 
		{
			sayi &= ~4;
			fprintf(f1,"%d\n",sayi);
		}
    }
    fclose(f0);
    fclose(f1);
    return 0;
}
