#include<stdio.h>
int main() {
	int a[8][8]= {0},m,k,a_s[8][8]= {0},c[8][8]= {0};
	int max_i=0,max_j=0,index_i=0,index_j=0;
	int sum_all=0;
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

	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			sum_all=sum_all+a[i][j];
		}
	}
	int number_P=(k+sum_all/15)/2;//
	int number_N=(k-sum_all/15)/2;
	int totalN=0;
	int pos_max	;
	int pos[64][3]= {0};
	for(int m=0; m<number_P; m++) {
		int i_s[8]= {0};
		int j_s[8]= {0};
		totalN=0;
		for(int i=0; i<8; i++) {
			for(int j=0; j<8; j++) {
				i_s[i]=i_s[i]+a[i][j];
				j_s[i]=j_s[i]+a[j][i];
			}
		}
		for(int i=0; i<8; i++) {
			for(int j=0; j<8; j++) {
				a_s[i][j]=i_s[i]+j_s[j]-a[i][j];
				if(a_s[i][j]%2==1 || (-1)*a_s[i][j]%2==1) {
					pos[totalN][0]=i;
					pos[totalN][1]=j;
					pos[totalN][2]=a_s[i][j];
					totalN++;
				}
			}
		}
		pos_max=0;
		for(int i=1; i<totalN; i++) {
			if(pos[i][2]>pos[pos_max][2]) {
				pos_max=i;
			}
		}
		for(int i=0; i<8; i++) {
			a[pos[pos_max][0]][i]--;
			a[i][pos[pos_max][1]]--;
		}
		a[pos[pos_max][0]][pos[pos_max][1]]++;
		b[pos[pos_max][0]][pos[pos_max][1]]='+';
	}

	for(int m=0; m<totalN; m++) {
		if(m!=pos_max) {
			b[pos[m][0]][pos[m][1]]='-';
		}

	}
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			printf("%c ",b[i][j]);
		}
		printf("\n");
	}
}
