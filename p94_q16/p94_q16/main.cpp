#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int counter(char* str, char a);

int main() {
	char buf[10000];
	int cnt_all = 0;
	int cnt_alphabet = 0;

	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
	cin.getline(buf, 10000, ';');
	
	// ���� ������ �� ���ĺ��� ���� ����
	for (int i = 0; i < strlen(buf); i++)
	{
		if (isalpha(buf[i])!= 0)
			cnt_all++;
	}
	cout << "�� ���ĺ� �� " << cnt_all << "\n\n";

	// ���ĺ��� ���� �� ������ ���� �� ���(ASCII �ڵ� Ȱ��)
	for (char i = 'a'; i <= 'z'; i++)
	{
		cout << (char)i << " (" << counter(buf, i) << ")   : ";
		for (int j = 0; j < counter(buf, i); j++)
				cout << '*';
		cout << '\n';
	}

	// ���ĺ��� ���� �� ������ ���� �� ���(ASCII �ڵ� Ȱ��)
	/*for (int i = 97; i <= 122; i++)
	{
		cout << (char)i << " (" << counter(buf, (char)i) << ")   : ";
		for (int j = 0; j < counter(buf, (char)i); j++)
			cout << '*';
		cout << '\n';
	}*/

}

// ���ĺ��� ���� ����
int counter(char* str, char a) {
	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (tolower(str[i]) == a)
			count++;
	}
	return count;
}
