/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก
    
    Test case:
        Input N :
            5
        Input :
            1
        Input :
            1
        Input :
            2
        Input :
            3
        Input :
            3
    Output:
        Unique value : 2

    
    Test case:
        Input N :
            6
        Input :
            9
        Input :
            9
        Input :
            5
        Input :
            6
        Input :
            2
        Input :
            1
    Output:
        Unique value : 1 2 5 6

*/
#include <stdio.h>

int main() {
    int number[100] ;
    int N ; // จำนวนชุดตัวเลข
    int count ; // ใช้เเทนค่าเพื่อสลับ
    int no ; //ตัวเลขไม่ซ้ำ

    printf( "Input N: " ) ;
    scanf( "%d",  &N ) ;

    for ( int i = 0 ; i < N ; i++ ) {
        printf( "Input: " ) ;
        scanf( "%d", &number[i] ) ;
    }//end for

    for ( int i = 0 ; i < N - 1 ; i++ ) {//เรียงน้อยไปมาก
        for ( int j = 0 ; j < N - i - 1 ; j++) {
            if ( number[j] > number[j + 1] ) {
                count = number[j] ;
                number[j] = number[j + 1] ;
                number[j + 1] = count ;
            }//end if
        }//end for
    }//end for

    // แสดงค่าที่ไม่มีการซ้ำกัน
    printf( "Unique value: " ) ;
     
    for ( int i = 0 ; i < N ; i++ ) {
        no = 1 ;  // กำหนดให้ค่าเริ่มต้นเป็นไม่ซ้ำ
        if ( i > 0 && number[i] == number[i - 1] ) {
            no = 0 ;  // ถ้าซ้ำกับค่าก่อนหน้า ให้เปลี่ยนเป็น 0
        }//end if
        if ( i < N - 1 && number[i] == number[i + 1] ) {
            no = 0 ;  // ถ้าซ้ำกับค่าถัดไป ให้เปลี่ยนเป็น 0
        }//end if
        if ( no ) {
            printf( "%d ", number[i] ) ;
        }//end if
    }//end for

    printf( "\n" ) ;

    return 0;
}//end main
