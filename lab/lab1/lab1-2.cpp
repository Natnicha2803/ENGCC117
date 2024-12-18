#include <stdio.h>
#include <string.h>

void GetSet( int data[], int *num ) ;

int main() {
    int data[50], num ;
    printf( "Enter number : " ) ;
    scanf( "%d", &num ) ; // ใส่จำนวนของเลขที่จะกรอก
    GetSet( data, &num ) ;
    printf( "%d\n", num ) ;
    printf( "\nnum main =  %d \n",num ) ;//เช็ค
    for( int i = 0 ; i < num ; i++ ) {
    printf( "%d ", data[i] ) ;
    }//end for
    return 0 ;
}//end function

void GetSet( int data[], int *num ) {
    printf( "Number : " ) ;
    for( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &data[i] ) ;
    }//end for
    printf( "num Get =  %d \n",*num ) ;//เช็ค
}//end GetSet
