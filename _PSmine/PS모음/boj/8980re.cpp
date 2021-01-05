#include<stdio.h>
#include<stdlib.h>
int compare(const void *a , const void *b) {
	int *ta=(int *)a;
	int *tb=(int *)b;
	if(*(ta+1)<*(tb+1)) {
		return -1;
	} else if(*(ta+1)>*(tb+1)) {
		return 1;
	} else if(*ta>*tb) {
		return -1;
	} else {
		return 1;
	}
}
int main() {
	int n,c,m,box[10000][3]= {0},truck[10000]= {0};
	scanf("%d %d %d",&n,&c,&m);
	for(int i=0; i<m; i++) {
		for(int j=0; j<3; j++) {
			scanf("%d",&box[i][j]);
		}
	}
	qsort(box,m,sizeof(int)*3,compare);

}
