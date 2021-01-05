#include<stdio.h>
int main(){
    int n,x[100000];
    int tmp=0,s=0,a=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&x[i]);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        	if(x[j]>=x[i]){
				a+=x[j]-x[i];
			}
			else {
				a+=x[i]-x[j];
			}
        	
		}
    }
    printf("%d",a);
}
