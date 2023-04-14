#include "Adder.h" //Adder.h 헤더 파일 포함

Adder::Adder(int a, int b) { //Adder 클래스 생성자 정의
    op1 = a; op2 = b; //op1, op2 초기화
}
int Adder::Process() { //op1과 op2를 더한 값을 반환하는 Process 메소드 정의
    return op1 + op2;
}