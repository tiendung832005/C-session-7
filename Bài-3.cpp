#include <stdio.h>
#include <stdlib.h>
main(){
	//Khai bao cac bien tien gui, lai suat, thang gui 
	int sent_month;
	float deposits,annual_interest_rate;
	//Nhap cac so lieu can 
	printf("Nhap so tien gui: ");
	scanf("%f",&deposits);
	printf("Lai suat hang nam: ");
	scanf("%f",&annual_interest_rate);
	printf("So thang gui: ");
	scanf("%d",&sent_month);
	//tinh lai va tien nhan duoc
	float profit,money;
	float principal=deposits;
	for(int month = 1; month <= sent_month; month++){
		profit=principal*annual_interest_rate/100/12;
		money=principal+profit;
		principal=money;
		printf("Thang %d\tTien gui:%.2f\tTien lai:%.2f\n",month,principal,annual_interest_rate);
	}
	printf("So tien nhan duoc sau thoi gian gui: %.2f\n",money);
}
