// 继承的复习.cpp : 定义控制台应用程序的入口点。
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
	cout << "基类默认构造函数" << feet << "英尺" << inch << "英寸" << endl;
}
Cfeet::~Cfeet()
{
	cout << "基类析构函数" << feet << "英尺" << inch << "英寸" << endl;
}
Cfeet::Cfeet(int i, int j)
{
	feet = i;
	inch = j;
	cout << "基类构造函数" << feet << "英尺" << inch << "英寸" << endl;
}
void Cfeet::dispaly()
{
	cout<<"dispaly"<<feet<< "英尺" << inch << "英寸" << endl;
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
	cout << "派生类默认构造函数" << feet << "英尺" << inch << "英寸" << endl;
}
myCfeet::myCfeet(int ti, int tj)
{
	feet = ti;
	inch = tj;
	cout << "派生类构造函数" << feet << "英尺" << inch << "英寸" << endl;
}
myCfeet::~myCfeet()
{
	cout << "派生类析构函数" << feet << "英尺" << inch << "英寸" << endl;
}
int main()
{
	myCfeet oc1(3, 6);
	oc1.dispaly();
	return 0;
}

