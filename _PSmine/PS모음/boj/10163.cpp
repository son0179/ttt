#include<stdio.h>
int main() {
	int n,c=1,cpc=0,cp1,cp2,cp3,cp4,cp[101][101]= {0};
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		scanf("%d%d%d%d",&cp1,&cp2,&cp3,&cp4);
		for(int j=cp2; j<cp2+cp4; j++) {
			for(int k=cp1; k<cp1+cp3; k++) {
				cp[j][k]=c;
			}
		}
		c++;
	}
	c=1;
	while(c<=n) {
		for(int i=0; i<=100; i++) {
			for(int j=0; j<=100; j++) {
				if(cp[i][j]==c) {
					cpc++;
				}
			}
		}
		printf("%d\n",cpc);
		cpc=0;
		c++;
	}
}
