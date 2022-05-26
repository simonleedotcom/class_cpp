#include <iostream>

using namespace std; // 다음과 같이 std 이름 공간에 선언된 모든 이름에 std:: 생략
int main(int argc, char* argv[])
{
	int i, j;
	
	for (i = 1; i < 10; i++)
	{
		for (j = 2; j < 10; j++)
		{
			
			cout << j << 'X' << i << '=' << j * i << '\t';

		}
		cout << endl;
	}

	cout << 25 / 30.0 * 100 << '\n';

	return 0;
}