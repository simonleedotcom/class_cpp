#include <iostream>
using namespace std;

int sum(int a, int b);

int main() {
	int n = 0;
	int num1;
	int result;
	
	cout << "�� ���� �Է��Ͻÿ� >> ";
	cin >> num1;
	result = sum(n, num1);
	cout << "1���� " << num1 << "������ ���� " << result << "�Դϴ�.\n";

}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}