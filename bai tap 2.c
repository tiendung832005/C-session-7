#include<stdio.h>
int main(){
	int a,b,c,i,sum;
	for (i=100;i<1000;i++){
		c=i%10;
		b=(i/10)%10;
		a=(i/100)%10;
		sum = a*a*a +b*b*b+c*c*c;
		if(sum==i){
			printf("%d\n",i);
		}
		else{
			continue;
		}
	}
}
