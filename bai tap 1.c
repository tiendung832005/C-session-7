#include <stdio.h>
int main(){
	int number;
	for (number = 1; number<=100;number++){
		if (number % 3 ==0){
			printf("Cac so nguyen tu 1 den 100 la: FIZZ\n");
		}
		if (number % 5==0){
			printf("Cac so nguyen tu 1 den 100 la: BUZZ\n");
		}
		if (number % 3 ==0 && number % 5==0){
			printf("Cac so nguyen tu 1 den 100 la: FIZZ BUZZ\n");
		}
		
		
		printf("cac so nguyen tu 1 den 100 la: %d\n", number);
	}
}
