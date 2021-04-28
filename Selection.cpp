#include<stdio.h>

int main(){
	
	int angka = 10;
	//	kalo angka 0 maka print "nol", kalo angka ganjil print "ganjil"
	// kalo angka genap print "genap"
	if(angka == 0){
		printf("nol");
	} else if (angka%2 == 1){
		printf("ganjil");
	} else {
		printf("genap");
	}
	
//	Switch
	switch(angka){
		case 0:
			printf("nol");
			break;
		case 1:
			printf("satu");
			break;
		case 2:
			printf("dua");
			break;
			
		default :
			printf("selain no satu dua ");
	}
	
	
//	Tenery
	int angkaTen = 3;
//	kondisi ? benar : salah
	printf ("%s", (angkaTen < 2? "lebih kecil dari dua" : angkaTen >2? "lebih besar dari dua": "2"));
	
	return 0;
}
