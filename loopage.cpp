#include <iostream>
int cal_age(int );
using namespace std;

int main()
{
	int num_per;
	cout << "Enter person : ";
	cin >> num_per;
	for (int i = 1; i <= num_per; i++)
	{
		int year;
		cout << "Enter Year " << i << " : ";
		cin >> year;
		int total = cal_age(year);
		cout << "Age " << i << " : " << total << endl; 
	}
	cout << "" << endl;
	cout << "Thank you." << endl;
	return(0);
}

int cal_age(int year)
{
	int total;
	total = 2557 - year;
	return total;
}
