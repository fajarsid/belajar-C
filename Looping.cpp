#include<stdio.h>

int main(){
	
//	for
	for(int i = 1; i <=10; i+=2){
		if(i == 5) break;
		printf("%d\n", i);
	}
	
//	while
	int w = 1;
	while(w <=10){
		printf("%d\n", w++);
	}
	
//	do while
	int d = 1;
	do{
		printf("%d\n", d++);
	}while(d <= 10);

//	nested loop
	int size = 10;
	scanf("%d", &size);
	for(int i = 0; i< size; i++){
		for(int j= 0; j< size; j++){
			if(i == 0 || j == 0 || j == size - 1 || i == size-1){
				printf("*");
			} else{
				printf("");
			}
			
		}
		printf("\n");
	}
	
	return 0;
}
