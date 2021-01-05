#include<stdio.h>
int a;
int main() {
	scanf("%d",&a);
	int b[a][2]= {0},f[a]= {0};
	for(int i=0; i<a; i++) {
		scanf("%d%d",&b[i][0],&b[i][1]);
	}
	int tmp;
	for(int i=0; i<a; i++) {
		for(int j=i+1; j<a; j++) {
			if(b[i][0]>b[j][0]) {
				tmp=b[i][0];
				b[i][0]=b[j][0];
				b[j][0]=tmp;
				tmp=b[i][1];
				b[i][1]=b[j][1];
				b[j][1]=tmp;
			}
		}
	}
	for(int i=a-1; i>=0 ; i--) {
		int n1=a;
		for(int j=i+1; j<a; j++) {
			if (b[j][0]>=b[i][1]) {
				n1=j;
				break;
			}
		}
		if(n1==a) {
			f[i]=0;
		} else {
			f[i]=f[n1];
			for(int j=n1+1; j<a; j++) {
				if(f[i]<f[j]) {
					f[i]=f[j];
				}

			}
		}
		f[i]++;
	}
	int maxf=f[0];
	for(int j=1; j<a; j++) {
		if(maxf<f[j]) {
			maxf=f[j];
		}

	}
	printf("%d",maxf);
}

