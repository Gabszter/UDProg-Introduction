#include "../../std_lib_facilities.h"

class Date {
public:
enum Month {
jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Date(int y, Month m, int d) : y(y), m(m), d(d) {if (d>31 || d<=0) error("invalid day");};
void add_day(int n);
void add_month(int n);
void add_year(int n);

int day() const { return d; }
Month month() const { return m; }
int year() const { return y; }

private:
int y;
Month m;
int d;
};

void Date::add_day(int n) {
d += n;
if(d>31) d%=d;
}

static ostream & operator<< (ostream & os, const Date::Month & m) {
switch (m) {
case Date::jan: os << "January"; break;
case Date::feb: os << "February"; break;
case Date::mar: os << "March"; break;
case Date::apr: os << "April"; break;
case Date::may: os << "May"; break;
case Date::jun: os << "June"; break;
case Date::jul: os << "July"; break;
case Date::aug: os << "August"; break;
case Date::sep: os << "September"; break;
case Date::oct: os << "October"; break;
case Date::nov: os << "November"; break;
case Date::dec: os << "December"; break;
}
return os;
}

ostream & operator<< (ostream & os, const Date & dd) {
os << dd.year() << "  " << dd.month() << "  " << dd.day() << endl;
return os;
}

int main()
try
{
//Date today{1978, Date::jun, 0};
Date today{ 1978, Date::jun, 25 };
Date tomorrow = today;
tomorrow.add_day(1);

cout << today;
cout << tomorrow;

return 0;
}

catch (exception& e) {
cout << e.what() << "\n";
return 1;
}
catch (...) {
cout << "Unkown error" << "\n";
return 2;
}