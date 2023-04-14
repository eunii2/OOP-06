#include <iostream>
using namespace std;

class Rectangle{
public: //public으로 선언된 멤버 변수와 멤버 함수는 외부에서 접근 가능
    int width, height; //정수형 width, height 선언
    Rectangle(); //매개변수 없는 생성자
    Rectangle(int w, int h); //int형 w와 h를 인자로 받는 생성자
    Rectangle(int length); //정사각형의 한 변의 길이를 인자로 받는 생성자
    bool isSquare(); //정사각형인지 판단하는 멤버 함수
};

Rectangle::Rectangle(){ //매개변수 없는 생성자의 정의
    width=height=1; //width, height 길이를 모두 1로 초기화
}
Rectangle::Rectangle(int w, int h){ //w,h 길이를 인자로 받는 생성자의 정의
    width=w, height=h; //인자로 받은 w와 h 길이로 멤버 변수 초기화
}
Rectangle::Rectangle(int length){ //정사각형의 한 변의 길이를 인자로 받는 생성자의 정의
    width=height=length; // 한 변의 길이로 가로, 세로 길이 초기화
}
bool Rectangle::isSquare(){ //정사각형인지 판단하는 멤버 함수의 정의
    if(width==height) //가로와 세로 길이가 같으면
        return true; //true 반환
    else //그렇지 않으면
        return false; //false 반환
}

int main(){
    Rectangle rect1; //매개변수 없는 생성자로 객체 생성
    Rectangle rect2(3, 5); //가로 3, 세로 5를 인자로 받는 생성자로 객체 생성
    Rectangle rect3(3); //한 변의 길이가 3인 정사각형 생성자로 객체 생성

    if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl; //rect1이 정사각형이면 출력
    if(rect2.isSquare()) cout << "rect2는 정사각형이다." << endl; //rect2이 정사각형이면 출력
    if(rect3.isSquare()) cout << "rect3는 정사각형이다." << endl; //rect3이 정사각형이면 출력
}