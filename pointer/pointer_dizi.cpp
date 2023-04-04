#include <stdio.h>
	
	
int main()
{
	// dizi-pointer iliskisi...
	
	int dizi[10],i;
	int *p;
	
	for(i=0;i<10;i++)
		dizi[i]=i;
	
	p = dizi;
	
	for(i=0;i<10;i++)
	{
		printf("%d",*(p));
		p++;
	}
	// donguden cikinca p degeri 10 olur.
	
	printf("\n%d \n",*(p-1)); // sonuc olarak 9 cikar.
	
	p = dizi;
	
	for(i=0;i<10;i++)
	{
		printf("%d",*(p+i));
	}
	
	printf("\n %d \n",*p); // 0'ý ekrana basar.
	
	return 0;
}
