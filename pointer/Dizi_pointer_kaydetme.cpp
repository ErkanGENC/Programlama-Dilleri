#include <stdio.h>


int main()
{
	int dizi[20],i,n;
	int *ptr;
	
	ptr = dizi;
	
	printf("dizinin boyutunu giriniz: ");
	scanf("%d",&n);
	
		// girilen elemanlari diziye kaydedelim.
	for(i=0;i<n;i++)
	{
		printf("eleman - %d: ",i);
		scanf("%d",ptr + i);
		// diziye elemanlari pointer araciligi ile kaydettik.
	}
	
	printf("\n------------------------------------------------------\n");
	
	printf("\ngirilen sayilar: \n");
	
	for(i=0;i<n;i++)
		printf("\nEleman - %d : %d",i,*(ptr+i)); 
		
			return 0;
}
