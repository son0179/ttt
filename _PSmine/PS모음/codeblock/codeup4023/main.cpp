#include<stdio.h>
int x[25][25];
int a=1,b=1,c=1,d=1;
void f(int i,int j){
    int tmpi=i,tmpj=j;
    while(x[tmpi+1][tmpj+1]==x[i][j]){
        a++;
        tmpi++;
        tmpj++;
    }
    tmpi=i;
    tmpj=j;
    while(x[tmpi-1][tmpj-1]==x[i][j]){
        a++;
        tmpi--;
        tmpj--;
    }
    tmpi=i;
    tmpj=j;
    while(x[tmpi+1][tmpj]==x[i][j]){
        b++;
        tmpi++;
    }
    tmpi=i;
    tmpj=j;
    while(x[tmpi-1][tmpj]==x[i][j]){
        b++;
        tmpi--;
    }
    tmpi=i;
    tmpj=j;
    while(x[tmpi-1][tmpj+1]==x[i][j]){
        c++;
        tmpi--;
        tmpj++;
    }
    tmpi=i;
    tmpj=j;
    while(x[tmpi+1][tmpj-1]==x[i][j]){
        c++;
        tmpi++;
        tmpj--;
    }
    tmpi=i;
    tmpj=j;
    while(x[tmpi][tmpj+1]==x[i][j]){
        d++;
        tmpj++;
    }
    tmpi=i;
    tmpj=j;
    while(x[tmpi][tmpj-1]==x[i][j]){
        d++;
        tmpj--;
    }
}
int main(){
    int check=0;
    for(int i=1;i<=19;i++){
        for(int j=1;j<=19;j++){
            scanf("%d",&x[i][j]);
        }
    }
    for(int i=1;i<=19;i++){
        for(int j=1;j<=19;j++){
            if(x[i][j]!=0){
                f(i,j);
            }
            if(a==5||b==5||d==5){
                printf("%d\n%d %d",x[i][j],i,j);
                check=1;
                break;
            }
            else if(c==5){
                printf("%d\n%d %d",x[i][j],i+4,j-4);
                check=1;
                break;
            }
            a=1;
            b=1;
            c=1;
            d=1;
        }
        if(a==5||b==5||c==5||d==5){
            break;
        }
    }
    if(check==0){
        printf("0");
    }
}
