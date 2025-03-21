/*NAME = MUHAMMAD ANFAAL
REG# L1F20BSSE0058  SECTION (N)
PROJECT NUMBER # 2
!! STUDENT GRADE REPORT !! */
#include <iostream>
using namespace std;
int main()
{
	cout << "WELCOME TO ADMIN PANEL ! " << endl; // WELCOME MESSAGE
	cout << "Enter Roll Number and their data to enroll students ! " << endl;
	// ASSIGNING VARIABLE
	char run = 'y';
	int count = 1;
	const int size = 100;
	int roll[size], computer[size], maths[size];
	char grade[size];
	float percentage[size], per;
	for (int i = 1; i <= size; i++)
	{
		while (run == 'y' || run == 'Y')// CONDITIONS TO RUN PROGRAM AGAIN OR NOT.
		{
			//TAKING INPUT OF STUDENT DATA.
			cout << "Enter Roll Number of student " << count << " : ";
			cin >> roll[count];
			for (int i = 1; i < count; i++)
			{
				while (roll[count] == roll[i])//IF ROLL NUMBER ALREADY EXISTS THAN THIS WILL ASK AGAIN FOR ROLL NUMBER
				{
					cout << "Entered roll # " << roll[count] << " already exists enter new roll # : ";
					cin >> roll[count];
				}
			}
			cout << "Enter Marks of Computer Science of student " << count << " within 100 : ";
			cin >> computer[count];
			while (computer[count] > 100)
			{
				cout << "!! Enter marks less than 100 !! " << endl;//IF MARKS ARE GREATER THAN 100 THAN USER WILL SEE THIS MESSAGE
				cin >> computer[count];
			}
			cout << "Enter Marks of Mathematics of student " << count << " within 100 : ";
			cin >> maths[count];
			while (maths[count] > 100)
			{
				cout << "!! Enter marks less than 100 !! " << endl;//IF MARKS ARE GREATER THAN 100 THAN USER WILL SEE THIS MESSAGE
				cin >> maths[count];
			}
			per = computer[count] + maths[count];
			per = per * 100 / 200;
			percentage[count] = per;
			if (percentage[count] < 50)
			{
				grade[count] = 'F';
			}
			else if (percentage[count] >= 50 && percentage[count] < 60)
			{
				grade[count] = 'D';
			}
			else if (percentage[count] >= 60 && percentage[count] < 75)
			{
				grade[count] = 'C';
			}
			else if (percentage[count] >= 75 && percentage[count] <= 90)
			{
				grade[count] = 'B';
			}
			else if (percentage[count] >= 91 && percentage[count] <= 100)
			{
				grade[count] = 'A';
			}
			cout << "Enter Y/y to continue adding students and their data and N/n to stop : ";// THIS WILL ASK USER EACH TIME THAT HE WANTS TO TAKE MORE INPUT OR NOT.
			cin >> run;
			while (run != 'y' && run != 'Y' && run != 'N' && run != 'n')//IF USER INPUT WRONG INPUT IT WILL ASAK TO ENTER AGAIN
			{
				cout << "!! INVALID INPUT !! Enter correct input (Y/y OR N/n) : ";
				cin >> run;
			}
			count++;
		}
	}
	cout << endl;
	system("cls");
	if (run == 'n' || run == 'N')//AFTER FISIHING OF INPUTS THIS WILL PROMPT RESULT IN A TABLE.
	{
		cout << "==================================================================================================================" << endl;
		cout << "#| \t | ROLL# | \t | COMPUTER MARKS |\t | MATHS MARKS | \t | PERCENTAGE | \t | GRADE |" << endl;
		cout << "------------------------------------------------------------------------------------------------------------------" << endl;
		for (int i = 1; i < count; i++)
		{
			cout << i << "\t" << "    " << roll[i] << "\t" << "              " << computer[i] << "\t" << "               " << maths[i] << "\t" << "            " << percentage[i] << "%" << "\t" << "            " << grade[i] << endl;
		}
		cout << "=================================================================================================================" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
		char again = 'y';
		while (again == 'y' || again == 'Y')
		{
			//USER WILL SEE THIS MENU THAT HE WANTS TO DO ANY CHANGES OR NOT.
			cout << "\n1) Press 1 to update ROLL NUMBER of a particular Student. " << endl;
			cout << "2) Press 2 to update marks of a particular student for COMPUTER. " << endl;
			cout << "3) Press 3 to update marks of COMPUTER for all students who are already enrolled. " << endl;
			cout << "4) Press 4 to update marks for MATHEMATICS. " << endl;
			cout << "5) Press 5 to update marks of MATHEMATICS for all students who are already enrolled. " << endl;
			cout << "6) Press 6 to SORT the data on the basis of generated percentages." << endl;
			cout << "7) Press 7 to DELETE the record of a particular student " << endl;
			cout << "8) Press N/n to EXIT " << endl;
			cout << "\nEnter your answer : ";//TAKING INPUT OF USER ANSWER
			char answer;
			cin >> answer;
			if (answer == '1')//IF USER INPUT 1 IT WILL CHANGE ROLL NUMBER BY USING FOLLOWING CONDITIONS.
			{
				//APPLYING CONDITIONS TO CHANGE ROLL NUMBER.
				cout << "Enter student ROLL NUMBER you want to update roll number : ";
				int changeroll;
				cin >> changeroll;
				cout << "Enter new roll number : ";
				int newroll;
				cin >> newroll;
				for (int i = 1; i < count; i++)
				{
					if (roll[i] == changeroll)
					{
						roll[i] = newroll;
					}
				}
				system("cls");
				//TAKING OUTPUT
				cout << "==================================================================================================================" << endl;
				cout << "#| \t | ROLL# | \t | COMPUTER MARKS |\t | MATHS MARKS | \t | PERCENTAGE | \t | GRADE |" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;

				for (int i = 1; i < count; i++)
				{
					cout << i << "\t" << "    " << roll[i] << "\t" << "              " << computer[i] << "\t" << "               " << maths[i] << "\t" << "            " << percentage[i] << "%" << "\t" << "               " << grade[i] << endl;
				}
				cout << "=================================================================================================================" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
				cout << "do you want to do any more changes ( y / n )? : ";//IT WILL ASK USER THAT HE WANT TO RUN AGAIN OR NOT
				cin >> again;
				while (again != 'y' && again != 'Y' && again != 'N' && again != 'n')//IF USER INPUT WRONG INPUT IT WILL ASAK TO ENTER AGAIN
				{
					cout << "!! INVALID INPUT !! Enter correct input (Y/y OR N/n) : ";
					cin >> again;
				}
			}
			if (answer == '2') // IF USER INPUT 2 IT WILL CHANGE MARKS OF CS OF PARTICULAR STUDENT BY USING FOLLOWING CONDITIONS.
			{
				//APPLYING CONDITIONS TO CHANGE MARKS.
				cout << "Enter student ROLL NUMBER you want to update COMPUTER marks : ";
				int changecomp;
				cin >> changecomp;
				cout << "Enter new COMPUTER marks : ";//TAKING INPUT OF NEW CS MARKS.
				int newcomp;
				cin >> newcomp;
				while (newcomp > 100)
				{
					cout << "!! Enter marks less than 100 !! " << endl;//IF MARKS ARE GREATER THAN 100 THAN USER WILL SEE THIS MESSAGE
				}
				for (int i = 1; i < count; i++)
				{
					if (roll[i] == changecomp)
					{
						computer[i] = newcomp;
						per = computer[i] + maths[i];//CHANGING PERCENTAGE ACCORDING TO NEW MARKS
						per = per * 100 / 200;
						percentage[i] = per;
						//CHANGING GRADE ACCORDING TO NEW MARKS
						if (percentage[i] < 50)
						{
							grade[i] = 'F';
						}
						else if (percentage[i] >= 50 && percentage[i] < 60)
						{
							grade[i] = 'D';
						}
						else if (percentage[i] >= 60 && percentage[i] < 75)
						{
							grade[i] = 'C';
						}
						else if (percentage[i] >= 75 && percentage[i] <= 90)
						{
							grade[i] = 'B';
						}
						else if (percentage[i] >= 91 && percentage[i] <= 100)
						{
							grade[i] = 'A';
						}
					}
				}
				system("cls");
				//TAKING OUTPUT
				cout << "==================================================================================================================" << endl;
				cout << "#| \t | ROLL# | \t | COMPUTER MARKS |\t | MATHS MARKS | \t | PERCENTAGE | \t | GRADE |" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;
				for (int i = 1; i < count; i++)
				{
					cout << i << "\t" << "    " << roll[i] << "\t" << "              " << computer[i] << "\t" << "               " << maths[i] << "\t" << "            " << percentage[i] << "%" << "\t" << "               " << grade[i] << endl;
				}
				cout << "=================================================================================================================" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
				cout << "do you want to do any more changes ( y / n )? : ";//IT WILL ASK USER THAT HE WANT TO RUN AGAIN OR NOT
				cin >> again;
				while (again != 'y' && again != 'Y' && again != 'N' && again != 'n')//IF USER INPUT WRONG INPUT IT WILL ASAK TO ENTER AGAIN
				{
					cout << "!! INVALID INPUT !! Enter correct input (Y/y OR N/n) : ";
					cin >> again;
				}
			}
			if (answer == '3')// IF USER INPUT 3 IT WILL CHANGE MARKS OF COMPUTER OF ALL STUDENTS BY USING FOLLOWING CONDITIONS.
			{
				system("cls");
				cout << "Enter marks of COMPUTER of all students " << endl;//TAKING INPUT OF ALL MARKS OF COMPUTER
				for (int i = 1; i < count; i++)
				{
					cout << "Enter marks of ROLL NUMBER " << roll[i] << " : ";//TAKING INPUT
					cin >> computer[i];
					while (computer[i] > 100)
					{
						cout << "!! Enter marks less than 100 !! " << endl;//IF MARKS ARE GREATER THAN 100 THAN USER WILL SEE THIS MESSAGE
						cin >> computer[i];
					}
				}
				for (int i = 1; i < count; i++)
				{
					per = computer[i] + maths[i];//CHANGING PERCENTAGE ACCORDING TO NEW MARKS
					per = per * 100 / 200;
					percentage[i] = per;
					//CHANGING GRADE ACCORDING TO NEW MARKS.
					if (percentage[i] < 50)
					{
						grade[i] = 'F';
					}
					else if (percentage[i] >= 50 && percentage[i] < 60)
					{
						grade[i] = 'D';
					}
					else if (percentage[i] >= 60 && percentage[i] < 75)
					{
						grade[i] = 'C';
					}
					else if (percentage[i] >= 75 && percentage[i] <= 90)
					{
						grade[i] = 'B';
					}
					else if (percentage[i] >= 91 && percentage[i] <= 100)
					{
						grade[i] = 'A';
					}
				}
				//TAKING OUTPUT
				cout << "==================================================================================================================" << endl;
				cout << "#| \t | ROLL# | \t | COMPUTER MARKS |\t | MATHS MARKS | \t | PERCENTAGE | \t | GRADE |" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;

				for (int i = 1; i < count; i++)
				{
					cout << i << "\t" << "    " << roll[i] << "\t" << "              " << computer[i] << "\t" << "               " << maths[i] << "\t" << "            " << percentage[i] << "%" << "\t" << "               " << grade[i] << endl;
				}
				cout << "=================================================================================================================" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
				cout << "do you want to do any more changes ( y / n )? : ";//IT WILL ASK USER THAT HE WANT TO RUN AGAIN OR NOT
				cin >> again;
				while (again != 'y' && again != 'Y' && again != 'N' && again != 'n')//IF USER INPUT WRONG INPUT IT WILL ASAK TO ENTER AGAIN
				{
					cout << "!! INVALID INPUT !! Enter correct input (Y/y OR N/n) : ";
					cin >> again;
				}
			}
			if (answer == '4')// IF USER INPUT 4 IT WILL CHANGE MARKS OF MATHS OF PARTICULAR STUDENT BY USING FOLLOWING CONDITIONS.
			{
				//APPLYING CONDITIONS TO CHANGE MARKS.
				cout << "Enter student ROLL NUMBER you want to update mathematics marks : ";
				int changemaths;
				cin >> changemaths;
				cout << "Enter new MATHEMATICS marks : ";//TAKING INPUT OF NEW MARKS 
				int newmaths;
				cin >> newmaths;
				while (newmaths > 100)
				{
					cout << "!! Enter marks less than 100 !! " << endl;//IF MARKS ARE GREATER THAN 100 THAN USER WILL SEE THIS MESSAGE
					cin >> newmaths;
				}
				for (int i = 1; i < count; i++)
				{
					if (roll[i] == changemaths)
					{
						maths[i] = newmaths;
						per = computer[i] + maths[i];//CHANGING PERCENTAGE ACCORDING TO NEW MARKS.
						per = per * 100 / 200;
						percentage[i] = per;
						//CHANGING GRADE ACCORDING TO NEW MARKS.
						if (percentage[i] < 50)
						{
							grade[i] = 'F';
						}
						else if (percentage[i] >= 50 && percentage[i] < 60)
						{
							grade[i] = 'D';
						}
						else if (percentage[i] >= 60 && percentage[i] < 75)
						{
							grade[i] = 'C';
						}
						else if (percentage[i] >= 75 && percentage[i] <= 90)
						{
							grade[i] = 'B';
						}
						else if (percentage[i] >= 91 && percentage[i] <= 100)
						{
							grade[i] = 'A';
						}
					}
				}
				system("cls");
				//TAKING OUTPUT
				cout << "==================================================================================================================" << endl;
				cout << "#| \t | ROLL# | \t | COMPUTER MARKS |\t | MATHS MARKS | \t | PERCENTAGE | \t | GRADE |" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;

				for (int i = 1; i < count; i++)
				{
					cout << i << "\t" << "    " << roll[i] << "\t" << "              " << computer[i] << "\t" << "               " << maths[i] << "\t" << "            " << percentage[i] << "%" << "\t" << "               " << grade[i] << endl;
				}
				cout << "=================================================================================================================" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
				cout << "do you want to do any more changes ( y / n )? : ";//IT WILL ASK USER THAT HE WANT TO RUN AGAIN OR NOT
				cin >> again;
				while (again != 'y' && again != 'Y' && again != 'N' && again != 'n')//IF USER INPUT WRONG INPUT IT WILL ASAK TO ENTER AGAIN
				{
					cout << "!! INVALID INPUT !! Enter correct input (Y/y OR N/n) : ";
					cin >> again;
				}
			}
			if (answer == '5')// IF USER INPUT 5 IT WILL CHANGE MARKS OF MATHS OF ALL STUDENTS BY USING FOLLOWING CONDITIONS.
			{
				system("cls");
				cout << "Enter marks of MATHEMATICS of all students" << endl;
				for (int i = 1; i < count; i++)
				{
					cout << "Enter marks of ROLL NUMBER " << roll[i] << " : ";//TAKING INPUT
					cin >> maths[i];
					while (maths[i] > 100)
					{
						cout << "!! Enter marks less than 100 !! " << endl;//IF MARKS ARE GREATER THAN 100 THAN USER WILL SEE THIS MESSAGE
						cin >> maths[i];
					}
				}
				for (int i = 1; i < count; i++)
				{
					per = computer[i] + maths[i];//CHANGING PERCENTAGE ACCORDING TO NEW MARKS.
					per = per * 100 / 200;
					percentage[i] = per;
					//CHANGING GRADE ACCORDING TO NEW MARKS.
					if (percentage[i] < 50)
					{
						grade[i] = 'F';
					}
					else if (percentage[i] >= 50 && percentage[i] < 60)
					{
						grade[i] = 'D';
					}
					else if (percentage[i] >= 60 && percentage[i] < 75)
					{
						grade[i] = 'C';
					}
					else if (percentage[i] >= 75 && percentage[i] <= 90)
					{
						grade[i] = 'B';
					}
					else if (percentage[i] >= 91 && percentage[i] <= 100)
					{
						grade[i] = 'A';
					}
				}
				//TAKING OUTPUT
				cout << "==================================================================================================================" << endl;
				cout << "#| \t | ROLL# | \t | COMPUTER MARKS |\t | MATHS MARKS | \t | PERCENTAGE | \t | GRADE |" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;

				for (int i = 1; i < count; i++)
				{
					cout << i << "\t" << "    " << roll[i] << "\t" << "              " << computer[i] << "\t" << "               " << maths[i] << "\t" << "            " << percentage[i] << "%" << "\t" << "               " << grade[i] << endl;
				}
				cout << "=================================================================================================================" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
				cout << "do you want to do any more changes ( y / n )? : ";//IT WILL ASK USER THAT HE WANT TO RUN AGAIN OR NOT
				cin >> again;
				while (again != 'y' && again != 'Y' && again != 'N' && again != 'n')//IF USER INPUT WRONG INPUT IT WILL ASAK TO ENTER AGAIN
				{
					cout << "!! INVALID INPUT !! Enter correct input (Y/y OR N/n) : ";
					cin >> again;
				}
			}
			if (answer == '6')// IF USER INPUT 6 IT WILL SORT DATA OF ALL STUDENTS BY USING FOLLOWING CONDITIONS.
			{
				system("cls");
				//TAKING OUTPUT OF DATA BEFORE SORTING
				cout << "****************** BEFORE SORTING **************** " << endl;
				cout << "==================================================================================================================" << endl;
				cout << "#| \t | ROLL# | \t | COMPUTER MARKS |\t | MATHS MARKS | \t | PERCENTAGE | \t | GRADE |" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;
				for (int i = 1; i < count; i++)
				{
					cout << i << "\t" << "    " << roll[i] << "\t" << "              " << computer[i] << "\t" << "               " << maths[i] << "\t" << "            " << percentage[i] << "%" << "\t" << "                     " << grade[i] << endl;
				}
				cout << "=================================================================================================================" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
				//APPLYING CONDITIONS TO SORT DATA IN ASSENDING ORDER ACCORDING TO GIVEN PERCENTAGE.
				for (int i = 1; i < count; i++)
				{
					for (int j = 1; j < count; j++)
					{
						if (percentage[i] > percentage[j])
						{
							int rtemp, ctemp, mtemp, gtemp, ptemp;
							rtemp = roll[i];
							roll[i] = roll[j];
							roll[j] = rtemp;
							ctemp = computer[i];
							computer[i] = computer[j];
							computer[j] = ctemp;
							mtemp = maths[i];
							maths[i] = maths[j];
							maths[j] = mtemp;
							gtemp = grade[i];
							grade[i] = grade[j];
							grade[j] = gtemp;
							ptemp = percentage[i];
							percentage[i] = percentage[j];
							percentage[j] = ptemp;
						}
					}
				}
				//TAKING OUTPUT OF DATA AFTER SORTING
				cout << "\n****************** AFTER SORTING ********************" << endl;
				cout << "==================================================================================================================" << endl;
				cout << "#| \t | ROLL# | \t | COMPUTER MARKS |\t | MATHS MARKS | \t | PERCENTAGE | \t | GRADE |" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;
				int num = 1;
				for (int i = count - 1; i >= 1; i--)
				{
					cout << num << "\t" << "    " << roll[i] << "\t" << "              " << computer[i] << "\t" << "               " << maths[i] << "\t" << "            " << percentage[i] << "%" << "\t" << "               " << grade[i] << endl;
					num++;
				}
				cout << "=================================================================================================================" << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
				cout << "do you want to do any more changes ( y / n )? : ";//IT WILL ASK USER THAT HE WANT TO RUN AGAIN OR NOT
				cin >> again;
				while (again != 'y' && again != 'Y' && again != 'N' && again != 'n')//IF USER INPUT WRONG INPUT IT WILL ASAK TO ENTER AGAIN
				{
					cout << "!! INVALID INPUT !! Enter correct input (Y/y OR N/n) : ";
					cin >> again;
				}
			}
			if (answer == '7')// IF USER INPUT 7 IT WILL DELETE DATA OF A PARTICULAR STUDENT BY USING FOLLOWING CONDITIONS.
			{
				cout << "Enter student ROLL NUMBER you want to delete : ";//TAKING INPUT OF ROLL NUMBER TO DELETE DATA
				int studentdelete;
				cin >> studentdelete;
				system("cls");
				//TAKING OUTPUT
				cout << "==================================================================================================================" << endl;
				cout << "#| \t | ROLL# | \t | COMPUTER MARKS |\t | MATHS MARKS | \t | PERCENTAGE | \t | GRADE |" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;
				int num1 = 1;
				//APPLYING CONDITIONS TO DELETE DATA.
				for (int i = 1; i < count; i++)
				{
					if (roll[i] == studentdelete)
					{
						roll[i] = 0;
						computer[i] = 0;
						maths[i] = 0;
						percentage[i] = 0;
						grade[i] = '0';
						num1--;
					}
					else
					{
						cout << num1 << "\t" << "    " << roll[i] << "\t" << "              " << computer[i] << "\t" << "               " << maths[i] << "\t" << "            " << percentage[i] << "%" << "\t" << "               " << grade[i] << endl;
					}
					num1++;
				}
				cout << "==================================================================================================================" << endl;
				cout << "------------------------------------------------------------------------------------------------------------------" << endl;
				cout << "do you want to do any more changes ( y / n )? : ";//IT WILL ASK USER THAT HE WANT TO RUN AGAIN OR NOT
				cin >> again;
				while (again != 'y' && again != 'Y' && again != 'N' && again != 'n')//IF USER INPUT WRONG INPUT IT WILL ASAK TO ENTER AGAIN
				{
					cout << "!! INVALID INPUT !! Enter correct input (Y/y OR N/n) : ";
					cin >> again;
				}
			}
			if (answer == 'n' || answer == 'N')// IF USER INPUT N/n IT WILL TERMINATE PROGRAM.
			{
				again = 'n';
			}
		}
		if (again == 'n' || again == 'N')
		{
			system("cls");
			cout << "             !! PROGRAM CLOSED !! " << endl;//WHEN USER TERMINATE'S PROGRAM THIS MESSAGE WILL BE SHOWN TO USER ON HIS CONSOLE SCREEN.
			cout << " \n            -: THANK'S FOR USING :-" << endl;
		}
	}
	system("pause");
	return 0;
}
