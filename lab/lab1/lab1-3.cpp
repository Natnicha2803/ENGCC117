#include <stdio.h>

int *GetSet( int *n ) ;

int main() {
    int *data, num ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &num ) ;

    data = GetSet (&num ) ;
    printf( "\ndata main =  %p \n",data) ;//เช็ค
    printf( "Number of elements: %d\n", num ) ;
    for( int i = 0 ; i < num ; i++) {
        printf( "%d ", data[i] ) ;
    }//end for
    printf( "\nnum main =  %d \n",num) ;//เช็ค
    return 0 ;
}//end function

int data[50]  ;
int *GetSet( int *n ) {
    printf( "Enter the elements: " ) ;
    for( int i = 0 ; i < *n ; i++ ) {
        scanf( "%d", &data[i]) ;
    }//end for 

    printf( "num Get =  %d \n",*n) ;//เช็ค
    printf( "\ndata Get =  %p \n",data) ;//เช็ค
    
    return data ; //ส่งออกค่า
}//end Getset
