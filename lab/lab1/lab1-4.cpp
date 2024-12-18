#include <stdio.h>

int GetSet( int data[] ) ;

int main() {
    int *data, num ;

    printf( "\ndata main1 =  %p \n",data) ;//เช็ค

    num = GetSet( data ) ;

    printf( "\ndata main =  %p \n",data) ;//เช็ค

    printf( "Number of elements: %d\n", num ) ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[i] ) ;
    }//end for
    return 0 ;
}//end function

int GetSet( int *data ) {
    int n ;
    printf( "Enter the number of elements:" ) ;
    scanf( "%d", &n ) ;
    printf( "Enter the elements: " ) ;
    for( int i = 0 ; i < n ; i++ ) {
        scanf( "%d", &data[i] ) ;
    }//end for 
    printf( "\ndata Get =  %p \n",data) ;//เช็ค
    return n ;
}//end Getset
