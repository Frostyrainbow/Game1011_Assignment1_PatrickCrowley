#include "Survey.h"

int Survey::getSurveyNumb()
{
	return m_surveyNumber;
}


void Survey::setSurveyNumb(int survey)
{
	m_surveyNumber = survey;
}

void Survey::setSurvey(int surveyNumb, int randNumb, string names[], int ages[], string college[], string program[], Student* students[])
{
	setSurveyNumb(surveyNumb);
	students = new Student* [m_surveyNumber];
	for(int i = 0; i < getSurveyNumb(); i++)
	{
		randNumb = rand() % 2 + 1;
		if (randNumb == 1)
		{
			students[i] = new GamingStudent(names[(rand() % 10)], ages[(rand() % 5)], college[(rand() % 5)],
			                                program[(rand() % 3)], (rand() % 4 + 1), static_cast<GamingPlatform>(rand() % 4),
			                                (rand() % 30 + 5));
		}
		if(randNumb==2)
		{
			students[i] = new NonGamingStudent(names[(rand() % 10)], ages[(rand() % 5)], college[(rand() % 5)],
			                                   program[(rand() % 3 + 3)], rand() % 4 + 1, static_cast<StreamingService>(rand() % 5),
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

void Survey::Process()
{
	for (int i = 0; i < getSurveyNumb(); i++)
	{
		if(Students[i] == nullptr)
		{
			continue;
		}
		if(Students[i]->GetStudentType() == NONGAMINGSTUDENT)
		{
			studentNumb[0]++;
			switch(Students[i]->GetStreamingService())
			{
			case NETFLIX:
				favService[0]++;
				break;
			case DISNEY:
				favService[1]++;
				break;
			case YOUTUBE:
				favService[2]++;
				break;
			case TIKTOK:
				favService[3]++;
				break;
			case HULU:
				favService[4]++;
				break;
			}
			
		}
		if (Students[i]->GetStudentType() == GAMINGSTUDENT)
		{
			studentNumb[1]++;
			switch(Students[i]->GetGamingPlatform())
			{
			case XBOX:
				favPlatform[0]++;
				break;
			case PS4:
				favPlatform[1]++;
				break;
			case SWITCH:
				favPlatform[2]++;
				break;
			case PC:
				favPlatform[3]++;
				break;
			}
		}
	}
	
	
}

//TODO: Delete, this was for testing and debugging purposes
/*cout << "Number of Non-gaming students: " << studentNumb[0] << "\n\nNumber of Gaming students: " << studentNumb[1] << endl << endl;
	cout << "Netflix Users: " << favService[0] << " | Disney+ Users: " << favService[1] << " | YouTube Users: " << favService[2] << " | TikTok Users: "
	<< favService[3] << " | Hulu Users: " << favService[4] << endl << endl;
	cout << "Xbox Users: " << favPlatform[0] << " | PS4 Users: " << favPlatform[1] << " | Nintendo Switch Users: " << favPlatform[2] << " | PC Users: "
		<< favPlatform[3] << endl;*/

//string m_streaming[5] = { "Netflix", "Disney+", "YouTube", "TikTok", "Hulu" };
//string m_gaming[4] = { "Xbox One X", "Playstation 4", "Nintendo Switch", "PC" };
//(string a_name, int a_age, string a_collegeName, string a_programName, int a_currentSemester, string a_gamingPlatform, float a_hoursSpent)

