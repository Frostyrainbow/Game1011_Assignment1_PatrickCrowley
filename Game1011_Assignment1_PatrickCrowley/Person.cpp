#include "Person.h"
//setters

//Person
string Person::getName()
{
	return m_name;
}

int Person::getAge()
{
	return m_age;
}

//Student
void Student::setCollegeName(string name)
{
	m_collegeName = name;
}

void Student::setProgramName(string name)
{
	m_programName = name;
}

void Student::setCurrentSemster(int semester)
{
	m_currentSemester = semester;
}

void Student::SetPerson(string name, int age)
{
	m_name = name;
	m_age = age;
}

//Non Gaming Student
void NonGamingStudent::setStreamingService(string name)
{
	m_streamingService = name;
}

void NonGamingStudent::setHoursSpentStreaming(float hours)
{
	m_hoursSpentStreaming = hours;
}

//Gaming Student
void GamingStudent::setGamingPlatform(string name)
{
	m_gamingPlatform = name;
}

void GamingStudent::setHoursSpentGaming(float hours)
{
	m_hoursSpentGaming = hours;
}


//getters

//Person
void Person::setName(string name)
{
	m_name = name;
}

void Person::setAge(int age)
{
	m_age = age;
}

//Student
string Student::getCollegeName() const
{
	return m_collegeName;
}

string Student::getProgramName() const
{
	return m_programName;
}

int Student::getCurrentSemster() const
{
	return m_currentSemester;
}

//Non Gaming Student
string NonGamingStudent::getStreamingService() const
{
	return m_streamingService;
}

float NonGamingStudent::getHoursSpentStreaming() const
{
	return m_hoursSpentStreaming;
}

//Gaming Student
string GamingStudent::getGamingPlatform() const
{
	return m_gamingPlatform;
}

float GamingStudent::getHoursSpentGaming() const
{
	return m_hoursSpentGaming;
}