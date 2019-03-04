#include "stdafx.h"
#include "q1_18l1085.h"

//POSTION OF COMMENTS SHOW POSTION OF CONSTRCTORS AND DESTRUCTORS IN MAIN THE PROGRAM OUTPUT
void main(){

	student s1=student(3,-1);
	//Patamartize Constrctor Of Id 1 Is Invoked As We See In Above Line
	//That We write patarzamize Constrctor Of Id 1
	s1.addquizesscore(10);
	s1.addquizesscore(3);
	s1.addquizesscore(7);
	s1.addquizesscore(1);
	s1.print();
	student s2=student(4,2);
	//Patamartize Constrctor Of Id 2 Is Invoked As We See In Above Line
	//That We write patarzamize Constrctor Of Id 2
	s2.addquizesscore(9);
	s2.addquizesscore(4);
	s2.addquizesscore(6);
	s1.compare(s2);//COmapre Function Also Use Copy Consrctor For Comparsion
	s2.print();
	student s3(s1);
	//Copy Constructor Called For id 3 To Id
	s3.updatescore(1,3);
	s3.updatescore(10,3);
	s3.setgpa(3);
	s3.print();
	s1.print();

}
//Destrctor For s1 ,s2 and s3 are invoked as Id 1,2,1 because s3 has same id as s1 
//destrctor called here because ending of scope