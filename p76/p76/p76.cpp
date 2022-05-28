#include <iostream>
#include <string> // string 클래스를 사용하기 위한 헤더 파일
using namespace std;

int main()
{
	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song << "을 부른 가수? ";
	getline(cin, singer);
	if (singer == elvis)
		cout << "정답";
	else
		cout << "오답.  정답은 " << elvis << "입니다.\n";
}