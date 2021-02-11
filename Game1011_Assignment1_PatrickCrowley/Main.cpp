#include "Survey.h"

using namespace std;
int main()
{
	int temp;
	cout << "Please enter amount of students to create: ";
	cin >> temp;
	Survey StudentSurvey(temp);
	while(temp > 500)
	{
		system("cls");
		cout << "That number is too big!\n\n" << "Please enter amount of students to create: ";
		cin >> temp;
	}

	//StudentSurvey.DisplaySurvey();
	StudentSurvey.Process();
	
}