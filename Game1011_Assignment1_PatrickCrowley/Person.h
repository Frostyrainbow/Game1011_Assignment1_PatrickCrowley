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
	string getName();
	int getAge();
	//Setters
	void setName(string name);
	void setAge(int age);
	virtual void DisplayInfo() = 0;
	virtual string getStreamingService() = 0;
	virtual string getGamingPlatform() = 0;
	virtual float getHoursSpent() = 0;
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
		setName(a_name);
		setAge(a_age);
		setCollegeName(a_collegeName);
		setProgramName(a_programName);
		setCurrentSemster(a_currentSemester);
	}
	//Destructor
	~Student() = default;
	//Getters
	string getCollegeName() const;
	string getProgramName() const;
	int getCurrentSemster() const;
	//Setters
	void setCollegeName(string name);
	void setProgramName(string name);
	void setCurrentSemster(int semester);
	void setHoursSpent(float hours);
	//Overrides
	void DisplayInfo() override
	{
		cout << "Name: " << getName() << " | Age: " << getAge() << " | College & Program: " << getCollegeName() << " | "
			<< getProgramName();
	}
	string getStreamingService() override 
	{
		return "invalid";
	};
	string getGamingPlatform() override
	{
		return "invalid";
	};
	float getHoursSpent() override
	{
		return m_hoursSpent;
	}
protected:
	string m_collegeName;
	string m_programName;
	int m_currentSemester;
	float m_hoursSpent;
};

//NonGamingStudent class
class NonGamingStudent : public Student
{
public:
	//Constuctor
	NonGamingStudent(string a_name, int a_age, string a_collegeName, string a_programName, int a_currentSemester, string a_streamingService, float a_hoursSpent)
	: Student(a_name, a_age, a_collegeName, a_programName, a_currentSemester)
	{
		setName(a_name);
		setAge(a_age);
		setCollegeName(a_collegeName);
		setProgramName(a_programName);
		setCurrentSemster(a_currentSemester);
		setStreamingService(a_streamingService);
		setHoursSpent(a_hoursSpent);
	}
	//Destructor
	~NonGamingStudent() = default;
	//Getters
	
	//Setters
	void setStreamingService(string name);
	void setHoursSpentStreaming(float hours);
	//Overrides
	void DisplayInfo() override
	{
		cout << "Name: " << getName() << " | Age: " << getAge() << " | College & Program: " << getCollegeName() << " | "
			<< getProgramName() << "\nStreaming Platform: " << getStreamingService() << " | Time spent Streaming: " << getHoursSpent() << " hours\n\n";
	}
	string getStreamingService() override
	{
		return m_streamingService;
	}
private:
	string m_streamingService;
};

//GamingStudent class
class GamingStudent : public Student
{
public:
	//Constuctor
	GamingStudent(string a_name, int a_age, string a_collegeName, string a_programName, int a_currentSemester, string a_gamingPlatform, float a_hoursSpent)
		: Student(a_name, a_age, a_collegeName, a_programName, a_currentSemester)
	{
		setName(a_name);
		setAge(a_age);
		setCollegeName(a_collegeName);
		setProgramName(a_programName);
		setCurrentSemster(a_currentSemester);
		setGamingPlatform(a_gamingPlatform);
		setHoursSpent(a_hoursSpent);
	}
	//Destructor
	~GamingStudent() = default;
	//Getters
	
	//Setters
	void setGamingPlatform(string name);
	void setHoursSpentGaming(float hours);
	//Overrides
	void DisplayInfo() override
	{
		cout << "Name: " << getName() << " | Age: " << getAge() << " | College & Program: " << getCollegeName() << " | "
			<< getProgramName() << "\nGaming Platform: " << getGamingPlatform() << " | Time spent Gaming: " << getHoursSpent() << " hours\n\n";
	}
	string getGamingPlatform() override
	{
		return m_gamingPlatform;
	}

private:
	string m_gamingPlatform;
};