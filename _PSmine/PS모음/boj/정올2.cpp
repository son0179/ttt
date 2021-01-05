#include<stdio.h>
int t;
int main(){
	scanf("%d",&t); 
	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int a=0,b=0,c=0,d=0,e=0;
		a=n/60;
		n%=60;
		if(n>35){
			a++;
			n=60-n;
			if(n%10>5){
				c+=n/10;
				n%=10;
				e+=n;
			}
			else{
				c+=n/10+1;
				n%=10;
				n-=10;
				d+=-n;
			}
		}
		else{
			if(n%10>5){
				b+=n/10+1;
				n%=10;
				n-=10;
				e-=n;
			}
			else{
				b+=n/10;
				n%=10;
				
				d+=n;
			}
		}
		printf("%d %d %d %d %d\n",a,b,c,d,e);
	}
}
