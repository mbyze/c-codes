#include <stdio.h>
int main()
{
    int i=0;
    char cumle[256];
    printf("cumle giriniz: ");
    gets(cumle);

    while(cumle[i]!='\0')
    {
        if(cumle[i]>=97 && cumle[i]<=122)
        {
            cumle[i]-=32;
            i++;
        }
        if(cumle[i]<=90 && cumle[i]>=65)
        {
            cumle[i]+=32;
            i++;
        }
    }
    printf("%s",cumle);
    return 0;
}