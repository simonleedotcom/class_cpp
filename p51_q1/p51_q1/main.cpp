#include <iostream>
#include <string>
using namespace std;

int main()
{
	string songs("abcdefg");
	string elvis("Elvis Presley");
	string singer;

	cout << songs + "부른 가수 : ";
	cout << "(힌트 : 첫 글자는 " << elvis[0] << ")?";

	getline(cin, singer);
	if (singer == elvis)
		cout << "정답\n";
	else
		cout << "오답. " + elvis + "입니다." << endl;
	
	return 0;
}