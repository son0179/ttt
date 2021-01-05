#include<stdio.h>
int main() {
	int n,c,m,box[10000][3]= {0},truck[10000]= {0},max_box=0,exceed_ch=0,j_ch=0;
	scanf("%d%d%d",&n,&c,&m);
	for(int i=0; i<m; i++) {
		scanf("%d%d%d",&box[i][0],&box[i][1],&box[i][2]);
	}
	for(int i=0; i<m; i++) {
		for(int j=i+1; j<m; j++) {
			if(box[i][1]>box[j][1]) {
				int tmp=box[i][0];
				box[i][0]=box[j][0];
				box[j][0]=tmp;
				tmp=box[i][1];
				box[i][1]=box[j][1];
				box[j][1]=tmp;
				tmp=box[i][2];
				box[i][2]=box[j][2];
				box[j][2]=tmp;
			}
			if(box[i][1]==box[j][1]) {
				if(box[i][1]-box[i][0]>box[j][1]-box[j][0]) {
					int tmp=box[i][0];
					box[i][0]=box[j][0];
					box[j][0]=tmp;
					tmp=box[i][1];
					box[i][1]=box[j][1];
					box[j][1]=tmp;
					tmp=box[i][2];
					box[i][2]=box[j][2];
					box[j][2]=tmp;
				}
			}
		}
	}
	for(int i=0; i<m; i++) {
		for(int village=0; village<n; village++) {
			for(int j=box[i][0]; j<=box[i][1]; j++) {
				if(box[i][2]+truck[j]>c) {
					exceed_ch==1;
					
				}
				j_ch=j;
			}
			if(exceed_ch==1) {
				max_box+=box[i][2]-truck[j_ch];
				for(int j=box[i][0]; j<=box[i][1]; j++) {
					truck[j]+=box[i][2]-truck[j_ch];
				}
				truck[box[i][1]]-=box[i][2]-truck[j_ch];
			} else {
				max_box+=box[i][2];
				for(int j=box[i][0]; j<=box[i][1]; j++) {
					truck[j]+=box[i][2];
				}
				truck[box[i][1]]-=box[i][2];
			}
		}
	}
	printf("%d",max_box);
}
