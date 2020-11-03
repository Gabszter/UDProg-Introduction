#include "../../std_lib_facilities.h"

int main()
{
	const double cm_per_inch=2.54;
	const double cm_per_m=100;
	const double ft_per_inc=12;

	int db=0;
	double n;
	double min=numeric_limits<double>::max();
	double max=numeric_limits<double>::lowest();
	double sum;
	string unit=" ";
	vector<double> numbers;

	while(cin >> n >> unit)
	{

		if(unit=="m")
		{
			n=n;
		}
		else if(unit=="cm")
		{
			n=n/cm_per_m;
		}
		else if(unit=="in")
		{
			n=(n*cm_per_inch)/cm_per_m;
		}
		else if(unit=="ft")
		{
			n=(n*ft_per_inc*cm_per_inch)/cm_per_m;
		}
		else
		{
			simple_error("Invalid values!");
		}
		if(n<min) min=n;
		if(n>max) max=n;
		cout << n << " m\n";

		numbers.push_back(n);
		sum+=n;
		db++;
		if(db>=2)
		{
		cout << "The smallest so far: " << min << "!\n";
		cout << "The largest so far: " << max << "!\n";
		}
	}
	cout << "The smallest: " << min << "!\n";
    cout << "The largest: " << max << "!\n";
    cout << "Number of values entered: " << db << "!\n";
    cout << "The sum of values: " << sum << "!\n";
         
     sort(numbers);    
     
     cout << "The entered values in sorted order: ";
     for (auto num : numbers)
     {
          cout << num << " ";
     }

    cout << "\nThe smallest: " << numbers[0] << "!\n";
    cout << "The largest: " << numbers[numbers.size()-1] << "!\n";
	return 0;
}