#include<stdio.h>
int main(){
	int a[10000]={0},ch[10000]={0},i,j,n,x,tmp,aver,nn,ck;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);

	nn=n;
	do{
		ck=0;
		aver=x/nn;
		for(i=1 ; i<=n  ; i++){
			if(aver>a[i]&& ch[i]==0){
				x=x-a[i];
				ch[i]=1;
				nn--;
				ck=1;
			}
		}
	}while(ck!=0);
	printf("%d",x/nn);
}
