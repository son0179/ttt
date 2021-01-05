#include<stdio.h>
int main(){
	int n,cnt=0;
	scanf("%d",&n);
	for(int i=n/500;i>=0;i--){
		for(int j=(n-500*i)/100;j>=0;j--){
			for(int k=(n-500*i-100*j)/50;k>=0;k--){
				for(int m=(n-500*i-100*j-50*k)/10;m>=0;m--){
					if(i<6&&j<6&&k<6&&m<6&&i*500+j*100+k*50+m*10==n){
						cnt++;
					}
				}
			}
		}
	}
	printf("%d",cnt);
}
