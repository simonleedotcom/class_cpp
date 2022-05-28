#include <iostream>
#include "PrivateAccessError.h"
using namespace std;

// main 함수 : class 바깥 부분
int main() {
	PrivateAccessError objA(); // 객체 선언 시 public으로 지정되어 있어야 함
	PrivateAccessError objB(100); // 
//	objB.a = 10;
	objB.setA(10);
	cout << "getA : " << objB.getA();
	objB.b = 20;
	objB.f();
	objB.g();
}