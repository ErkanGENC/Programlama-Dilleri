#include <stdio.h>

int KitleIndex(float weight,float height)
{
	
	float Index = (weight/(height*height));
	
	
	if(0 <= Index &&Index <= 18)
		return 1;
	else if(19 <= Index && Index <= 25)
		return 2;
	else if(26 <= Index && Index <= 30)
		return 3;
	else
		return 4;
					
	
}


int main()
{
	float boy,kilo;
	
	printf("boyunuzu giriniz: ");
	scanf("%f",&boy);
	
	printf("Kilonuzu yaziniz: ");
	scanf("%f",&kilo);
	
	int sonuc = KitleIndex(kilo,boy);
	
	if(sonuc == 1)
		printf("Thin");
	else if(sonuc == 2)
		printf("Normal");
	else if(sonuc == 3)
		printf("Owerweight");
	else 
		printf("Obese");			
	
	
		return 0;
}
