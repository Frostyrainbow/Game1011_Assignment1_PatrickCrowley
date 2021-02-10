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
	virtual ~Person() = default;
	//Getters
	virtual string getName();
	virtual int getAge();
	//Setters
	virtual void setName(string name);
	virtual void setAge(int age);
	virtual void SetPerson(string name, int age) = 0;

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
		SetPerson(a_name, a_age);
		setCollegeName(a_collegeName);
		setProgramName(a_programName);
		setCurrentSemster(a_currentSemester);
	}
	//Destructor
	~Student() override = default;
	//Getters
	string getCollegeName() const;
	string getProgramName() const;
	int getCurrentSemster() const;
	//Setters
	void setCollegeName(string name);
	void setProgramName(string name);
	void setCurrentSemster(int semester);
	void SetPerson(string name, int age) override;

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
		SetPerson(a_name, a_age);
		setCollegeName(a_collegeName);
		setProgramName(a_programName);
		setCurrentSemster(a_currentSemester);
		setStreamingService(a_streamingService);
		setHoursSpentStreaming(a_hoursSpent);
	}
	//Destructor
	~NonGamingStudent() override = default;
	//Getters
	string getStreamingService() const;
	float getHoursSpentStreaming() const;
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
		SetPerson(a_name, a_age);
		setCollegeName(a_collegeName);
		setProgramName(a_programName);
		setCurrentSemster(a_currentSemester);;
		setGamingPlatform(a_gamingPlatform);
		setHoursSpentGaming(a_hoursSpent);
	}
	//Destructor
	~GamingStudent() override = default;
	//Getters
	string getGamingPlatform() const;
	float getHoursSpentGaming() const;
	//Setters
	void setGamingPlatform(string name);
	void setHoursSpentGaming(float hours);

private:
	string m_gamingPlatform;
	float m_hoursSpentGaming;
};