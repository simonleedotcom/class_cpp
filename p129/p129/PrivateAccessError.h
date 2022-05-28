#pragma once // visual studio에서 사용하는 예약어로, 중복을 방지하기 위함

// 만약 이미 정의된 것이 아닐 경우 #define(정의)할 것
// ARM 수업 때 stm32에서도 봤던 부분임
#ifndef _PrivateAccessError_H_
#define _PrivateAccessError_H_

class PrivateAccessError {
private: // 자기 클래스 내부에서는 얼마든지 접근 가능. 단, 그 외에는 접근 불가능
	int a;

public: // 접근 지정자가 어떤 것이든 접근 가능

	void setA(int); // a의 값을 설정해 주는 것 -> setter 함수
	int getA(); // 설정된 a의 값을 불러옴 -> getter 함수

	PrivateAccessError(); // 생성자
	int b;
	void f();
	PrivateAccessError(int x);
	void g();
};

#endif
