#include <stdio.h>

int *GetMatrix( int *row, int *col ) ;

int main() {
    int *data, m, n ;
    printf( "Enter number of rows and columns: " ) ;
    scanf( "%d %d", &m, &n ) ;
    data = GetMatrix( &m, &n ) ;
    printf( "Enter number of rows and columns : %d %d\n", m, n ) ;
    printf( "Enter matrix elements:\n" ) ;
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for
    return 0 ;
}//end function

int data[50] ;
int *GetMatrix( int *row, int *col ) {
    printf( "Enter the matrix elements:" ) ;
    for( int i = 0 ; i < *row ; i++ ) {
        for( int j = 0 ; j < *col ; j++ ) {
            scanf( "%d", &data[ i * *col + j ] ) ; 
        }//end for
    }//end for
    return data ;
}//end GetMatrix
