#include <iostream>
using namespace std;

//(1)----------------------------------------
//
//int main()
//{
// 
//	double weight;
//
//	cout << "Enter weight (fractional): "; //дробное
//	cin >> weight;
//
//	int tonn = weight;
//	double kg = (weight - tonn) * 1000;
//	int gram = (kg - (int)kg) * 1000 + 1;
//
//	cout << tonn << " tons \n " << (int)kg << " kg \n " << gram << " grams \n " << "\n";
//	
//}
//-------------------------------------------


//(2)----------------------------------------
//int main()
//{
//	long long time;
//
//	cout << "Enter time (sek): ";
//	cin >> time;
//
//	int day = time / 24 / 3600;
//	int hours = time / 3600 - day * 24;
//	int min = time / 60 - hours * 60;
//	int sec = time - min * 60 - hours * 3600;
//
//	cout << day << " days \n " << hours << " hours \n " << min << " minutes \n " << sec << " secundes \n";
//}
//-------------------------------------------


int main()
{
	int hours_start;
	int min_start;
	int sec_start;

	int hours_end;
	int min_end;
	int sec_end;

	cout << "Enter start time (hours, minutes, seconds) \n";

	cout << "Hours: ";
	cin >> hours_start;

	cout << "Minutes: ";
	cin >> min_start;

	cout << "Seconds: ";
	cin >> sec_start;

	cout << "\n Enter end time (hours, minutes, seconds) \n";

	cout << "Hours: ";
	cin >> hours_end;

	cout << "Minutes: ";
	cin >> min_end;

	cout << "Seconds: ";
	cin >> sec_end;

	int hours = hours_end - hours_start;
	int min = min_end - min_start;
	int sec = sec_end - sec_start;

	int time = hours * 3600 + min * 60 + sec;

	int min_cost = 15;
	int sec_cost = 60 / min_cost;

	cout << "Value of talk: " << time / sec_cost << "\n";
}
