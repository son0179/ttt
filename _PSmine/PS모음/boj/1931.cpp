#include<stdio.h>
int main() {
	int a,b[100000][2]= {0},c[100000]= {0},d=0;
	scanf("%d",&a);
	for(int i=0; i<a; i++) {
		scanf("%d%d",&b[i][0],&b[i][1]);
	}
	for(int i=0; i<a; i++) {
		for(int j=i+1; j<a; j++) {
			if(b[i][1]>b[j][1]) {
				int tmp=b[i][0];
				b[i][0]=b[j][0];
				b[j][0]=tmp;
				tmp=b[i][1];
				b[i][1]=b[j][1];
				b[j][1]=tmp;
			}
		}
	}
	for(int i=0; i<a; i++) {
		for(int j=b[i][0]; j<=b[i][1]; j++) {
			if(c[i]!=0) {
				break;
			} else {
				for(int k=b[i][0]; k<=b[i][1]; k++) {
					c[k]=1;
				}
				d++;
				break;
			}
		}
	}
	printf("%d",d);
}
