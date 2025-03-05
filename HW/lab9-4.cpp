/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก
    
    Test case:
        Input N :
            4
        Element[0] :
            3
        Element[1] :
            3
        Element[2] :
            2
        Element[3] :
            5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.


    Test case:
        Input N :
            9
        Element[0] :
            6
        Element[1] :
            6
        Element[2] :
            5
        Element[3] :
            9
        Element[4] :
            1
        Element[5] :
            9
        Element[6] :
            7
        Element[7] :
            6
        Element[8] :
            2
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*/
#include <stdio.h>

int main() {
    int number[100] ;
    int N ; //จำนวนชุดตัวเลข
    int count ;//ค่าซ้ำ
    int n ; //แทนค่า
    int i ; //ชุดตัวเลข

    printf( "Input N :" ) ;
    scanf( "%d", &N ) ;

    for ( i = 0 ; i < N ; i++ ) {
        printf( "Element[%d] :", i ) ;
        scanf( "%d", &number[i] ) ;
    }//end for

    for ( int j = 0 ; j < i - 1 ; j++ ) { //เรียงน้อยไปมาก
        for ( int k = 0 ; k < i - j - 1 ; k++ ) {
            if ( number[k] > number[k + 1] ) { 
                n = number[k] ; //เก็บค่าไว้
                number[k] = number[k + 1] ; //แทนที่แรก
                number[k + 1] = n ; // n แทนที่ 
            }//end if
        }//end for
    }//end for

    for ( int a = 0 ; a < N ; a++ ) {
        count = 1 ;  // ค่าปัจจุบัน

        // ตรวจสอบค่าที่ตำแหน่ง i ว่าถูกนับไปแล้วหรือไม่
        if ( number[a] != -1 ) {
            // นับจำนวนซ้ำ
            for ( int j = a + 1 ; j < N ; j++ ) {
                if ( number[a] == number[j] ) {
                    count++ ;
                    number[j] = -1 ;  // ตั้งค่าให้เป็น -1 เพื่อหลีกเลี่ยงการนับซ้ำ
                }//end if
            }//end for

            printf( "%d -> %d value", number[a], count ) ;
            if ( count > 1 ) {
                printf("s") ;
            }//end if
            printf( ".\n" ) ;
        }//end if
    }//end for
    
    return 0 ;
}//enf main
