#include <stdio.h>



int main()
{
	
	char dizi[100];
	int lenght = 0;
	char *ptr;
	
	printf("Bir metin giriniz: ");
	gets(dizi);
	
	ptr = dizi;
	
	while(*ptr != '\0')
	{
		lenght++;
		ptr++;
	}
	
	printf("Girilen metnin uzunlugu: %d",lenght);
	
	return 0;
}
