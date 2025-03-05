/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX

*/
#include <stdio.h>

int main() {
    int num;
    
    // รับค่าตัวเลขจากผู้ใช้
    printf( "Enter number: " ) ;
    scanf( "%d", &num ) ;

    // ค่าตัวเลขโรมันและสัญลักษณ์ที่ตรงกัน
    int values[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 } ;
    char symbols[13][5] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"} ;

    // แสดงผลลัพธ์เริ่มต้น
    printf( "%d = ", num ) ;

    // วนลูปแปลงเป็นเลขโรมัน
    for ( int i = 0 ; i < 13 ; i++ ) {
        for ( ; num >= values[i] ; num -= values[i] ) { // ลดค่าทีละส่วน
            printf( "%s", symbols[i] ) ; // แสดงสัญลักษณ์โรมัน
        }//end for
    }//end for

    printf( "\n" ) ;
    return 0 ;
}//end main
