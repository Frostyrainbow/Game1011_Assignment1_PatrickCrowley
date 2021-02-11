#include "Survey.h"
int main()
{
	int temp;
	std::cout << "Please enter amount of students to create: ";
	cin >> temp;
	Survey StudentSurvey(temp);

	StudentSurvey.DisplaySurvey();
}