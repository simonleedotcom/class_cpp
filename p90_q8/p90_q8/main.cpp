#include <iostream>
using namespace std;

int main() {
	char answer[] = "yes";
	char trial[100];
	cout << "종료하고 싶으면 yes를 입력하시오 >> ";
	while (*trial != *answer) {
		cin.getline(trial, 100, '\n');
		if (*trial != *answer) {
			cout << "종료하고 싶으면 yes를 입력하시오 >> ";
		}
		else {
			cout << "종료합니다...";
			break;
		}
	}
}