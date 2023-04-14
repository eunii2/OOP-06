#include <iostream>
using namespace std;

class Oval { //Oval 클래스 선언
    int width, height; //도형의 너비와 높이
public: //public 생성자 선언
    Oval(); //매개변수가 없는 생성자
    Oval(int w, int h); //매개 변수가 있는 생성자
    ~Oval(); //소멸자
    int getWidth(); //도형의 너비를 반환하는 함수
    int getHeight(); //도형의 높이를 반환하는 함수
    void set(int x, int y); //도형의 너비와 높이를 설정하는 함수
    void show(); //도형의 너비와 높이를 출력하는 함수
};
Oval::Oval() { //매개변수가 없는 생성자의 정의
    width = 1; height = 1; //너비와 높이를 1로 초기화
}
Oval::Oval(int w, int h) { //매개변수 있는 생성자의 정의
    width = w; height = h; //매개변수로 전달받은 값으로 너비와 높이를 초기화
}
Oval::~Oval() { //소멸자 정의
    cout << "Oval 소멸 : width = " << width << ", height = " << height << endl; //소멸될 때 출력될 문자열
}
int Oval::getWidth() { //도형의 너비를 반환하는 함수의 정의
    return width; //너비 반환
}
int Oval::getHeight() { //도형의 높이를 반환하는 함수의 정의
    return height; //높이 반환
}
void Oval::set(int w, int h) { //도형의 너비와 높이를 설정하는 함수의 정의
    width = w; height = h; //매개변수로 전달받은 값으로 너비와 높이를 설정
}
void Oval::show() { //도형의 너비와 높이를 출력하는 함수의 정의
    cout << "width = " << width << ", height = " << height << endl; //너비와 높이 출력
}
int main() {
    Oval a, b(3, 4); //Oval객체 a와 b를 생성
    a.set(10, 20); //객체 a의 너비와 높이를 10과 20으로 설정
    a.show(); //객체 a의 너비와 높이 출력
    cout << b.getWidth() << "," << b.getHeight() << endl; //객체 b의 너비와 높이 출력
}