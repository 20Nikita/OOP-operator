#ifndef _Поезд_H
#define _Поезд_H
#include <iostream>
using namespace std;
class поезд{
private:
	int тип;
	int вагоны;
	double грузоподъёмность;
public:
	int GetТип();
	int GetВагон();
	double GetГрузоподъёмность();
	void SetТип(int НовТип);
	void SetВагон(int НовВагон);
	void SetГрузоподъёмность(double НовГрузопод);
	поезд();
	поезд(int тип, int вагоны, double грузоподъёмность);
	~поезд();
	поезд operator ++();
	поезд operator --();
	bool operator == (const поезд & поезд);
	bool operator > (const поезд& поезд);
	bool operator < (const поезд& поезд);
};
#endif