#include <stdio.h>



int hesapla(int ogr_sayisi,int gecme_notu)
{
	int A[100];
	int i,toplam=0,gecen=0;
	
	for(i=0;i<ogr_sayisi;i++)
	{
		printf("%d.ogrencinin notu: ",i+1);
		scanf("%d",&A[i]);
		
		if(A[i]>gecme_notu)
			gecen ++ ;
		
		toplam += A[i];
	}
	printf("Tum sinifin not ortalamasi: %d\n",(toplam/ogr_sayisi));
		
	int kalan = (ogr_sayisi - gecen) ;
	
		return kalan;
	
}

int main(){
	
	int ogr_sayisi , gecme_notu;
	
	printf("ogrenci sayisini giriniz: ");
	scanf("%d",&ogr_sayisi);
	
	printf("gecme notunu giriniz: ");
	scanf("%d",&gecme_notu);
	
	int kalan = hesapla(ogr_sayisi,gecme_notu);
	
	printf("kalan ogrencilerin sayisi: %d\n ",kalan);
	printf("gecen ogrencilerin sayisi: %d",ogr_sayisi - kalan);
	
	return 0;
}
