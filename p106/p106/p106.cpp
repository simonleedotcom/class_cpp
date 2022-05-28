#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea()
{
	return width * height;
}

int main()
{
	Rectangle rectangle;
	rectangle.width = 3;
	rectangle.height = 5;
	int result = rectangle.getArea();

	cout << "Result : " << result << endl;
}
