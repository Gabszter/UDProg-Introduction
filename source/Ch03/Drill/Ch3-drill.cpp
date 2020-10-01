#include "../../std_lib_facilities.h"

int main()
{

	cout << "Please enter your name!\n";
	string first_name;
	cin >> first_name;
	cout << "Hello " << first_name << "!\n";

	cout << "Enter the name of the person you want to write to!\n";
	cin >> first_name;
	cout << "Dear " << first_name << "!\n";

	cout << "How are you? I am fine. I miss you.\n";

	string friend_name;
	cout << "Please enter your friend name!\n";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";

	char friend_sex=0;
	cout << "Female(f) or male(m)?\n";
	cin >> friend_sex;
	if (friend_sex=='m') cout << "If you see " << friend_name << " please ask him to call me!\n";
	if(friend_sex=='f') cout << "If you see " << friend_name << " please ask her to call me!\n";

	cout << "Enter your age!\n";
	int age;
	cin >> age;
	if(100>age>0) cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age>100 || age<0) simple_error("You-re kiddding");
	
	if(age<12) cout << "Next year you will be " << age+1 << " !\n";
	if(age==17) cout << "Next year you will be able to vote!\n";
	if(age>70) cout << "I hope you are enjoying retirement!,\n";

	cout << "Your sincerely Gábor Cserés!\n";	

	return 0;
}