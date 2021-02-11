#include "Survey.h"

using namespace std;
int main()
{
	int temp;
	cout << "Welcome to College Student Survey Processor!\n\nThe purpose of this application is to process a given amount of students"
		<< "and present to you the their average age,\nhours of consumption of entertainment per week, and their preffered outlets for this entertainment!"
		<< "\nThe survey splits the students into two catagories: Non Gaming Students, and Gaming Students."
		<<"\n\nReady to begin? Please enter how many students you would like to be processed: ";
	cin >> temp;
	
	while(temp > 500)
	{
		system("cls");
		cout << "That number is too big!\n\n" << "Please enter a lower amount of students to create (Max 500!) ";
		cin >> temp;
	}
	system("cls");
	Survey StudentSurvey(temp);
	StudentSurvey.Process();
	
}