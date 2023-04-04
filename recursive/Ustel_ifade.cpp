#include <stdio.h>


int Us(int x,int y) // x üzeri y seklinde olsun.
{
	if(y <= 0)
		return 1;
	
	return (x * Us(x,y-1));
	
}

int main()
{
	int x,y;
	
	while(1)
	{
		printf("taban degerini giriniz: ");
		scanf("%d",&x);
	
		printf("us degerini giriniz: ");
		scanf("%d",&y);
	
		printf("taban degeri %d , us degeri %d olan ustel ifadenin sonucu: %d\n\n",x,y,Us(x,y));
			
	}
		return 0;
}
