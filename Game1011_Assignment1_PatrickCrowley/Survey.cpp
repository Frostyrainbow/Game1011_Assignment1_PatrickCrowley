#include "Survey.h"

int Survey::getSurveyNumb()
{
	return m_surveyNumber;
}


void Survey::setSurveyNumb(int survey)
{
	m_surveyNumber = survey;
}

void Survey::setSurvey(int surveyNumb, int randNumb, string names[], int ages[], string streaming[], string gaming[], string college[], string program[], Student* students[])
{
	setSurveyNumb(surveyNumb);
	students = new Student* [m_surveyNumber];
	for(int i = 0; i < getSurveyNumb(); i++)
	{
		randNumb = rand() % 2 + 1;
		if (randNumb == 1)
		{
			students[i] = new GamingStudent(names[(rand() % 10)], ages[(rand() % 5)], college[(rand() % 5)],
			                                program[(rand() % 3)], (rand() % 4 + 1), gaming[(rand() % 4)],
			                                (rand() % 30 + 5));
		}
		if(randNumb==2)
		{
			students[i] = new NonGamingStudent(names[(rand() % 10)], ages[(rand() % 5)], college[(rand() % 5)],
			                                   program[(rand() % 3 + 3)], rand() % 4 + 1, streaming[(rand() % 6)],
			                                   (rand() % 30 + 5));
		}
		Students[i] = students[i];
		
	}
	
}

void Survey::DisplaySurvey()
{
	for(int i = 0; i < m_surveyNumber; i++)
	{
		Student* tempCharacter = Students[i];
		if(tempCharacter == nullptr)
		{
			continue;
		}
		tempCharacter->DisplayInfo();
	}
}




//(string a_name, int a_age, string a_collegeName, string a_programName, int a_currentSemester, string a_gamingPlatform, float a_hoursSpent)

