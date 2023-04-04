#include <stdio.h>



int obeb(int a ,int b )
{
	int r = a % b  ;
	
	if(r == 0)
		return b;
	else
		return obeb(b,r);
}

int main()
{
	printf("ebob sonucu: %d\n",obeb(12,4));
	
	return 0;
}
