#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;

	// ������
	Rectangle(); // ������ 1
	Rectangle(int width, int height); // ������ 2
	Rectangle(int length); // ������ 3

	bool isSquare();  // ��� �Լ�
};

// ������ 1 : �Ű������� ���� �⺻ ������
/*Rectangle::Rectangle() {
	width = height = 1;
}*/

// ������ 1�� �̷��� ����ȭ�� ���� ����. �� ���, ������ 2�� ������ 1�� Ÿ�� �����ڰ� ��
Rectangle::Rectangle() : Rectangle(1) {
	
}

// ������ 2 : �Ű����� 2��
/*Rectangle::Rectangle(int w, int h) {
	//this->width = w;
	//this->height = h;
	width = w;
	height = h;
}*/

// ������ 2�� �̷��� ����ȭ�� ���� ����.
Rectangle::Rectangle(int w, int h) : width(w), height(h) {

}



// ������ 3 : �Ű����� 1��
/*Rectangle::Rectangle(int length) {
	width = height = length;
}*/

// ������ 3�� �̷��� ����ȭ�� ���� ����. �� ���, ������ 2�� ������ 3�� Ÿ�� �����ڰ� ��
Rectangle::Rectangle(int length) : Rectangle(length, length) {

}

// ��� �Լ�
bool Rectangle::isSquare() {
	if (width == height) return true;
	else return false;
}

int main()
{
	// ������ 3�� �ʿ�
	Rectangle rect1; // ������ 1
	Rectangle rect2(3, 5); // ������ 2
	Rectangle rect3(3); // ������ 3

	if (rect1.isSquare()) cout << "rect1�� ���簢��" << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢��" << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢��" << endl;

}