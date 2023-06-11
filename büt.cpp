#include <stdio.h>

struct ogrenci{
	
	char ad[100];
	char soyad[100];
	int numara;
	int vizeNotu;
};

int main()
{
	
	struct ogrenci ogrenciler[20];
	
	int i;
	
	int vizeOrt=0;
	int vizeToplam = 0;
	
	for(i = 0; i < 20; i++){
		
		printf("Ogrenci %d icin bilgileri giriniz\n", i+1);
		printf("Ad: ");
		scanf("%s", &ogrenciler[i].ad);
		printf("\nSoyad: ");
		scanf("%s", &ogrenciler[i].soyad);
		printf("\nNumara: ");
		scanf("%d", &ogrenciler[i].numara);
		printf("\nVize notu: ");
		scanf("%d", &ogrenciler[i].vizeNotu);
		printf("\n");
	}
	
	
	
	for(i = 0; i < 20; i++){
		vizeToplam += ogrenciler[i].vizeNotu;
	}
	
	vizeOrt = vizeToplam/20;
	
	printf("Vize ortalamasi: %d\n", vizeOrt);
	
	for(i = 0; i < 20; i++){
		
		if(ogrenciler[i].vizeNotu < vizeOrt){
			
			printf(ogrenciler[i].ad ,  i+1);
		
			printf(ogrenciler[i].soyad, i+1);
			
		}
		
	}
	
    return 0;
}
