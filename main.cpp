#include <iostream>

using namespace std;

int main()
{
	int Money = 0; //���� �ʱ�ȭ
	Money = 100;

	cout << Money + 3 << endl; //���ϱ�
	cout << Money - 3 << endl; //����
	cout << Money * 3 << endl; //���ϱ�
	cout << Money / 3 << endl; //������(��)
	cout << Money % 3 << endl; //������(������)
	cout << endl;

	cout << "Hello World" << endl;
	cout << endl;

	float R = 0.1f;
	cout << R + 0.3f << endl;
	cout << R - 0.3f << endl;
	cout << R * 0.3f << endl;
	cout << R / 0.3f << endl;
	//cout << R % 0.3f << endl; //������ �������� �ȴ�
	cout << endl;

	char Ch = 'A';
	cout << Ch + 300 << endl; //�ƽ�Ű�ڵ�� 'A' == 65���� ������ �ν��Ѵ�
	cout << Ch - 300 << endl;
	cout << Ch * 3 << endl;
	cout << Ch / 3 << endl;
	cout << Ch % 3 << endl;
	cout << endl;
	cout << (char)(Ch + 3) << endl; //��ȣ���� ��� ���� �ƽ�Ű�ڵ带 ����Ѵ�
	cout << (char)(Ch - 3) << endl;
	cout << (char)(Ch * 3) << endl;
	cout << (char)(Ch / 3) << endl;
	cout << (char)(Ch % 3) << endl;
	cout << (char)(98) << endl;

	return 0;
}