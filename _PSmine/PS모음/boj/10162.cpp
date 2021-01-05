#include<stdio.h>
int main() {
	int t,b[3]= {300,60,10};
	scanf("%d",&t);
	if(t%b[2]!=0) {
		printf("-1");
	} 
	else {
		for(int i=0; i<3; i++) {
			printf("%d ",t/b[i]);
			t=t%b[i];
		}
	}
}
