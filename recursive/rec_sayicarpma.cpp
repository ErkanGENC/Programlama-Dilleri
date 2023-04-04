#include <stdio.h>

// verilen 2 sayiyi carpma.			5 * 7 = 7 'yi 5 defa yan yana topla demek. Teori = 7 + (4 * 7)  ---->  2 * 7 = 7 + ((2-1) * 7)

int multiply(int ,int );

int main()
{
	int ilk_Sayi , ikinci_Sayi;
	
	printf("birinici sayiyi girin: ");
	scanf("%d",&ilk_Sayi);
	
	printf("ikinci sayiyi girin: ");
	scanf("%d",&ikinci_Sayi);
	
	printf("iki sayinini carpim sonucu : %d",multiply(ilk_Sayi,ikinci_Sayi));
	
	return 0;
}

int multiply(int x, int y)
{
	if(x == 1)
		return y;
	
	else if(x > 1)
		return 	y + multiply(x-1,y);
		
	return 0;
	
}
