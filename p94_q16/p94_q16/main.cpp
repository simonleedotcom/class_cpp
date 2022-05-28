#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int counter(char* str, char a);

int main() {
	char buf[10000];
	int cnt_all = 0;
	int cnt_alphabet = 0;

	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
	cin.getline(buf, 10000, ';');
	
	// 공백 제외한 총 알파벳의 개수 세기
	for (int i = 0; i < strlen(buf); i++)
	{
		if (isalpha(buf[i])!= 0)
			cnt_all++;
	}
	cout << "총 알파벳 수 " << cnt_all << "\n\n";

	// 알파벳별 개수 및 개수에 따른 별 찍기(ASCII 코드 활용)
	for (char i = 'a'; i <= 'z'; i++)
	{
		cout << (char)i << " (" << counter(buf, i) << ")   : ";
		for (int j = 0; j < counter(buf, i); j++)
				cout << '*';
		cout << '\n';
	}

	// 알파벳별 개수 및 개수에 따른 별 찍기(ASCII 코드 활용)
	/*for (int i = 97; i <= 122; i++)
	{
		cout << (char)i << " (" << counter(buf, (char)i) << ")   : ";
		for (int j = 0; j < counter(buf, (char)i); j++)
			cout << '*';
		cout << '\n';
	}*/

}

// 알파벳별 개수 세기
int counter(char* str, char a) {
	int count = 0;
	for (int i = 0; i < strlen(str); i++) {
		if (tolower(str[i]) == a)
			count++;
	}
	return count;
}
