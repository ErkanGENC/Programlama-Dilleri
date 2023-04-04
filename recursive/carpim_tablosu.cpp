#include <stdio.h>


int tablo(int x) // carpim tablosu
{
	int i;
	
	if(x<=10)
	{
		for(i=1;i<=10;i++)
			printf("%-3d",i*x);
		
		printf("\n");
		return tablo(x+1);
	}
		
}


int main()
{
	
	int sayi;
	printf("kaca kadar carpim olsun ? ");
	scanf("%d",&sayi);
		
	tablo(sayi);
	
}
