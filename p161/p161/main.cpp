#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
	// �����ڿ� �Ű������� �ϳ��� ���� ���, 

};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

void circle_print(Circle* p);

int main() {
	// ��ü �迭 ��� (Circle Ÿ��)
	Circle circleArray[3] = { Circle(10), Circle(20), Circle(30) };
	// �̷��� �迭�� �ʱ�ȭ�ϵ��� �����ڸ� ����� ���� ��ü�� �ʱ�ȭ�� �� ����.
	
//	circleArray[0].setRadius(10);
//	circleArray[1].setRadius(20);
//	circleArray[2].setRadius(30);
	for (int i = 0; i < 3; i++)
	{
		cout << "Circle_array " << i << "�� ���� : " << circleArray[i].getArea() << endl;
	}


//	Circle* p;
	circle_print(circleArray);


	// �Ҹ��ڵ� ���Խ��� �� ��
}

// ��ü ������ ��� (Circle Ÿ��)
// �Լ��� �Ű������� ������ �� �ʿ�
// ��, �Լ��� ���� ���� �����ϴ� ������ �ʿ���
void circle_print(Circle *p)
{
	for (int i = 0; i < 3; i++) {
		cout << "Circle_pointer " << i << "�� ���� : " << p->getArea() << endl;
		p++;
	}
}