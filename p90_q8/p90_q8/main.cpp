#include <iostream>
using namespace std;

int main() {
	char answer[] = "yes";
	char trial[100];
	cout << "�����ϰ� ������ yes�� �Է��Ͻÿ� >> ";
	while (*trial != *answer) {
		cin.getline(trial, 100, '\n');
		if (*trial != *answer) {
			cout << "�����ϰ� ������ yes�� �Է��Ͻÿ� >> ";
		}
		else {
			cout << "�����մϴ�...";
			break;
		}
	}
}