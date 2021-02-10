#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

//Abstract base class
class Person
{
public:
	//Constuctor
	Person(string a_name, int a_age);
	//Destructor
	virtual ~Person();
	//Getters
	virtual string getName();
	virtual int getAge();
	//Setters
	virtual void setName(string name);
	virtual void setAge(int age);

protected:
	string m_name;
	int m_age;
};

//Student class
class Student : public Person
{
public:
	//Constuctor
	Student(string a_name, int a_age, string a_collegeName, string a_programName, int a_currentSemester) : Person(a_name, a_age)
	{
		m_name = a_name;
		m_age = a_age;
		m_collegeName = a_collegeName;
		m_programName = a_programName;
		m_currentSemester = a_currentSemester;
	}
	//Destructor
	~Student();
	//Getters
	string getCollegeName();
	string getProgramName();
	int getCurrentSemster();
	//Setters
	void setCollegeName(string name);
	void setProgramName(string name);
	void setCurrentSemster(int semester);

protected:
	string m_collegeName;
	string m_programName;
	int m_currentSemester;
};

//NonGamingStudent class
class NonGamingStudent : public Student
{
public:
	//Constuctor
	NonGamingStudent(string a_name, int a_age, string a_collegeName, string a_programName, int a_currentSemester, string a_streamingService, float a_hoursSpent) 
	: Student(a_name, a_age, a_collegeName, a_programName, a_currentSemester)
	{
		m_name = a_name;
		m_age = a_age;
		m_collegeName = a_collegeName;
		m_programName = a_programName;
		m_currentSemester = a_currentSemester;
		m_streamingService = a_streamingService;
		m_hoursSpentStreaming = a_hoursSpent;
	}
	//Destructor
	~NonGamingStudent();
	//Getters
	string getStreamingService();
	float getHoursSpentStreaming();
	//Setters
	void setStreamingService(string name);
	void setHoursSpentStreaming(float hours);

private:
	string m_streamingService;
	float m_hoursSpentStreaming;
};

//GamingStudent class
class GamingStudent : public Student
{
public:
	//Constuctor
	GamingStudent(string a_name, int a_age, string a_collegeName, string a_programName, int a_currentSemester, string a_gamingPlatform, float a_hoursSpent)
		: Student(a_name, a_age, a_collegeName, a_programName, a_currentSemester)
	{
		m_name = a_name;
		m_age = a_age;
		m_collegeName = a_collegeName;
		m_programName = a_programName;
		m_currentSemester = a_currentSemester;
		m_gamingPlatform = a_gamingPlatform;
		m_hoursSpentGaming = a_hoursSpent;
	}
	//Destructor
	~GamingStudent();
	//Getters
	string getGamingPlatform();
	float getHoursSpentGaming();
	//Setters
	void setGamingPlatform(string name);
	void setHoursSpentGaming(float hours);

private:
	string m_gamingPlatform;
	float m_hoursSpentGaming;
};