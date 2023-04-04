#include <stdio.h>

 // girilen sayiya kadar toplam bulan fonk.
int func(int m){
	if(m == 0)
		return 0;
	
	// func(m) = func(m-1) + m ;	

	return (m + func(m-1));	
	
}

int main() {
	
	int sayi;
	
	while(1){
		
		printf("\nBir sayi girin: ");
		scanf("%d",&sayi);
		
		printf("\nGirilen %d sayisina kadar olan sayilarin toplami = %d\n",sayi,func(sayi));
	}

	return 0;
}
