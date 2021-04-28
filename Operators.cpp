#include<stdio.h>

int main(){
	
	printf("Ini tambah : %d\n", 2+3);
	printf("Ini kurang : %d\n", 3-2);
	printf("Ini bagi : %d\n", 5/2);
	printf("Ini kali : %d\n", 3*2);
	printf("Ini bagi (desimal) : %f\n", 5.0/2.0);
	printf("Arimetic : (%d+%d)/%d = %d\n", 5, 2, 3, (5+2)/3);
	
	printf("AND : %d\n", 6&5);
	printf("OR : %d\n", 6|5);
	printf("XOR : %d\n", 6^5);
	printf("Shift Right : %d\n", 6>>2);
	printf("SHift LEft : %d\n", 6<<2);
	
	
//		pre-increment
	int angka = 0;cara 
	printf("%d\n", ++angka);
	printf("%d\n", angka);
	
//	post increment	
	int angka = 0;
	printf("%d\n", angka++);
	printf("%d\n", angka);
	
//		pre-decrement
	int angka = 0;
	printf("%d\n", --angka);
	printf("%d\n", angka);
	
//	post decrement	
	int angka = 0;
	printf("%d\n", angka--);
	printf("%d\n", angka);
	
	return0;
}
