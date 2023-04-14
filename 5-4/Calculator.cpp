#include "Calculator.h" //Calculator.h 헤더 파일 포함
#include <iostream>
#include "Adder.h" //Adder 클래스의 헤더 파일 포함
using namespace std;


void Calculator::Run() { //Calculator 클래스의 멤버 함수인 Run 메소드 정의
    cout << "Enter two numbers >>";
    int a, b;
    cin >> a >> b; //정수 두 개 입력
    Adder adder(a, b); //덧셈기(Adder 객체) 생성
    cout << adder.Process(); //덧셈 계산 수행 및 결과 출력
}