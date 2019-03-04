#include "stdafx.h"
#include "q1_18l1085.h"
void printarr(student *arr2,int size){
	for(int i=0;i<size;i++){
	arr2[i].print();
}
}
//POSTION OF COMMENTS SHOW POSTION OF CONSTRCTORS AND DESTRUCTORS IN MAIN THE PROGRAM OUTPUT
void main(){
	//NON Dynamic Array
	student arr[3]={student(3,2),student(3,3),student(4,2.33)} ;
	//Paramatriz Constrctor Of ID 1,2 and 3 Call Respectively These
	//Constrctor Ivoked Here Beacuse In Above Line We have written Paramatrize Constrctor Of
	//3 Objects Of Non Dynamic Array
	arr[0].addquizesscore(1);
	arr[0].addquizesscore(4);
	arr[0].addquizesscore(10);
	arr[1].addquizesscore(10);
	arr[1].addquizesscore(4);
	arr[1].addquizesscore(9);
	arr[2].addquizesscore(9);
	arr[2].addquizesscore(8);
	arr[2].addquizesscore(7);
	//Dynamic array
	student *arr1=new student[4];
	//Deafult Constrctor Od Id 4,5,6 and 7 was Invoked because in above line we see that
	//we Intalize The dynamic array of type student So, deafult consructor Of Id 4 ,5,6 and 7 aws Invoked
	arr1[0]=student(3,2);
	//Paramatriz Constrctor Of Id 4 Is invoked As we this in above line which is basically
	// zero part of arr1 which is dynamic
	arr1[0].addquizesscore(1);
	arr1[0].addquizesscore(4);
	arr1[0].addquizesscore(10);
	arr1[1]=student(3,3);
	//Paramatriz Constrctor Of Id 5 Is invoked As we this in above line which is basically
	// First part of arr1 which is dynamic
	arr1[1].addquizesscore(10);
	arr1[1].addquizesscore(4);
	arr1[1].addquizesscore(9);
	arr1[2]=student(4,2.33);
	//Paramatriz Constrctor Of Id 6 Is invoked As we this in above line which is basically
	// 2nd part of arr1 which is dynamic
	arr1[2].addquizesscore(9);
	arr1[2].addquizesscore(8);
	arr1[2].addquizesscore(7);
	arr1[3]=student(4,1);
	//Paramatriz Constrctor Of Id 5 Is invoked As we this in above line which is basically
	// Third part of arr1 which is dynamic
	arr1[3].addquizesscore(2);
	arr1[3].addquizesscore(3);
	printarr(arr,3);
	printarr(arr1,4);
	student s1;
	//Deault Consctror Of s1 Is Invoked Here Beacause
	//...........................Sorting Function..........................//
	s1.sort(arr,3);//Sorint Array 
	s1.sort(arr1,4);//Sorting Array
	printarr(arr,3);
	printarr(arr1,4);
	student *arr2;
	//....................Greater Gpa Function................................//
	int size=3;//For Non Dynamic Array
	arr2=s1.greatergpa(arr,size);//Size Variable Changes To The No of Students Whose GPA is Greater Than 2.0
	//Deafult Constrctor Of arr2 Is Invoked Here because Of above line in 
	//We Intallize The arr2
	printarr(arr,size);
	size=4;//For Dynamic Array
	arr2=s1.greatergpa(arr1,size);
	//Deafult Constrctor Of arr2 Is Invoked Here because Of above line in 
	//We Intallize The arr2 Once Again
	printarr(arr2,size);
	//dealloacate arr1 dynamic array
	delete [] arr1;
	//delete arr2 dynamic pointer variable
	delete arr2;
}
//Destrctor Of Id 1,2,3,4,5,6,7,s1 and arr2 called here bacuse of ending of scope