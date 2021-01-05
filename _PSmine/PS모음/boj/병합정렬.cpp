#include<stdio.h>
int n[10]={4,3,2,1,6,8,43,2,4,5};
int tmp[10];
void merge(int s, int mid, int e){
   int i=s,j=mid+1,t=s;
   
   while(i<=mid&&j<=e){
      if(n[i]>n[j]){
         tmp[t]=n[j];
         t++;
         j++;
      }
      else{
         tmp[t]=n[i];
         t++;
         i++;
      }
   }
   while(i<=mid){
      tmp[t]=n[i];
      t++;
      i++;
   }
   while(j<=e){
      tmp[t]=n[j];
      j++;
      t++;
   }
   for(int k=s ; k<=e ; k++){
      n[k]=tmp[k];
   }
}
void divide(int s, int e){
   int mid = (s+e)/2;
   if(s<e){
      divide(s,mid);
      divide(mid+1,e);
      merge(s,mid,e);
   }
   printf("\n\n%d - %d정렬합니다.\n",s,e);
   for(int i=s ; i<=e ; i++){
      printf("%d ",n[i]);
   }
   
}
int main(){
   printf("정렬전 : ");
   for(int i=0 ; i<=9 ; i++) printf("%d ",n[i]);
   divide(0,9); 
   printf("\n정렬후 : ");
   for(int i=0 ; i<=9 ; i++) printf("%d ",n[i]);
}
