#include<stdio.h>
int main(){
    int a[100][100]={0},n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=1;
        }
    }
    int x=n-1,y=0; //x,y�� ��ǥ
    int i=n*m,s,b=0,l=0; //i�� ä�� �ִ� �� ,s�� k�� �ε���,
    //l�� k�� �� �� ���ϴ���  b��
    int k[4][2]={{-1,0},{0,1},{1,0},{0,-1}}; //k�� ��ǥ�� �����ִ� ��;
    while(i>1){
        while(a[x+k[b%4][0]][y+k[b%4][1]]==1){
            a[x][y]=i;
            i--;
            x=x+k[b%4][0];
            y=y+k[b%4][1];
        }
        b++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
