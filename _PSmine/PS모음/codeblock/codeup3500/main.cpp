#include<stdio.h>
int a[100][100],d[100][100]={10},u[100][100]={0},v[100][100],r,c;
int dfs(int x,int y){
    d[x][y]=0;
    if(a[x+1][y+1]==1){d[x][y]++;}
    if(a[x-1][y+1]==1){d[x][y]++;}
    if(a[x-1][y-1]==1){d[x][y]++;}
    if(a[x+1][y-1]==1){d[x][y]++;}
    if(a[x-1][y  ]==1){d[x][y]++;}
    if(a[x+1][y  ]==1){d[x][y]++;}
    if(a[x  ][y+1]==1){d[x][y]++;}
    if(a[x  ][y-1]==1){d[x][y]++;}
}
void dfs2(int x,int y){
//    printf("%d %d\n",x,y);
    u[x][y]=1;
    v[x][y]=2;
    if(d[x+1][y+1]==0&&v[x+1][y+1]==1){dfs2(x+1,y+1);}
    if(d[x-1][y+1]==0&&v[x-1][y+1]==1){dfs2(x-1,y+1);}
    if(d[x-1][y-1]==0&&v[x-1][y-1]==1){dfs2(x-1,y-1);}
    if(d[x+1][y-1]==0&&v[x+1][y-1]==1){dfs2(x+1,y-1);}
    if(d[x-1][y  ]==0&&v[x-1][y  ]==1){dfs2(x-1,y);}
    if(d[x+1][y  ]==0&&v[x+1][y  ]==1){dfs2(x+1,y);}
    if(d[x  ][y+1]==0&&v[x  ][y+1]==1){dfs2(x,y+1);}
    if(d[x  ][y-1]==0&&v[x  ][y-1]==1){dfs2(x,y-1);}
    u[x+1][y+1]=1;
    u[x-1][y+1]=1;
    u[x-1][y-1]=1;
    u[x+1][y-1]=1;
    u[x-1][y  ]=1;
    u[x+1][y  ]=1;
    u[x  ][y+1]=1;
    u[x  ][y-1]=1;
}
int main(){
    for(int i=1;i<10;i++){
        for(int j=1;j<10;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&r,&c);
    if(a[r][c]==1){
        for(int i=1;i<10;i++){
            for(int j=1;j<10;j++){
                if(i==r&&j==c){
                    printf("%d ",-1);//���� ���� ��ź �� �� -1 ���
                }
                else{
                    printf("_ ");//�ƴϸ� _ ���
                }
            }
            printf("\n");
        }
    }
    else{
        for(int i=1;i<10;i++){
            for(int j=1;j<10;j++){
                dfs(i,j);
                v[i][j]=1;
            }
        }

        if(d[r][c]!=0){
            for(int i=1;i<10;i++){
                for(int j=1;j<10;j++){
                    if(i==r&&j==c){
                        printf("%d ",d[i][j]);//���� ���� ��ź �� �� -1 ���
                    }
                    else{
                        printf("_ ");//�ƴϸ� �ڱ� ���� ���
                    }
                }
                printf("\n");
            }
        }
        else {
            dfs2(r,c);
            for(int i=1;i<10;i++){
                for(int j=1;j<10;j++){
                    if(u[i][j]==1){
                        printf("%d ",d[i][j]);
                    }
                    else{
                        printf("_ ");
                    }
 //               printf("%d ",v[i][j]);
                }
                printf("\n");
            }
        }
    }
}
