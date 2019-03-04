#include "stdafx.h"
#include "q1_18l1085.h"
#include <iostream>
using namespace std;
int student::counter=0;
student::student(){
	quizesscore=nullptr;
	gpa=-1;
	quiztak=0;
	quizcap=0;
	Id=0;
}
void student::inc(){
	++counter;
}
student::student(int quizCap,float Gpa){
	quizesscore=nullptr;
	gpa=Gpa;
	quizcap=quizCap;
	quiztak=0;
	inc();
	Id=counter;
}
student::student(const student &s2)
{
	Id=s2.Id;
	gpa=s2.gpa;
	quiztak=s2.quiztak;
	quizcap=s2.quizcap;
	quizesscore=new float[quizcap];
	for(int i=0;i<quiztak;i++){
		quizesscore[i]=s2.quizesscore[i];
	}
}
void student::addquizesscore(int score){
	
	if(quiztak>=quizcap && quizesscore!=nullptr){//Capacity Is Full
	cout<<"Sorry NO Capcity For New Quiz"<<endl;
	}
	 if(quizesscore!=nullptr && quiztak<quizcap)
	{//Enough Space 
		quizesscore[quiztak]=score;
		quiztak++;
	}
	 if(quizesscore==nullptr){ //Case In Which quizesscore Is emptt
		quizesscore=new float[quizcap];
		quizesscore[quiztak]=score;
		quiztak++;
	}
}
void student::setgpa(float Gpa){

	gpa=Gpa;
}
float student::getgpa()const{
return gpa;
}
void student::print()const{
	cout<<"Student Id : "<<Id<<endl;
	cout<<"Gpa : "<<gpa<<endl;
	cout<<"Quizes Taken :"<<quiztak<<endl;
	for(int i=0;i<quiztak;i++){
		cout<<"Quiz "<<i<<" Score : "<<quizesscore[i]<<endl;
	}
	cout<<endl;
}
bool student::compare(student s2){
	if(s2.gpa>gpa){
	cout<<"This Student Has Greater Gpa "<<endl;
	return true;
	}
	else{
	
	cout<<"This Student Has Less Gpa "<<endl;
	return false;
	}
	
	}
void student::updatescore(int no,int score){
	if(quizesscore[no]==0){
	cout<<"Sorry This "<<no<<" Quiz is Not Taken :"<<endl;
	}
	else{
		quizesscore[no-1]=score;
	}
}
student *student::greatergpa(student *arr,int &size){  //Greater Gpa FUnction
	student *arr2;
	int counter=0;
	for(int i=0;i<size;i++){
		if(arr[i].gpa>2){
		counter++;
		}
	}
	arr2=new student[counter];
	for(int i=0,j=0;i<size;i++){
		if(arr[i].gpa>2){
		arr2[j].gpa=arr[i].gpa;
		arr2[j].Id=arr[i].gpa;
		arr2[j].quizcap=arr[i].quizcap;
		arr2[j].quiztak=arr[i].quizcap;
		arr2[j].quizesscore=new float[quizcap];
		for(int k=0;k<arr2[j].quiztak;k++){
			arr2[j].quizesscore[k]=arr[i].quizesscore[k];
		}
		j++;
	}
}
	size=counter;
	return arr2;
	//We do NOt delete Privios Array because In manual it is written that we
	//should not to change the input array(arr)
}
void student::sort(student arr[],int size){

	for(int l=1;l<size;l++){
		float key=arr[l].gpa;
		student key1=arr[l];
		int k=l-1;
		while(k>=0 && arr[k].gpa>key){
			arr[k+1]=arr[k]; //Working Perfectly Shifts Objects To Right
			k--;
		}
		arr[k+1]=key1;
			
	}	
}
/*student::~student(){
	if(quizesscore!=nullptr){
		delete [] quizesscore;
	}
	
}*/
