#pragma once
#include <iostream>
using namespace std;
class student{
private:
	static int counter;
	float *quizesscore;
	int quizcap;
	int quiztak;
	float gpa;
	int Id;
public:
	student();
	student(int ,float);
	student(const student &);
	void addquizesscore(int);
	void setgpa(float);
	float getgpa()const;
	void print() const;
	bool compare(student);
	void updatescore(int,int);
	static void inc();
	void sort(student arr[],int size);
	student *greatergpa(student *arr,int &size);
	//~student();

};

