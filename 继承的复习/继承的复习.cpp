// �̳еĸ�ϰ.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using  namespace std;

class Cfeet
{
protected:
	int feet;
	int inch;
public:
	Cfeet();
	~Cfeet();
	Cfeet(int i, int j);
	void dispaly();
	void getfeet();
	void inches();
};
Cfeet::Cfeet()
{
	feet = 0;
	inch = 0;
	cout << "����Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
Cfeet::~Cfeet()
{
	cout << "������������" << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
Cfeet::Cfeet(int i, int j)
{
	feet = i;
	inch = j;
	cout << "���๹�캯��" << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
void Cfeet::dispaly()
{
	cout<<"dispaly"<<feet<< "Ӣ��" << inch << "Ӣ��" << endl;
}
class myCfeet :public Cfeet
{
public:
	myCfeet();
	~myCfeet();
	myCfeet(int i, int j);
};
myCfeet::myCfeet()
{
	cout << "������Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
myCfeet::myCfeet(int ti, int tj)
{
	feet = ti;
	inch = tj;
	cout << "�����๹�캯��" << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
myCfeet::~myCfeet()
{
	cout << "��������������" << feet << "Ӣ��" << inch << "Ӣ��" << endl;
}
int main()
{
	myCfeet oc1(3, 6);
	oc1.dispaly();
	return 0;
}

