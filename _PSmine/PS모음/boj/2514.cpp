#include<stdio.h>
int main() {
	int n,k,map[8][8]= {0},n_map[8][8]= {0},ans[8][8]= {0};
	int x[8]= {0},y[8]= {0};
	int ck;
	scanf("%d %d",&n,&k);
	for(int i=0 ; i<8 ; i++) {
		for(int j=0 ; j<8 ; j++) {
			scanf("%d",&map[i][j]);
			map[i][j]=map[i][j]-n;
			x[j]=x[j]+map[i][j];
			y[i]=y[i]+map[i][j];
		}
	}
	for(int i=0 ; i<=7 ; i++) {
		for(int j=0 ; j<=7 ; j++) {
			ck=x[j]+y[i]-map[i][j];
			if(ck%2!=0) {
				ans[i][j]=1;
			}
		}
	}
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if(ans[i][j]==1) {
				for(int g=0; g<8; g++) {
					n_map[i][g]++;
					n_map[g][j]++;

				}
				n_map[i][j]--;
			}

		}
	}
	for(int i=0 ; i<8 ; i++) {
		for(int j=0 ; j<8 ; j++) {		
			x[j]=x[j]-n_map[i][j];//가운데만 처리안된 십자가  
			y[i]=y[i]-n_map[i][j];
		}
	}
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			if(ans[i][j]==0) {
				printf(". ");
			} else {
				ck=x[j]+y[i]-map[i][j]+n_map[i][j];
				if(ck%4!=0){
					printf("- ");
				}
				else{
					printf("+ ");
				}
			}
		}
		printf("\n");
	}
}

//ans인 곳에 4의 배수면 나뒨

