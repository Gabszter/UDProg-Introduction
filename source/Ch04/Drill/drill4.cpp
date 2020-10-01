#include "../../std_lib_facilities.h"

int main()
{
	/*
	double n1;
	double n2;

	while(cin >> n1 >> n2)
	{
		if (n1 == n2)
        {
            cout << "The numbers are equal!\n";
        }
        else if (n1 < n2)
        {
            cout << "The smaller value is: " << n1 << "!\n";
            cout << "The larger value is: " << n2 << "!\n";
        }
        else
        {
            cout << "The smaller value is: " << n2 << "!\n";
            cout << "The larger value is: " << n1 << "!\n";
        }
        if(abs(n2-n1)<0.01) cout << "The numbers are almost equal!\n";
	}
	*/

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
			n=n/100;
		}
		else if(unit=="in")
		{
			n=(n*2.54)/100;
		}
		else if(unit=="ft")
		{
			n=(n*12*2.54)/100;
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

	return 0;
}