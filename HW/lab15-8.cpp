/*
    จงเขียนโปรแกรมอ่านค่าจากข้อมูลในไฟล์ แล้วนำมาแสดงบนหน้าจอ จากนั้นนำมาเรียงลำดับตามตัวอักษรจาก A-Z และเรียงข้อมูลจาก Z-A

    ข้อมูลภายในไฟล์ a15-8.txt :
        Thai
        Bird
        Ant
        Zero
        Wolf
        Cobra
        Orange
        Mango
        Yoyo
    Output:
        Normal (9 Item): Thai, Bird, Ant, Zero, Wolf, Cobra, Orange, Mango, Yoyo .
        Sort (A to Z)  : Ant, Bird, Cobra, Mango, Orange, Thai, Wolf, Yoyo, Zero .
        Sort (Z to A)  : Zero, Yoyo, Wolf, Thai, Orange, Mango, Cobra, Bird, Ant .
*/
#include <stdio.h>
#include <string.h>

#define MAX 100 // จำนวนสูงสุดของคำที่รับได้

// ฟังก์ชันเรียงลำดับจาก A-Z
void sortAZ( char arr[][50], int n ) {
    char temp[50] ;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        for ( int j = i + 1 ; j < n ; j++ ) {
            if ( strcmp(arr[i], arr[j] ) > 0 ) {
                // สลับค่า
                strcpy( temp, arr[i] ) ;
                strcpy( arr[i], arr[j] ) ;
                strcpy( arr[j], temp) ;
            }//end if
        }//end for
    }//end for
}//end sortAZ

// ฟังก์ชันเรียงลำดับจาก Z-A
void sortZA( char arr[][50], int n ) {
    char temp[50] ;
    for ( int i = 0 ; i < n - 1 ; i++ ) {
        for ( int j = i + 1 ; j < n ; j++ ) {
            if ( strcmp(arr[i], arr[j]) < 0 ) {
                // สลับค่า
                strcpy( temp, arr[i] ) ;
                strcpy( arr[i], arr[j] ) ;
                strcpy( arr[j], temp ) ;
            }//end if
        }//end for
    }//end for
}//end sortZA

int main() {
    FILE *file ;
    char words[MAX][50] ;
    int count = 0 ;

    // เปิดไฟล์เพื่ออ่าน
    file = fopen( "a15-8.txt", "r" ) ;

    // อ่านคำจากไฟล์
    while ( fscanf(file, "%s", words[count] ) != EOF ) {
        count++ ;
    }//end while 
    fclose( file ) ;

    // แสดงข้อมูลตามลำดับปกติ
    printf( "Normal (%d Item): ", count ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "%s", words[i] ) ;
        if ( i < count - 1 ) {
            printf( ", " ) ;
        }//end if
    }//end for
    printf( " .\n" ) ;

    // เรียงลำดับจาก A-Z
    sortAZ( words, count ) ;
    printf( "Sort (A to Z)  : " ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "%s", words[i] ) ;
        if ( i < count - 1 ) {
            printf( ", " ) ;
        }//end if
    }//end for
    printf( " .\n" ) ;

    // เรียงลำดับจาก Z-A
    sortZA( words, count ) ;
    printf( "Sort (Z to A)  : " ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "%s", words[i] ) ;
        if ( i < count - 1 ) {
        printf( ", " ) ;
        }//end if
    }//end for
    printf( " .\n" ) ;

    return 0 ;
}//end main
