#include "../../std_lib_facilities.h"

struct Date{
	int y, m, d;
	Date(int y, int m, int d);
	void add_day(int n);
};

Date::Date(int yy, int mm, int dd):y{yy}, m{mm}, d{dd}
{
	if(m<1 || 12<m || d<1 || 31<d) error("invalid month or day");
}

void Date::add_day(int n)
{
	d+=n;
	if(d>31)
	{
	 d%=31;
	 m++;
	 }
}


int main()
{
try{
	//Date today(2004,13,-5);
	Date today(1978,6,25);
	cout << "Today: " << today.y << ' ' << today.m << ' ' << today.d << '\n';
	Date tomorrow=today;
	tomorrow.add_day(1);
	cout << "Tomorrow: " << tomorrow.y << ' ' << tomorrow.m << ' ' << tomorrow.d << '\n';
	return 0;
}
catch(exception& e){
	cerr << e.what() << '\n';
	return 1; 
}
catch(...){
	cerr << "unknown error" << '\n';
	return 2;
	}
}