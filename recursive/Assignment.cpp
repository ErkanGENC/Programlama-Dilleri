#include <stdio.h>
	// Write and test a recursive function that return the value
	// of the following recursive definition.
	
	// f(x) = 0     if(x <= 0)
	// f(x-1) + 2   otherwise
	
int recursive(int x)
{
	if(x <= 0)
		return 0;	
	
	return recursive(x-1) + 2; // otherwise
}
	

int main()
{
	int sayi;
	while(1)
	{
		scanf("%d",&sayi);
	
		printf("girdiginiz sayinin karsiligi: %d\n",recursive(sayi));
	}

	return 0;
}
