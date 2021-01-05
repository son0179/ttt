#include<stdio.h>
int main() {
	int b[8][8]= {0},boo[8][8]= {0},s[8]= {0},b2[8][8]= {0},map[8][8]= {0},g[8]= {0},n,m,sum_all,max=0;
	char c[8][8];
	scanf("%d",&n);
	scanf("%d",&m);
	int v[40][3]= {0};
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			scanf("%d",&b[i][j]);
			b[i][j]=b[i][j]-n;
			s[i]+=b[i][j];
			g[j]+=b[i][j];
		}
	}
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if((s[i]+g[j]-b[i][j])%2!=0) {
				boo[i][j]=1;
			}
		}
	}
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if(boo[i][j]==1) {
				for(int r=0; r<8; r++){
					
					b2[i][r]++;
					b2[r][j]++;
				}
				b2[i][j]--;
			}
		}
	}

	int s1[8]={0},g1[8]={0};
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++){
			s1[i]+=b2[i][j];
			g1[j]+=b2[i][j];
		}
	}
	//가로 세로 합 비교 
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if(boo[i][j]==1) {
				if((s1[i]-s[i]+g1[j]-g[j]-b2[i][j]+b[i][j])%4==0){
					printf("+ ");
				}	
				else{
					printf("- ");
				}
			}
			else{
				printf(". ");
			}
		}
		printf("\n");
	}
	 
}
