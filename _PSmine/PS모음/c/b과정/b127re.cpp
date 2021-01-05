#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[10]= {0};
int f(int s,int e) {
	int i=s+1,j=e;

	if(s<e) {
		do {
			while(a[i]<=a[s]&&i<=j) {
				i++;
			}
			while(a[j]>=a[s]&&i<=j) {
				j--;
			}
			if(i<j) {
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		} while(i<j);
		int dummy=a[s];
		a[s]=a[j];
		a[j]=dummy;
		f(s,j-1);
		f(j+1,e);
	}
}
int main() {
	srand((unsigned)time(NULL));
	for(int i=0; i<10; i++) {
		a[i]=rand()%100+1;
		printf("%d ",a[i]);
	}
	f(0,9);
	printf("\n");
	for(int goorinae=0; goorinae<10; goorinae++) {
		printf("%d ",a[goorinae]);
	}
}
