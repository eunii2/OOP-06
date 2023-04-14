#ifndef ADDER_H
#define ADDER_H
class Adder //클래스 Adder 정의
{
    int op1, op2; //더할 두 수를 나타내는 멤버 변수 선언
public:
    Adder(int a, int b); // 두 개의 정수를 입력 받아 초기화하는 생성자 선언
    int Process(); //op1과 op2를 더한 값을 반환하는 Process 메소드 반환
};
#endif