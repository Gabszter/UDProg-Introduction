#include "../../std_lib_facilities.h"
int main()
try{
	cout << "Success!\n"; //1.f
	cout << "Success!\n"; //2.f
	cout << "Success" << "!\n"; //3.f
	cout << "Success!" << '\n'; //4.f
	int res=7; vector<int>v(10);v[5]=res; cout << "Success!\n"; //5.f
	vector<int>v1(10);v1[5]=7;if(v1[5]==7) cout << "Success!\n"; //6.f
	bool cond=true; if (cond) cout << "Success!\n"; else cout << "Fail!\n"; //7.f
	bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n"; //8.f
	string s = "ape"; bool c1 = "fool"<s; if (!c1) cout << "Success!\n"; //9.f
	string s1 = "ape"; if (s1!="fool") cout << "Success!\n"; //10.f
	string s2 = "ape"; if (s2!="fool") cout << "Success!\n"; //11.f
	string s3 = "ape"; if (s3!="fool") cout << "Success!\n"; //12.f
	vector<char> v2(5); for (int i=0; i<v2.size(); ++i) ; cout << "Success!\n"; //13.f
	vector<char> v3(5); for (int i=0; i<=v3.size(); ++i) ; cout << "Success!\n"; //14.f
	string s4 = "Success!\n"; for (int i=0; i<10; ++i) cout << s4[i]; //15.f
	if (true) cout << "Success!\n"; else cout << "Fail!\n"; //16.f
	int x = 2000; char c2 = x; if (c2!=2000) cout << "Success!\n"; //17.f
	string s5 = "Success!\n"; for (int i=0; i<10; ++i) cout << s5[i]; //18.f
	vector <int>v4(5); for (int i=0; i<=v4.size(); ++i) ; cout << "Success!\n"; //19.f
	int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n"; //20.f
	double x1 = 2; double d = 5/(x1-2); if (d!=2*x1+0.5) cout << "Success!\n"; //21.f
	string s6 = "Success!\n"; for (int i=0; i<=10; ++i) cout << s6[i]; //22.f
	int i1=10,j1=0; while (i1<10) ++i; if (j1<i1) cout << "Success!\n"; //23.f
	double x2 = 4; double d1 = 5/(x2-2); if (d1=2*x2+0.5) cout << "Success!\n"; //24.f
	cout << "Success!\n"; //25.f
	keep_window_open();
	return 0;
}
catch(exception& e){
	cerr << "error:" << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch(...){
	cerr << "Oops:unkown exception!\n";
	keep_window_open();
	return 2;
}