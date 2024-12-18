#include <stdio.h>
#include <string.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    int length ;
    //printf( "Enter : " ) ;
    fgets( text, sizeof(text), stdin ) ; 
   // scanf( "%s", text ) ;
    length = strlen( text ) ; //ความยาวข้อความ

    out = reverse( text ) ;

    printf( "%s", out ) ;
    return 0 ;
}//end function

char str2[ 50 ] ;
char* reverse( char str1[] ) {
    
    int length ;
    length = strlen( str1 ) ;

    for ( int i = 0 ; i < length ; i++ ) {
        str2[i] = str1[ length - 1 - i ] ;
    }//end for
    str2[ length ] = '\0' ;
    return str2 ;
}//end reverse
