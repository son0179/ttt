#include<stdio.h>
int main() {
	int a[8][8]= {0},m,k;
	int sum_all=0,max_i=0,max_j=0,index_i,index_j;
	char b[8][8];
	scanf("%d",&m);
	scanf("%d",&k);
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			scanf("%d",&a[i][j]);
			a[i][j]=a[i][j]-m;
			b[i][j]='.';
		}
	}
	int i_s[8]= {0};
	int j_s[8]= {0};
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			i_s[i]=i_s[i]+a[i][j];
			j_s[i]=j_s[i]+a[j][i];
		}
	}
	for(int i=0; i<8; i++) {
		sum_all=sum_all+i_s[i];
	}
	// 제초제, 양분 둘중에 누가더 많은지 
	int number_P=(k+sum_all/15)/2;// 
	int number_N=(k-sum_all/15)/2;

	for(int i1=0; i1<number_P; i1++) {
		int i_s[8]= {0};
		int j_s[8]= {0};
		for(int i=0; i<8; i++) {
			for(int j=0; j<8; j++) {
				i_s[i]=i_s[i]+a[i][j];
				j_s[i]=j_s[i]+a[j][i];
			}
		}
		for(int i=0; i<8; i++) {
			printf("%d ",i_s[i]);
		}
		printf("\n");
		for(int i=0; i<8; i++) {
			printf("%d ",j_s[i]);
		}
		printf("\n");
		max_i=i_s[0];index_i=0;
		max_j=j_s[0];index_j=0;
		for(int i=1; i<8; i++) {
			if(max_i<i_s[i]) {
				max_i=i_s[i];
				index_i=i;
			}
			if(max_j<j_s[i]) {
				max_j=j_s[i];
				index_j=i;
			}
		}
		for(int i=0; i<8; i++) {
			a[index_i][i]--;
			a[i][index_j]--;
		}
		a[index_i][index_j]++;
		b[index_i][index_j]='+';
	}
	for(int i1=0; i1<number_N; i1++) {
		int i_s[8]= {0};
		int j_s[8]= {0};
		for(int i=0; i<8; i++) {
			for(int j=0; j<8; j++) {
				i_s[i]=i_s[i]+a[i][j];
				j_s[i]=j_s[i]+a[j][i];
			}
		}
		max_i=i_s[0];index_i=0;
		max_j=j_s[0];index_j=0;
		for(int i=1; i<8; i++) {
			if(max_i>i_s[i]) {
				max_i=i_s[i];
				index_i=i;
			}
			if(max_j>j_s[i]) {
				max_j=j_s[i];
				index_j=i;
			}
		}
		for(int i=0; i<8; i++) {
			a[index_i][i]=a[index_i][i]+1;
			a[i][index_j]=a[i][index_j]+1;
		}
		a[index_i][index_j]=a[index_i][index_j]-1;
		b[index_i][index_j]='-';
	}

	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			printf("%c ",b[i][j]);
		}
		printf("\n");
	}
}
