#include<stdio.h>
int a[29579]={0};
int f(int n,int max,int index){
	if(n==0){
		for(int d=0;d<index;d++){
			printf("%d ",a[d]);
		}
		printf("\n");
	}
	else{
		
		for(int i=max;i>0;i--){
			a[index]=i;
			if(n-i<i){
				f(n-i,n-i,index+1);
			}
			else{
				f(n-i,i,index+1);
			}
			
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n,n-1,0);
}
