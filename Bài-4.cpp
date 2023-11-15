#include<stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	int choose;
	do{
		printf("INTEGER NUMBER\n");
		printf("1.In ra day so co gia tri nho hon hoac bang n và tinh tong/n");
		printf("2.In ra va dem cac so chia het cho 3 nho hon n\n");
		printf("3.Kiem tra co phai so nguyen to khong\n");
		printf("4.Kiem tra co phai so hoan hao khong\n");
		printf("5.Tinh tong cac uoc cua n\n");
		printf("6.Tinh giai thua n\n");
		printf("7.In ra so dao nguoc cua n\n");
		printf("8.In ra ca so nguyen to tu 1 den n\n");
		printf("9.Thoat\n");
		printf("Moi chon: ");
		scanf("%d",&choose);
		switch(choose){	
			case 1:
				int sum;
				printf("Day so nho hon hoac bang n: ");
				for(int i=1;i<=n;i++){
					printf("%d\t",i);
					sum+=i;
				}
				printf("\n");
				printf("Tong cua day so la:%d\n",sum);
				break;
			case 2:
				int number;
				printf("Day so chia het cho 3 nho hon n la: ");
				for(int i=1;i<=n;i++){
					if(i%3==0){
						printf("\t%d",i);
						number++;
					}
				}
				printf("\n");
				printf("Co %d so chia het cho 3 nho hon hoac bang n\n",number);
				break;
			case 3:
				int quantity;
				for(int i=2;i<=n;i++){
					if(n%i==0){
						quantity++;
					}
				}
				if(quantity==2){
					printf("%d la so nguyen to",n);
				}else{
					printf("%d khong la so nguyen to");
				}
				break;
			case 4:{
				int sum=0;
				for(int i=1;i<n;i++){
					if(n%i==0){
						sum+=i;
					}
				}
				if(sum==n){
					printf("%d la so hoan hao\n",n);
				}else{
					printf("%d khong la so hoan hao\n",n);
				}
				break;
			}
			case 5:{
	            int sum = 0;
	        	printf("Cac uoc so cua %d: ", n);
	                for (int i = 1; i <= n / 2; i++) {
	                    if (n % i == 0) {
	                        printf("%d ", i);
	                        sum += i;
	                    }
	                }
	                printf("%d ", n);
	                sum += n;
	                printf("\nTong cac uoc so: %d\n", sum);
	                break;
	            }
	            case 6: {
	                int factorial = 1;
	                for (int i = 2; i <= n; i++) {
	                    factorial *= i;
	                }
	                printf("Giai thua cua %d: %d\n", n, factorial);
	                break;
	            }
	            case 7: {
	                int reversedNum = 0;
	                int originalNum = n;
	                while (originalNum != 0) {
	                    int remainder = originalNum % 10;
	                    reversedNum = reversedNum * 10 + remainder;
	                    originalNum /= 10;
	                }
	                printf("So dao nguoc cua %d: %d\n", n, reversedNum);
	                break;
	                 }
	            case 8: {
	                printf("Cac so nguyen to tu 1 den %d: ", n);
	                for (int i = 2; i <= n; i++) {
	                    int isPrime = 1;
	                    for (int j = 2; j <= i / 2; j++) {
	                        if (i % j == 0) {
	                            isPrime = 0;
	                            break;
	                        }
	                    }
	                    if (isPrime==1)
	                    printf("%d ", i);
	                }
	                printf("\n");
	                break;
	            }
	            case 9: {
	                printf("Ket thuc chuong trinh.\n");
	                break;
	            }
	            default: {
	                printf("Lua chon khong hop le. Vui long chon lai.\n");
	                break;
	            }
	    }
	}while("Vui long chon tu 1 den 9");
}
