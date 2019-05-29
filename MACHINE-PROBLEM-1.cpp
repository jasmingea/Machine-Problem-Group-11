// Machine Problem 1
// The program accepts 50 inputs of Student names, Total Short Quizzes, 
// Pre-Tests, Problem Sets, Preliminary Examinations, and Finals Examination scores, 
//Then the program outputs the Raw grades, together with its corresponding Grade Point Average.
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
	//Declare all the variables need to be used
	string name[50], temp;
	double  TotalQ[50], TotalAct[50], TotalP[50], TotalF[50], RawGrade[50], Quiz[50], Acts[50], Prelims[50], Finals[50];
	double quiz1[50],quiz9[50],quiz8[50],quiz7[50],quiz6[50],quiz5[50],quiz4[50],quiz3[50],quiz2[50];
	int PTest1[50], PTest2[50], PTest3[50], PTest4[50], PTest5[50], PTest6[50], PTest7[50], PTest8[50], PTest9[50];
	int Prob1[50], Prob2[50], Prob3[50], i, j, k;
	
	do 
	{ cout<< "Name: "; 
	getline(cin, name[i]);// loop to get the names of the 50 students
	i++; }  
	while (i<50);

	for (i = 0; i < 20; i++) // Getting the grades per student by looping 
	{
		cout << "Enter the grades of " <<name[i] << endl; // indicating of the name of student 
		cout << "for short quizzes n/50 (9) :\n"; 
		cin >> quiz1[i]>>quiz2[i]>>quiz3[i]>>quiz4[i]>>quiz5[i]>>quiz6[i]>>quiz7[i]>>quiz8[i]>>quiz9[i];// inputing the grades per quiz
		Quiz[i]= quiz1[i]+quiz2[i]+quiz3[i]+quiz4[i]+quiz5[i]+quiz6[i]+quiz7[i]+quiz8[i]+quiz9[i]; // formula for Total Quiz 
		cout << "for PreTests n/100 (9) :\n";
		cin >> PTest1[i]>> PTest2[i]>> PTest3[i] >> PTest4[i] >> PTest5[i]>> PTest6[i] >> PTest7[i] >> PTest8[i] >> PTest9[i];// inputing grades per pre test
		cout << "for Problem Set n/150 (3) :\n";
		cin >> Prob1[i] >>Prob2[i] >>Prob3[i];
		Acts[i] =  PTest1[i]+ PTest2[i]+ PTest3[i] + PTest4[i] + PTest5[i]+ PTest6[i] + PTest7[i] + PTest8[i] + PTest9[i] + Prob1[i] + Prob2[i] +Prob3[i];	// formula for the total activities 
		cout << "Preliminary Exam n/100 :\n"; 
		cin >> Prelims[i];	// inputs the grade for prelims
		cout << "Final Exam n/100 :\n";
		cin >> Finals[i];  // inputs the grade for fnals
		

		TotalQ[i] = (((Quiz[i] / 450) * 100 ) * (0.30)); // formula for total quiz grade into percentage
        TotalAct[i] = (((Acts[i] / 1350) * 100 ) * (0.15)); // formula for total activities gradeinto percentage
        TotalP[i] = (((Prelims[i] / 100) * 100) * (.25)); // formula for prelims grade into percentage
        TotalF[i] = (((Finals[i] / 100) * 100) * (.30)); // formula for finals grade into percentage
        RawGrade[i] = TotalQ[i] + TotalAct[i] + TotalP[i] + TotalF[i];// formula for Raw grade
        
    	cout << name[i];
        cout << "'s Raw Grade : " << RawGrade[i] << endl;// prints the raw grade of the student
			

		if (RawGrade[i]>95.56 && RawGrade[i]<101) // transmuting the rawgrade into its corresponding final grade
	{cout << "Your Transmuted Grade is 1.00 \n \n";	 }
			else if (RawGrade[i]>91.11 && RawGrade[i] < 95.57)
			{	cout << "Your Transmuted Grade is 1.25 \n \n"; }
			else if (RawGrade[i]>86.67 && RawGrade[i] < 91.12)
			{	cout << "Your Transmuted Grade is 1.50 \n \n"; }
			else if (RawGrade[i]>82.22 && RawGrade[i] < 86.68)
			{	cout << "Your Transmuted Grade is 1.75 \n \n"; }
			else if (RawGrade[i]>77.78 && RawGrade[i] < 82.23)
			{	cout << "Your Transmuted Grade is 2.00 \n \n"; }
			else if (RawGrade[i]>73.33 && RawGrade[i] < 77.79)
			{	cout << "Your Transmuted Grade is 2.25 \n \n"; }
			else if (RawGrade[i]>68.89 && RawGrade[i] < 73.34)
			{	cout << "Your Transmuted Grade is 2.50 \n \n"; }
			else if (RawGrade[i]>64.44 && RawGrade[i] < 68.90)
			{	cout << "Your Transmuted Grade is 2.75 \n \n"; }
			else if (RawGrade[i]>59.99 && RawGrade[i] < 64.45)
			{	cout << "Your Transmuted Grade is 3.00 \n \n"; }
			else
			{	cout << "Your Transmuted Grade is 5.00 \n \n"; }
	}
	for (i = 0; i < 50; i++)
	{	for (j = i + 1; j < 50; j++)
	    {   if (RawGrade[i] < RawGrade[j])
	        {   	      k = RawGrade[i];
	            RawGrade[i] = RawGrade[j];
	            RawGrade[j] = k;
	            
	            temp = name[i];
	            name[i] = name[j];
	            name[j] = temp;
	        }}}
	cout << "TOP 10 out of 50 students are : " << endl;
	for (i=0; i<10; i++)
	{
	    cout << name[i] << endl; // outputs the top 10 students out of the 50.
	}
	return 0;
}
//end of program

