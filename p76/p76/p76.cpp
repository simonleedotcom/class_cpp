#include <iostream>
#include <string> // string Ŭ������ ����ϱ� ���� ��� ����
using namespace std;

int main()
{
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song << "�� �θ� ����? ";
	getline(cin, singer);
	if (singer == elvis)
		cout << "����";
	else
		cout << "����.  ������ " << elvis << "�Դϴ�.\n";
}