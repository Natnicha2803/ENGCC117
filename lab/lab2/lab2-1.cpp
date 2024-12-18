#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    int length ;
    //printf("Enter : ");
    fgets( text, sizeof(text), stdin ) ; //รับค่า
    length = strlen( text ) ; //ความยาวข้อความ

    reverse( text, out ) ;
    
    printf( "%s", out ) ;
    return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {
    int length ;
    length = strlen( str1 ) ; //ความยาวข้อความ
    //printf("%d",length);
   for ( int i = 0 ; i < length ; i++ ) { //สลับ
        str2[i] = str1[ length - 1 - i ] ;
    }//end for
    str2[ length ] = '\0' ; //สิ้นสุดตัวอักษร
}//end reverse
