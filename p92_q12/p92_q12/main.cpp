#include <iostream>
using namespace std;

int sum(int a, int b);

int main() {
	int n = 0;
	int num1;
	int result;
	
	cout << "끝 수를 입력하시오 >> ";
	cin >> num1;
	result = sum(n, num1);
	cout << "1에서 " << num1 << "까지의 합은 " << result << "입니다.\n";

}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}