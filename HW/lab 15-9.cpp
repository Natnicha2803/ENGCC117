/*
    จงเขียนโปรแกรมเพื่อถอดรหัสข้อมูลจากไฟล์ และแปลงเป็นภาษาอังกฤษให้ถูกต้อง โดยโค๊ดที่อ่านได้จากไฟล์คือภาษาอังกฤษที่ถูกเลื่อนไปทางขวา 6 ตัวอักษร (เข้าไปที่เว็บไซท์นี้ https://studio.code.org/s/hoc-encryption/stage/1/puzzle/1 และทำการเลื่อนตัวอักษรไปทางขวา 6 ครั้ง จะได้รหัสลับนี้มา
    ดูวีดีโอประกอบได้ที่ลิงค์นี้ https://www.youtube.com/watch?v=eN4coe9KKzE

    ข้อมูลภายในไฟล์ a15-9.txt :
        C UG ALIIN
    Output:
        Output: I AM GROOT
*/

#include<stdio.h>
#include<stdlib.h>

void readText() ;

int main() {
    readText() ;
    return 0 ;
}//end main

void readText() {
    FILE *fp ;
    fp = fopen("a15-9.txt","r") ;
    if( fp == NULL ) {
        printf( "Can't open file" ) ; exit(0) ;
    }//end if
    
    char str ;
    while ( ( str = fgetc(fp) ) != EOF ) {
        if ( str >= 'A' && str <= 'Z' ) {  //ตรวจว่าอยู่ใน A-Z
            str+= 6 ; //เลื่อนตัวอักษร
            if( str > 'Z' ){ //เกินZ
                str -= 26 ; //ให้ไปA
            }//end if
        }//end if
        
    printf ("%c",str) ;
    
    } // end while
    
    fclose ( fp ) ;
}//end readText()

