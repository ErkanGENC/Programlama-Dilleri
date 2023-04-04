#include <stdio.h>

int faktoriyel(int x)
{
	if(x == 1)			// direkt if(x < = 1)
		return 1;		// 				return 1;
	else if(x == 0)
		return 1;	
	
	return x * faktoriyel(x-1);

}

int main()
{
	int sayi;
	
	while (1)
	{
		printf("faktoriyeli alinacak sayiyi girin: ");
		scanf("%d",&sayi);
	
		printf("faktoriyeli alinmis sayi: %d\n\n",faktoriyel(sayi));
	}
	
	
	return 0;
}
