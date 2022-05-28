#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "5명의 이름을 ;으로 구분하여 입력하라 : \n";

	char name[100];

	for (int i = 1; i <= 5; i++)
	{
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;
	}
}