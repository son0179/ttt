#include<stdio.h>
int main(){
	int n,m=1,a[100000]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n-1;i>-1;i--){
		if(a[n-1]<a[i]){
			m++;
		}
	}
	printf("%d",m);
}
