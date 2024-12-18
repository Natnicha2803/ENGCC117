#include <stdio.h>

void Num(int *n) ;
int main() {
    int n ;//รับมาจากผู้ใช้
    // printf( "Enter number: " ) ;
    // scanf( "%d", &n ) ;
    
    Num (&n) ;
    for( int i = 1 ; i <= n ; i++ ) {
         printf( "[%d] Hello world\n", i ) ;
    }//end for
    printf("\nn main = %p\n",n) ;
    
    return 0 ;
}//end main
void Num(int *n) {
    printf( "Enter number: " ) ;
    scanf( "%d", & *n ) ;
    printf("\nn Num = %p\n",*n) ;
    
}//end Num
