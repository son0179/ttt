#include<stdio.h>
int n,k,s,x[30001]= {0},y[30001]= {0},w=0,d=0;
int f(int s,int e) {
	int i=s+1,j=e;

	if(s<e) {
		do {
			while(x[i]<=x[s]&&i<=j) {
				i++;
			}
			while(x[j]>=x[s]&&i<=j) {
				j--;
			}
			if(i<j) {
				int tmp=x[i];
				x[i]=x[j];
				x[j]=tmp;
				tmp=y[i];
				y[i]=y[j];
				y[j]=tmp;
			}
		} while(i<j);
		int dummy=x[s];
		x[s]=x[j];
		x[j]=dummy;
		dummy=y[s];
		y[s]=y[j];
		y[j]=dummy;
		f(s,j-1);
		f(j+1,e);
	}
}
int main() {
	scanf("%d %d %d",&n,&k,&s);
	for(int i=0; i<n; i++) {
		scanf("%d %d",&x[i],&y[i]);
	}
	f(0,n-1);
	w=0;
	for(int i=0 ; x[i]<s && i<n ; i++) {
		while(y[i]>0) {
			w++;
			y[i]--;
			if(w>k) {
				w=1;
			}
			if(w==1) {
				d=d+(s-x[i]);
			}
		}
	}

	w=0;
	for(int i=n-1; x[i]>s &&i>0 ; i--) {
		while(y[i]>0) {
			y[i]--;
			w++;
			if(w>k) {
				w=1;
			}
			if(w==1) {
				d=d+x[i]-s;
			}
		}
	}
	printf("%d",2*d);
}
