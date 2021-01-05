#include<stdio.h>
int main(){
	int n,k,s,x[30001]={0},y[30001]={0},w=0,d=0,i,j;
	scanf("%d %d %d",&n,&k,&s);
	for(int i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(x[i]>x[j]){
				int tmp=x[i];
				x[i]=x[j];
				x[j]=tmp;
				tmp=y[i];
				y[i]=y[j];
				y[j]=tmp;
			}
		}
	}
	
	w=0;
	for(i=0 ; x[i]<s && i<n ; i++){
		while(y[i]>0){
			w++;
			y[i]--;
			if(w>k){
				w=1;
			}
			if(w==1){
				d=d+(s-x[i]);
			}
		}	
	}
	
	w=0;
	for(i=n-1; x[i]>s &&i>0 ;i--){
		while(y[i]>0){
			y[i]--;
			w++;
			if(w>k){
				w=1;
			}
			if(w==1){
				d=d+x[i]-s;
			}
		}
	}
	printf("%d",2*d);
}
