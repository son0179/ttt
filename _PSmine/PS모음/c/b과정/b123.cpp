#include<stdio.h>
int a[12345]={0};
int f(int n,int b,int i){
    if(n>=1){
	    for(int z=b;z>0;z--){
	    	a[i]=z;//Ãâ·Â 
	    	if(z>n-z){
				f(n-z,n-z,i+1);
			}
			else{
				f(n-z,z,i+1);
			}
		}
	}
	else{
		
		for(int h=0;h<i;h++){
			printf("%d ",a[h]);
		}
		printf("\n");
		
	}
}
int main(){
	int n;
	scanf("%d",&n);
	f(n,n-1,0);
}
