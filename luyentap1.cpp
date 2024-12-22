#include<stdio.h>
int main(){
	int so;
	int tong=0,i;
	printf("nhap 5 so nguyen \n");

	for(int i=1;i<5;i++){
		scanf("%d",&so);
	
	if(so%2 !=0){
			tong +=so;
		}
	}
	
	printf("tong cac so le la: %d\n",tong);
	return 0;
}
