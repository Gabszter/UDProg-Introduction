#include "../../std_lib_facilities.h"
	

int main()
{
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
}