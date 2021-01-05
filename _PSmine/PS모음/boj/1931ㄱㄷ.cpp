#include<stdio.h>
int a,b[100000][2]= {0},c[100000]= {0},d[100000]= {0},f;
int tmp[100000][2];
void merge(int s, int mid, int e) {
	int i=s,j=mid+1,t=s;

	while(i<=mid&&j<=e) {
		if(b[i][1]>b[j][1]) {
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
	for(int i=0; i<a; i++) {
		c[i]=b[i][1]-b[i][0];
	}
	divide(0,a-1);
	for(int i=0; i<a; i++) {
		for(int j=b[i][0]; j<b[i][1]; j++) {
			if(d[j]!=0) {
				break;
			} else {
				for(int k=b[i][0]; k<b[i][1]; k++) {
					d[k]=1;
				}
				f++;
				break;
			}
		}
	}
	printf("%d",f);
}

