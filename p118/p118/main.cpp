#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;

	// 생성자
	Rectangle(); // 생성자 1
	Rectangle(int width, int height); // 생성자 2
	Rectangle(int length); // 생성자 3

	bool isSquare();  // 멤버 함수
};

// 생성자 1 : 매개변수가 없는 기본 생성자
/*Rectangle::Rectangle() {
	width = height = 1;
}*/

// 생성자 1을 이렇게 간소화할 수도 있음. 이 경우, 생성자 2가 생성자 1의 타겟 생성자가 됨
Rectangle::Rectangle() : Rectangle(1) {
	
}

// 생성자 2 : 매개변수 2개
/*Rectangle::Rectangle(int w, int h) {
	//this->width = w;
	//this->height = h;
	width = w;
	height = h;
}*/

// 생성자 2를 이렇게 간소화할 수도 있음.
Rectangle::Rectangle(int w, int h) : width(w), height(h) {

}



// 생성자 3 : 매개변수 1개
/*Rectangle::Rectangle(int length) {
	width = height = length;
}*/

// 생성자 3을 이렇게 간소화할 수도 있음. 이 경우, 생성자 2가 생성자 3의 타겟 생성자가 됨
Rectangle::Rectangle(int length) : Rectangle(length, length) {

}

// 멤버 함수
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main()
{
	// 생성자 3개 필요
	Rectangle rect1; // 생성자 1
	Rectangle rect2(3, 5); // 생성자 2
	Rectangle rect3(3); // 생성자 3

	if (rect1.isSquare()) cout << "rect1는 정사각형" << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형" << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형" << endl;

}