#ifndef _�����_H
#define _�����_H
#include <iostream>
using namespace std;
class �����{
private:
	int ���;
	int ������;
	double ����������������;
public:
	int Get���();
	int Get�����();
	double Get����������������();
	void Set���(int ������);
	void Set�����(int ��������);
	void Set����������������(double �����������);
	�����();
	�����(int ���, int ������, double ����������������);
	~�����();
	����� operator ++();
	����� operator --();
	bool operator == (const ����� & �����);
	bool operator > (const �����& �����);
	bool operator < (const �����& �����);
};
#endif