#include<stdio.h>
int a,b[100000][2]= {0},d[100000]= {0},f[1000000]={0};
int tmp[100000][2];
void merge(int s, int mid, int e) {
	int i=s,j=mid+1,t=s;
	while(i<=mid&&j<=e) {
		if(b[i][0]>b[j][0]) {
			tmp[t][0]=b[j][0];
			tmp[t][1]=b[j][1];
			t++;
			j++;
		} else {
			tmp[t][0]=b[i][0];
			tmp[t][1]=b[i][1];
			t++;
			i++;
		}
	}
	while(i<=mid) {
		tmp[t][0]=b[i][0];
		tmp[t][1]=b[i][1];
		t++;
		i++;
	}
	while(j<=e) {
		tmp[t][0]=b[j][0];
		tmp[t][1]=b[j][1];
		j++;
		t++;
	}
	for(int k=s ; k<=e ; k++) {
		b[k][0]=tmp[k][0];
		b[k][1]=tmp[k][1];
	}
}
void divide(int s, int e) {
	int mid = (s+e)/2;
	if(s<e) {
		divide(s,mid);
		divide(mid+1,e);
		merge(s,mid,e);
	}
}
int main() {
	scanf("%d",&a);
	for(int i=0; i<a; i++) {
		scanf("%d%d",&b[i][0],&b[i][1]);
	}
	divide(0,a-1);
	for(int i=0; i<a; i++) {
		printf("%d %d \n",b[i][0],b[i][1]);
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
		printf("%d \n",f[j]);
		if(maxf<f[j]) {
			maxf=f[j];
		}

	}
	printf("%d",maxf);
}

