#include <iostream>

using namespace std;

int main()
{
	int Money = 0; //변수 초기화
	Money = 100;

	cout << Money + 3 << endl; //더하기
	cout << Money - 3 << endl; //빼기
	cout << Money * 3 << endl; //곱하기
	cout << Money / 3 << endl; //나누기(몫)
	cout << Money % 3 << endl; //나누기(나머지)
	cout << endl;

	cout << "Hello World" << endl;
	cout << endl;

	float R = 0.1f;
	cout << R + 0.3f << endl;
	cout << R - 0.3f << endl;
	cout << R * 0.3f << endl;
	cout << R / 0.3f << endl;
	//cout << R % 0.3f << endl; //정수만 나머지가 된다
	cout << endl;

	char Ch = 'A';
	cout << Ch + 300 << endl; //아스키코드로 'A' == 65여서 정수로 인식한다
	cout << Ch - 300 << endl;
	cout << Ch * 3 << endl;
	cout << Ch / 3 << endl;
	cout << Ch % 3 << endl;
	cout << endl;
	cout << (char)(Ch + 3) << endl; //괄호안의 계산 값의 아스키코드를 출력한다
	cout << (char)(Ch - 3) << endl;
	cout << (char)(Ch * 3) << endl;
	cout << (char)(Ch / 3) << endl;
	cout << (char)(Ch % 3) << endl;
	cout << (char)(98) << endl;

	return 0;
}