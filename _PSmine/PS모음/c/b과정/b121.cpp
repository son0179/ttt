
#include<stdio.h>
int a[1000]={0};
int f(int x,int end){
	if(x==0){
		for(int i=end ; i>=1 ; i--){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	else{
		a[x]=0;
		f(x-1,end);//0
		a[x]=1;
		f(x-1,end);//1
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n,n);
}
