#include <iostream>

using namespace std; // ������ ���� std �̸� ������ ����� ��� �̸��� std:: ����
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