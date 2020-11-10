#include "../../std_lib_facilities.h"

struct Date{
	int y;
	int m;
	int d;
};

void init_day(Date& dd, int y, int m, int d)
{
	if(m<1 || m>12) error("invalid month");
	if(d<1 || d>31) error("invalid day");
	dd.y=y;
	dd.m=m;
	dd.d=d;
}
void add_day(Date& dd, int n)
{
	dd.d+=n;

}

int main()
{
	Date today;
	init_day(today,1978,6,25);
	cout << "Today: " << today.y << ' ' << today.m << ' ' << today.d << endl ;
	Date tomorrow=today;
	add_day(tomorrow,1);

	cout << "Tomorrow: " << tomorrow.y << ' ' << tomorrow.m << ' ' << tomorrow.d << endl;
}