/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>

int main() {
    int number ;
    int Prime ;
    int i, j ;
    printf( "Enter number :" ) ;
    scanf( "%d", &number ) ;
    i = number ;
    do {
       Prime = 1 ;
       j = 2 ;
       
       do {
            if ( i % j == 0 ) {
                Prime = 0 ; // ไม่เป็นจำนวนเฉพาะ
            }//end if

            j++ ;
       } while (j * j <= i && Prime);//end do while

        if ( Prime ) {
            printf("%d ", i);
        }//end if

        if (i == 2) {
            printf("%d ", i);
        }//end if
        
        i-- ;
    } while (i >= 2);//end do while
    
    return 0 ;
}//end main
