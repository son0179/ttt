#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100],n,m,h;
int main(){
    for(int i=1;i<=50;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    sort(a+1,a+50+1);
    for(int i=50;i>0;i--){
        if(a[i]==n){
            h=50-i+1;
            break;
        }
    }
    if(h<6){
        printf("A+");
    }
    else if(h<16){
        printf("A0");
    }
    else if(h<31){
        printf("B+");
    }
    else if(h<36){
        printf("B0");
    }
    else if(h<46){
        printf("C+");
    }
    else if(h<49){
        printf("C0");
    }
    else {
        printf("F");
    }
}
