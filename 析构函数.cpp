// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class CTestCopy
{
	int x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a, int b);
	CTestCopy(CTestCopy & om);
	CTestCopy::~CTestCopy();
	void disPlay();
};
CTestCopy::~CTestCopy()
{
	cout << "��������  x=" << x << "y=" << y << endl;
}
CTestCopy::CTestCopy()
{

}
CTestCopy::CTestCopy(int a,int b)
{
	x = a;
	y = b;
	cout << "x=" << x << "y=" << y << endl;
}
CTestCopy::CTestCopy(CTestCopy& om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "**************" << endl;
}
void CTestCopy::disPlay()
{
	cout << "x=" << x << "y=" << y << endl;
}
void myTest(CTestCopy od)
{
	od.disPlay();
}
int main()
{
	CTestCopy ot(100, 200);
	myTest(ot);
	return 0;
}

