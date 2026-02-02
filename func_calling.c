#include<stdio.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
int main(){
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    double r = 0.0, s = 0.0, t = 0.0, u = 0.0, v = 0.0;
    // function calling (a-k)
    printf("%lf\n",functionM());  // ได้ไม่มีปัญหา
    a = functionM(); // ได้ไม่มีปัญหา
    printf("a = functionM() = %d\n", a);

    b = functionN(a, b); // ได้ไม่มีปัญหา แต่  b เป็น int อาจจะทำให้ ทศนิยมถูกตัดทิ้ง
    printf("b = functionN(a, b); = %d\n", b);

    r = functionO(r, a, s, b); // ได้ไม่มีปัญหา
    printf("r = functionO(r, a, s, b); = %lf\n", r);

    //s = functionP(a, b, c, d, e); // ปัญหาคือ arguement เกินที่ parameter กำหนดไว้ใน prototype
    printf("s = functionP(a, b, c, d, e); = %lf\n", s);

    u = functionM(); // ได้ไม่มีปัญหา
    printf("u = functionM(); = %lf\n", u);

    c = d + functionN(r, s); // ได้ไม่มีปัญหา แต่ return เป็น int และรับ arguement ไม่ตรงกับ parameter
    printf("c = d + functionN(r, s); = %d\n", c);

    t = s * functionO(r, a, r, a); // ได้ไม่มีปัญหา
    printf("t = s * functionO(r, a, r, a); = %lf\n", t);

    a = v + functionP(r, s, t, t); // ได้ไม่มีปัญหา แต่parameter เป็น int ทั้งหมด อาจจะทำให้ทศนิยมอาจถูกตัดทิ้ง
    printf("a = v + functionP(r, s, t, t); = %d\n", a);

    printf("functionP(functionN(a, a), s, t, t + r); = %lf\n", functionP(functionN(a, a), s, t, t + r)); // ได้ไม่มีปัญหา แต่ arguement s, t, r เป็น double อาจเปลี่ยนเป็น int

    v = functionP(functionN(a, a), s, t, t + r);
    printf("v = functionP(functionN(a, a), s, t, t + r); = %lf\n", v); // ได้ไม่มีปัญหา แต่ arguement s, t, r เป็น double อาจเปลี่ยนเป็น int
}

double functionM(void){
    double ans = 1+1;
    return ans; 
}

int functionN(int n, double x){
    return n+x;
}
double functionO(double a, int b, double c, int d){
    return a+b+c+d;

}

double functionP(int a, int n, int b, int c){
    return a*n*b*c;
}
