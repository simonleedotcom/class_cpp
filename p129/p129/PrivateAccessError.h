#pragma once // visual studio���� ����ϴ� ������, �ߺ��� �����ϱ� ����

// ���� �̹� ���ǵ� ���� �ƴ� ��� #define(����)�� ��
// ARM ���� �� stm32������ �ô� �κ���
#ifndef _PrivateAccessError_H_
#define _PrivateAccessError_H_

class PrivateAccessError {
private: // �ڱ� Ŭ���� ���ο����� �󸶵��� ���� ����. ��, �� �ܿ��� ���� �Ұ���
	int a;

public: // ���� �����ڰ� � ���̵� ���� ����

	void setA(int); // a�� ���� ������ �ִ� �� -> setter �Լ�
	int getA(); // ������ a�� ���� �ҷ��� -> getter �Լ�

	PrivateAccessError(); // ������
	int b;
	void f();
	PrivateAccessError(int x);
	void g();
};

#endif
