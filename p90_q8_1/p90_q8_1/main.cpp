#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "5���� �̸��� ;���� �����Ͽ� �Է��϶� : \n";

	char name[100];

	for (int i = 1; i <= 5; i++)
	{
		cin.getline(name, 100, ';');
		cout << i << " : " << name << endl;
	}
}