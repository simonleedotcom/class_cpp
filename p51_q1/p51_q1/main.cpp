#include <iostream>
#include <string>
using namespace std;

int main()
{
	string songs("abcdefg");
	string elvis("Elvis Presley");
	string singer;

	cout << songs + "�θ� ���� : ";
	cout << "(��Ʈ : ù ���ڴ� " << elvis[0] << ")?";

	getline(cin, singer);
	if (singer == elvis)
		cout << "����\n";
	else
		cout << "����. " + elvis + "�Դϴ�." << endl;
	
	return 0;
}