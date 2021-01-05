#include<stdio.h>
int main(){
	int n,k,s,x[30001]={0},y[30001]={0},w=0,d=0,i,j;
	scanf("%d %d %d",&n,&k,&s);
	for(int i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++)
			if(x[j]>x[j+1]){
				int tmp=x[j];
				x[j]=x[j+1];
				x[j+1]=tmp;
				tmp=y[j];
				y[j]=y[j+1];
				y[j+1]=tmp;
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
