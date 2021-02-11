#pragma once
#include "Person.h"

class Survey
{
public:
	//Constuctor
	Survey(int surveyNumb)
	{
		setSurvey(surveyNumb, m_randNumb, m_names, m_age, m_streaming, m_gaming, m_college, m_program, Students);
	}
	//Destructor
	~Survey() = default;
	//Getters
	int getSurveyNumb();
	//Setters
	void setSurveyNumb(int survey);
	void setSurvey(int surveyNumb, int randNumb, string names[], int ages[], string streaming[], string gaming[], string college[], string program[], Student* students[]);
	void DisplaySurvey();
	void Process();
private:
	Student* Students[500] = {nullptr};
	int m_surveyNumber;
	int m_randNumb;
	string m_names[10] = {"John Doe", "Bob Ross", "Johnny Silverhand", "Geralt of Rivia", "Valerie Valentine", "Nathan Drake", "Master Chief", "Leon Kennedy", "Ezio Auditore", "Doom Slayer"};
	string m_streaming[5] = { "Netflix", "Disney+", "YouTube", "TikTok", "Hulu" };
	string m_gaming[4] = { "Xbox One X", "Playstation 4", "Nintendo Switch", "PC" };
	string m_college[5] = { "George Brown", "Centennial", "Seneca", "Algonquin", "Fanshawe" };
	string m_program[6] = { "Game Developement", "Game Design", "Game Programming", "Business Financing", "Genetics", "Architecture" };
	int m_age[5] = { 18, 19, 20, 21, 22 };

};

