/*Kendisine parametre olarak gelen metni yine kendisine parametre olarak gelen değer kadar right rotated 
shift yapan fonksiyon kodunu pointer aritmetiği kullanarak gerçekleştiren fonksiyon kodunu yazınız.*/
#include <stdio.h>
#include <string.h>

void sagakaydir(char *metin, int n) 
{
    int len = strlen(metin);
    for (int i = len - 1; i >= 0; i--) 
    {
        metin[i+n] = metin[i];
    }
    for (int i = 0; i < n; i++) 
    {
        metin[i] = ' ';
    }
}

int main() {
    char metin[100];
    int n;
    printf("lutfen bir metin giriniz:\n: ");
    gets(metin);

    printf("yazdiginiz metni kac kez saga kaydiracaksiniz? ");
    scanf("%d", &n);
    
    sagakaydir(metin, n);
    printf("%s", metin);

return 0;
}
