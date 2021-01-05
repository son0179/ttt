#include<stdio.h>
int a[10];
int q(int s,int e){
    if(s<e){
        int i=s+1,j=e;
        while(i<=j){
            while(a[s]>a[i]){
                i++;
            }
            while(a[s]<a[j]){
                j--;
            }
            if(i<j){
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
        int tmp=a[s];
        a[s]=a[j];
        a[j]=tmp;
        q(s,j-1);
        q(j+1,s);
    }
}
int main(){
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    q(0,9);
    for(int i=9;i>=0;i++){
        printf("%d ",a[i]);
    }
}
