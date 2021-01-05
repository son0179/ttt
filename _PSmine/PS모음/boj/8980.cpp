#include<stdio.h>
int main() {
	int n,c,m,box[10000][3]= {0},truck[2000]= {0},s=0;
	int max;
	scanf("%d %d %d",&n,&c,&m);
	for(int i=0; i<m; i++) {
		for(int j=0; j<3; j++) {
			scanf("%d",&box[i][j]);
		}
	}
	for(int i=0; i<m; i++) {
		for(int j=i+1; j<m; j++) {
			if(box[i][1]-box[i][0]>box[j][1]-box[j][0]) {
				int tmp0=box[i][0],tmp1=box[i][1],tmp2=box[i][2];
				box[i][0]=box[j][0];
				box[i][1]=box[j][1];
				box[i][2]=box[j][2];
				box[j][0]=tmp0;
				box[j][1]=tmp1;
				box[j][2]=tmp2;
			}
		}
	}
	for(int i=0; i<m; i++) {
		for(int j=i+1; j<m; j++) {
			if(box[i][1]-box[i][0]==box[j][1]-box[j][0]&&box[i][2]<box[j][2]) {
				int tmp0=box[i][0],tmp1=box[i][1],tmp2=box[i][2];
				box[i][0]=box[j][0];
				box[i][1]=box[j][1];
				box[i][2]=box[j][2];
				box[j][0]=tmp0;
				box[j][1]=tmp1;
				box[j][2]=tmp2;
			}
		}
	}
	for(int i=0 ; i<m ; i++) {
		printf("\n%d %d %d",box[i][0],box[i][1],box[i][2]);
	}

	for(int i= 0 ; i<m ; i++) {
		max=0;
		for(int j=box[i][0]; j<box[i][1]; j++) {
			if(max<truck[j]) {
				max=truck[j];
			}
		}
		if(box[i][2]+max>c) {
			for(int j=box[i][0]; j<box[i][1]; j++) {
				truck[j]=c;
			}
			s+=c-max;
		} else {
			for(int j=box[i][0]; j<box[i][1]; j++) {
				truck[j]+=box[i][2];
			}
			s+=box[i][2];
		}
	}
	printf("%d",s);
}
