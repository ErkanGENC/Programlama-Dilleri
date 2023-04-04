#include <stdio.h>

int yazdirma(int n)			 // recursive 1'den n'e kadar olanlari yazdir.
{
	if(n == 0)
		return 0;
		
	yazdirma(n-1);
	printf("%d\n",n);	

}


int main()
{
	int n;
	
	while(1)
	{
		printf("kaca kadar sayi yazdirsin ? ");
		scanf("%d",&n);
		yazdirma(n);
		
	}
	
	return 0;
}
