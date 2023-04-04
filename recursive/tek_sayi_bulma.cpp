#include <stdio.h>


int tek_sayi(int [],int);

int main()
{
	int i;
	int boyut;
	int dizi[boyut];
	
	printf("dizinin boyutunu giriniz: ");
	scanf("%d",&boyut);
	
	for(i=0;i<boyut;i++)
	{
		printf("%d.eleman: ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("dizinin elemanlari:\n");
	
	for(i=0;i<boyut;i++)
	{
		printf("%d\t",dizi[i]);
	}
	
	printf("tek olanlarinin sayisi: %d",tek_sayi(dizi,boyut));
	return 0;
}

int tek_sayi(int dizi[],int boyut)
{
	if(boyut > 0)
	{
		if(dizi[boyut-1] == 0) // çift mi ? 
			return tek_sayi(dizi,boyut-1);
		else
			return (1 + tek_sayi(dizi,boyut-1));	
	}
	else
		return 0;
}
