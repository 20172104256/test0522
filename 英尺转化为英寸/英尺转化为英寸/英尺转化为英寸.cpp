//Ó¢³ß×ª»¯ÎªÓ¢´ç

#include "stdafx.h"
#include<iostream>
using namespace std;
class Clength
{
private:
	double feet;
	double inch;
public:
	void fun(int meter) {
		int feet = meter*3.2808;
		inch = (meter*3.2808 - feet) * 12;
		cout << "Ó¢³ß=" << feet << "Ó¢´ç=" << inch << endl;
	}
	/*void funny(double feet, double inch) {
		if (inch >= 12)
			feet = feet + (int)(inch / 12);
		inch = inch - (int)(inch / 12) * 12;
		cout << "feet=" << feet << " inch=" << inch << endl;
	}*/
	void add(double feet1, double feet2, double inch1, double inch2) {
		feet = feet1 + feet2;
		inch = inch1 + inch2;
		if (inch >= 12)
			feet = feet + (int)(inch / 12);
		inch = inch - (int)(inch / 12) * 12;
		cout << "Ó¢³ß=" << feet << " Ó¢´ç=" << inch << endl;
	}
	void display() {
		cout << "feet=" << feet << " inch=" << inch << endl;
	}
};
int main()
{
	Clength oc1, oc2;
	//oc1.display();
	//oc1.setvalue(500, 600); 
	//oc1.display();
	//oc2.funny(12, 13);
	oc2.add(12, 15, 13, 13);
	//oc2.display();
	return 0;
}