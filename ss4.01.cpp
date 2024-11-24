#include<stdio.h>

int main (){
	int number;
	printf("Hay nhap mot so nguyen bat ky: ");
	scanf("%d", &number);
	if(number > 0){
		printf("day la mot so nguyen duong");
	}else{
		printf("day la mot so nguyen am");
	}
	
	return 0;
}
