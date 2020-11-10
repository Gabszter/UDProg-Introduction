#include "../../std_lib_facilities.h"

vector<string> month_tbl = {
"January" , "February" , "March" , "April" , "May" , "June" ,
"July" , "August" , "September" , "October" , "November" , "December" };

enum class Month{
	jan,feb,mar,apr,may,jun,jul,aug,sep,oct,now,dec
};

ostream& operator<<(ostream& os, Month m)
{
	return os << month_tbl[int(m)];
}

class Date{
	int y;
	Month m;
	int d;
public:
	Date(int y, Month m, int d);
	void add_day(int n);
	int year() {return y;}
	Month month() {return m;}
	int day() {return d;}
};

Date::Date(int yy, Month mm, int dd):y{yy}, m{mm}, d{dd}
{
	if(d<1 || 31<d) error("invalid day");
}

void Date::add_day(int n)
{
	d+=n;
	if(d>31)
	{
	 error("invalid day");
	}
}

ostream& operator<<(ostream& os, Date& d)
{
	return os << d.year() << ' ' << d.month() << ' ' << d.day() << '\n';
}

int main()
{
	
try{
	//Date today(2004,13,-5);
	Date today(1978,Month::jun,25);
	cout << "Today: " << today << '\n';
	Date tomorrow=today;
	tomorrow.add_day(1);
	cout << "Tomorrow: " << tomorrow << '\n';
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