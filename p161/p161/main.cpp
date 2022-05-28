#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
	// 생성자에 매개변수가 하나라도 있을 경우, 

};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

void circle_print(Circle* p);

int main() {
	// 객체 배열 방식 (Circle 타입)
	Circle circleArray[3] = { Circle(10), Circle(20), Circle(30) };
	// 이렇게 배열을 초기화하듯이 생성자를 사용해 원소 객체를 초기화할 수 있음.
	
//	circleArray[0].setRadius(10);
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
	for (int i = 0; i < 3; i++)
	{
		cout << "Circle_array " << i << "의 면적 : " << circleArray[i].getArea() << endl;
	}


//	Circle* p;
	circle_print(circleArray);


	// 소멸자도 포함시켜 볼 것
}

// 객체 포인터 방식 (Circle 타입)
// 함수의 매개변수로 공유할 때 필요
// 단, 함수로 따로 빼서 정의하는 연습이 필요함
void circle_print(Circle *p)
{
	for (int i = 0; i < 3; i++) {
		cout << "Circle_pointer " << i << "의 면적 : " << p->getArea() << endl;
		p++;
	}
}