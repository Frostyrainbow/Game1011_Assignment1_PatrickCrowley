#include "Person.h"
//setters

Person::Person(string a_name, int a_age)
{
	m_name = a_name;
	m_age = a_age;
	
}

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

void Student::setHoursSpent(float hours)
{
	m_hoursSpent = hours;
}

void Student::setStudentType(StudentType type)
{
	m_studenttype = type;
}

//Non Gaming Student
void NonGamingStudent::setStreamingService(StreamingService name)
{
	m_stream = name;
}

//Gaming Student
void GamingStudent::setGamingPlatform(GamingPlatform name)
{
	m_gamingplatform = name;
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
