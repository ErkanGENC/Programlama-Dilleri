
#include <stdio.h>

int sum(long);


int main()
{
	long number;
	
	printf("basamaklari toplanacak sayiyi giriniz: ");
	scanf("%ld",&number);
	
	int total = sum(number);
	
	printf("girilen sayinin basamak degerleri toplami: %d",total);
		
		return 0;
}


int sum(long num)	// ornegin ; 56789 sayisini (5678 + 9)
{
	if(num != 0)
	{
		return (num % 10 + sum(num/10));
	}
		return 0;
}
