#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int a[10]= {0};
int q(int s,int e) {
	int i=s+1,j=e;
	if(s<e) {
		do {
			while(a[i]<a[s]) {
				i++;
			}
			while(a[j]>a[s]) {
				j--;
			}
			if(i<j) {
				int dummy=a[i];
				a[i]=a[j];
				a[j]=dummy;
			}
		} while(i<j);
		int tmp=a[s];
		a[s]=a[j];
		a[j]=tmp;
		q(s,j-1);
		q(j+1,e);
	}
}
int main() {
	int i,j;
	int r,max_i=0,dummy;
	srand((unsigned)time(NULL));
	for(i=0 ; i<=9 ; i++) {
		a[i]=rand()%101;
		printf("%4d",a[i]);
	}
	printf("\n");
	q(0,9);
	for(i=0 ; i<=9 ; i++) {
		printf("%4d",a[i]);
	}

}
