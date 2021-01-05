#include<stdio.h>
int a[100][100],n,index;

void f(int Size,int si,int sj){
    if(Size==1){
        printf("%d",a[si][sj]);
        return;
    }
    int tmp=a[si][sj],c=0;
    for(int i=si;i<si+Size;i++){
        for(int j=sj;j<sj+Size;j++){
            if(a[i][j]!=tmp){
                c=1;
            }
        }
    }

    if(c==1){
        printf("(");
        f(Size/2,si,sj);
        f(Size/2,si,sj+Size/2);
        f(Size/2,si+Size/2,sj);
        f(Size/2,si+Size/2,sj+Size/2);
        printf(")");
    }
    else{
        printf("%d",tmp);
        return;
    }

}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1d",&a[i][j]);
        }
    }
    f(n,0,0);
}
