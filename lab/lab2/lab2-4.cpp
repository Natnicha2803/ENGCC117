#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitters[], char str2[][10], int *count);

int main() {
    char out[20][10] ;
    int num ;
    char str[100] ;

   // printf("Enter: ");
    fgets( str, sizeof(str), stdin ) ;  
    str[ strcspn( str, "\n" ) ] = '\0' ; //ลบ/n

    explode( str, "/ ,  :- * !", out, &num ) ;  

    for ( int i = 0 ; i < num ; i++ ) {
        printf( "str[%d] = %s\n", i, out[i] ) ;
    }//end for
    printf( "count = %d\n", num ) ;

    return 0;
}//end main

void explode(char str1[], char splitters[], char str2[][10], int *count) {
    char *token ;
    *count = 0 ;

    token = strtok( str1, splitters ) ;

    while( token != NULL ) {
        strcpy( str2 [ *count ], token ) ;  // เก็บข้อความที่แยกออกมา
        ( *count ) ++ ;
        token = strtok( NULL, splitters ) ;  // ดึงข้อความถัดไป
    }//end while
}//end explode
