#include <iostream>
#include "PrivateAccessError.h"
using namespace std;

// main �Լ� : class �ٱ� �κ�
int main() {
	PrivateAccessError objA(); // ��ü ���� �� public���� �����Ǿ� �־�� ��
	PrivateAccessError objB(100); // 
//	objB.a = 10;
	objB.setA(10);
	cout << "getA : " << objB.getA();
	objB.b = 20;
	objB.f();
	objB.g();
}