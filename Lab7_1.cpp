#include <stdio.h>
#include <math.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);

int main(void) {
    int a, b, c, d, e;
    double r, s, t, u, v;

    functionM(); 
    // [Pass] : เรียกใช้งานได้ปกติ

    a = functionM(); 
    // [Pass with Warning] : ฟังก์ชันคืนค่าเป็น double แต่นำไปเก็บในตัวแปร int (a)

    b = functionN(a, b); 
    // [Pass with Warning] : พารามิเตอร์ตัวที่ 2 ต้องการ double แต่ส่งตัวแปร int (b) เข้าไป

    r = functionO(r, a, s, b); 
    // [Pass] : ชนิดของพารามิเตอร์ตรงตาม Prototype ทุกตัว (double, int, double, int)

    s = functionP(a, b, c, d, e); 
    // [Error] : ส่งอาร์กิวเมนต์ 5 ตัว แต่ Prototype กำหนดให้รับแค่ 4 ตัว

    u = functionM(); 
    // [Pass] : เรียกใช้งานได้ปกติ คืนค่า double เก็บใน double

    c = d + functionN(r, s); 
    // [Pass with Warning] : พารามิเตอร์ตัวแรกต้องการ int แต่ส่งตัวแปร double (r) เข้าไป

    t = s * functionO(r, a, r, a); 
    // [Pass] : ชนิดของพารามิเตอร์ตรงตาม Prototype ทุกตัว

    a = v + functionP(r, s, t, t); 
    // [Pass with Warning] : พารามิเตอร์ต้องการ int แต่ส่ง double ไป และนำผลลัพธ์ไปเก็บในตัวแปร int (a)

    functionP(functionN(a, a), s, t, t+r); 
    // [Pass with Warning] : พารามิเตอร์ตัวที่ 2, 3, 4 ต้องการ int แต่ส่งค่า double (s, t, t+r) เข้าไป

    v = functionP(functionN(a, a), s, t, t+r); 
    // [Pass with Warning] : พารามิเตอร์ตัวที่ 2, 3, 4 ต้องการ int แต่ส่งค่า double เข้าไปเหมือนบรรทัดบน

    return 0;
}
