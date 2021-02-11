#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;
enum Type {NONGAMINGSTUDENT, GAMINGSTUDENT};
enum Stream { NETFLIX, DISNEY, YOUTUBE, TIKTOK, HULU };
enum Game { XBOX, PLAYSTATION, NINTENDO, PC };
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
	virtual Type getType();
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
	void DisplayInfo() override
	{
		cout << "Name: " << getName() << " | Age: " << getAge() << " | College & Program: " << getCollegeName() << " | "
			<< getProgramName();
	}

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
		setName(a_name);
		setAge(a_age);
		setCollegeName(a_collegeName);
		setProgramName(a_programName);
		setCurrentSemster(a_currentSemester);
		setStreamingService(a_streamingService);
		setHoursSpentStreaming(a_hoursSpent);
		setType(m_type);
	}
	//Destructor
	~NonGamingStudent() = default;
	//Getters
	string getStreamingService() const;
	float getHoursSpentStreaming() const;
	Type getType() override
	{
		return m_type;
	}
	//Setters
	void setStreamingService(string name);
	void setHoursSpentStreaming(float hours);
	void setType(Type type);
	void DisplayInfo() override
	{
		cout << "Name: " << getName() << " | Age: " << getAge() << " | College & Program: " << getCollegeName() << " | "
			<< getProgramName() << "\nStreaming Platform: " << getStreamingService() << " | Time spent Streaming: " << getHoursSpentStreaming() << " hours\n\n";
	}

private:
	string m_streamingService;
	float m_hoursSpentStreaming;
	Type m_type;
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
		setHoursSpentGaming(a_hoursSpent);
		setType(m_type);
	}
	//Destructor
	~GamingStudent() = default;
	//Getters
	string getGamingPlatform() const;
	float getHoursSpentGaming() const;
	Type getType() override
	{
		return m_type;
	}
	//Setters
	void setGamingPlatform(string name);
	void setHoursSpentGaming(float hours);
	void setType(Type type);
	void DisplayInfo() override
	{
		cout << "Name: " << getName() << " | Age: " << getAge() << " | College & Program: " << getCollegeName() << " | "
			<< getProgramName() << "\nGaming Platform: " << getGamingPlatform() << " | Time spent Gaming: " << getHoursSpentGaming() << " hours\n\n";
	}
private:
	string m_gamingPlatform;
	float m_hoursSpentGaming;
	Type m_type;
};