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
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void readText() ;

int main() {
    readText() ;
    return 0 ;
}//end main

void readText() {
    FILE *fp ;
    fp = fopen("a15-8.txt","r") ;
    if( fp == NULL ) {
        printf( "Can't open file" ) ; exit(0) ;
    }//end if
    
    char name[30][30] ;
    int count = 9 ;
    
    printf("Normal (9 Item): ") ;
        
    for( int i = 0 ; i < count ; i++ ) {
        if ( fscanf( fp, "%s" , name[i] ) == EOF ) 
        break ;
        printf( " %s",name[i] ) ;
        if ( i < count - 1 ) {
            printf( ", " ) ;
        }//end if
    }//end for
    printf("\n") ;
    
    //A-Z
    char temp[50] ;
    for ( int i = 0 ; i < count - 1 ; i++ ) {
        for ( int j = i + 1 ; j < count ; j++ ) {
            if ( strcmp(name[i], name[j] ) > 0 ) {
                // สลับค่า
                strcpy( temp, name[i] ) ;
                strcpy( name[i], name[j] ) ;
                strcpy( name[j], temp) ;
            }//end if
        }//end for
    }//end for
    
    printf( "Sort (A to Z)  : " ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "%s", name[i] ) ;
        if ( i < count - 1 ) {
            printf( ", " ) ;
        }//end if
    }//end for
    printf("\n") ;
    
    //Z-A
    for ( int i = 0 ; i < count - 1 ; i++ ) {
        for ( int j = i + 1 ; j < count ; j++ ) {
            if ( strcmp( name[i], name[j] ) < 0 ) {
                // สลับค่า
                strcpy( temp, name[i] ) ;
                strcpy( name[i], name[j] ) ;
                strcpy( name[j], temp) ;
            }//end if
        }//end for
    }//end for
    
    printf( "Sort (Z to A)  : " ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "%s", name[i] ) ;
        if ( i < count - 1 ) {
            printf( ", " ) ;
        }//end if
    }//end for
  
    fclose ( fp ) ;
}//end readText()
