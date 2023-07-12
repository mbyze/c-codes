#include <stdio.h>
int left_rotate(int sayi,int kaydirma_sayisi)
{
	int kaydirma;
	kaydirma=(sayi<<kaydirma_sayisi) | (sayi>>(32-kaydirma_sayisi));
	return kaydirma;
}
int main()
{
	int sayi,kaydirma_sayisi,sonuc;
	printf("tamsayi giriniz:");
	scanf("%d",&sayi);
	printf("kac kez sola kaydiracaksiniz?");
	scanf("%d",&kaydirma_sayisi);
	sonuc=left_rotate(sayi,kaydirma_sayisi);
	printf("%d sayisi %d kez sola kaydirma sonucu %d olarak elde edilir.",sayi,kaydirma_sayisi,sonuc);
	return 0;
}
