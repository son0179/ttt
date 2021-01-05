#include <stdio.h>
int NUM[101] ;
int main(){
    int i,N,tmp ;
    int count=0, index= 0 ;
    scanf("%d",&N);
    for(i=0; i<N; i++){
        scanf("%d",&NUM[i]);
    } 
    printf("%d\n", N ) ;
    
    
    i=0;
    //num[0] 
    while(i < N ) {
        while( NUM[index] == 0 ) { 
            index = (index+1)%N;   
        }
        printf("%d ", NUM[index]) ;
        i++ ;
        tmp=NUM[ index ];
        NUM[ index ] = 0 ;
        index = (tmp +index )% N ; 
          
    } 
    return(0);
} 
