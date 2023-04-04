#include <stdio.h>

int fibonacci(int x)
{
	if(x<=1)			//if(x == 0) return 0;   
		return x;		// else if(x == 1) return 1;
						//    Ayni anlama gelir.
	else
	
		return fibonacci(x-1) + fibonacci(x-2);	
}

int main()
{
	int sayi;
	
	while(1)
	{
		
	printf("Adim sayisini giriniz : ");
	scanf("%d",&sayi);
	
	printf("%d.Adim sayisinin fibonacci karsiligi: %d\n\n",sayi,fibonacci(sayi));
	
	}
	
	return 0;
}
