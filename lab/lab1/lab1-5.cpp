#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    printf( "Enter the number of rows:" ) ;
    scanf( "%d", &m ) ;
    printf( "Enter the number of columns:" ) ;
    scanf( "%d", &n ) ; 
    GetMatrix( data, &m, &n ) ;

    printf( "Matrix (%dx%d):\n", m, n ) ;
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for

    return 0 ;
}//end function

void GetMatrix( int value[], int *row, int *col ) {
    printf( "Enter the matrix elements:" ) ;
    for( int i = 0 ; i < *row ; i++ ) {
        for( int j = 0 ; j < *col ; j++ ) {
            scanf( "%d", &value[ i * *col + j ] ) ; 
        }//end for
    }//end for
}//end GetMatrix
