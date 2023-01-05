#include <iostream>

#include <conio.h>

#include <cstdlib>

#include <windows.h>

using namespace std;

struct student
{

	char nam[20], rollno[20];

	int marks, random;
};

student st;


class Quiz{

public:

void cppp()
{

	int i = 0, arr[6];

	st.marks = 0;

	char choice;

	while (i < 5)
	{

	back:

		st.random = rand() % 6;

		for (int j = 0; j <= 6; j++)
		{

			if (st.random == arr[j])
			{

				goto back;
			}
		}

		arr[i] = st.random;

		switch (st.random)

		{

		case 0:

			cout << i + 1 << ") What is a correct syntax to output \"Hello World\" in C++?" << endl;

			cout << "A. System.out.println(\"Hello world\");" << endl;

			cout << "B. Console.WriteLine(\"Hello world\");" << endl;

			cout << "C. print(\"Hello world\");" << endl;

			cout << "D. cout<<\"Hello world\";" << endl;

			choice = getch();

			if (choice == 'D' || choice == 'd')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is d" << endl
					 << endl;
			}

			break;

		case 1:

			cout << i + 1 << ") Which of the following is called address operator?" << endl;

			cout << "a) *" << endl;

			cout << "b) &" << endl;

			cout << "c) _" << endl;

			cout << "d) %" << endl;

			choice = getch();

			if (choice == 'B' || choice == 'b')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is b" << endl
					 << endl;
			}

			break;

		case 2:

			cout << i + 1 << ") Which of the following is used for comments in C++?" << endl;

			cout << "a) // comment" << endl;

			cout << "b) /* comment */" << endl;

			cout << "c) both // comment or /* comment */" << endl;

			cout << "d) // comment */" << endl;

			choice = getch();

			if (choice == 'c' || choice == 'C')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is c" << endl
					 << endl;
			}

			break;

		case 3:

			cout << i + 1 << ") Who created C++?" << endl;

			cout << "a) Bjarne Stroustrup" << endl;

			cout << "b) Dennis Ritchie" << endl;

			cout << "c) Ken Thompson" << endl;

			cout << "d) Brian Kernighan" << endl;

			choice = getch();

			if (choice == 'A' || choice == 'a')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is a" << endl
					 << endl;
			}

			break;

		case 4:

			cout << i + 1 << ")  A language which has the capability to generate new data types are called" << endl;

			cout << "a) Extensible" << endl;

			cout << "b) Overloaded" << endl;

			cout << "c) Encapsulated" << endl;

			cout << "d) Reprehensible" << endl;

			choice = getch();

			if (choice == 'A' || choice == 'a')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is a" << endl
					 << endl;
			}

			break;

		case 5:

			cout << i + 1 << ") Which of the following is called insertion/put to operator?" << endl;

			cout << "a) <" << endl;

			cout << "b) >" << endl;

			cout << "c) <<" << endl;

			cout << "d) >>" << endl;

			choice = getch();

			if (choice == 'c' || choice == 'C')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl
					 << endl;

				cout << "The corrent answer is c" << endl;
			}

			break;

		case 6:

			cout << i + 1 << ") Which of the following is called extraction/get from operator?" << endl;

			cout << "a) <" << endl;

			cout << "b) >" << endl;

			cout << "c) <<" << endl;

			cout << "d) >>" << endl;

			choice = getch();

			if (choice == 'd' || choice == 'D')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is d" << endl
					 << endl;
			}

			break;
		}

		i++;
	}
}

void java()
{

	int i = 0, arr[6];

	st.marks = 0;

	char choice;

	while (i < 5)
	{

	back:

		st.random = rand() % 6;

		for (int j = 0; j <= 6; j++)
		{

			if (st.random == arr[j])
			{

				goto back;
			}
		}

		arr[i] = st.random;

		switch (st.random)

		{

		case 0:

			cout << i + 1 << ") Which of the following is not a java features?" << endl;

			cout << "A. dynamic" << endl;

			cout << "B. architecture neutral" << endl;

			cout << "C. use of pointers" << endl;

			cout << "D. object oriented" << endl;

			choice = getch();

			if (choice == 'C' || choice == 'c')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is c" << endl
					 << endl;
			}

			break;

		case 1:

			cout << i + 1 << ")___is used to find and fix bugs in the java programs " << endl;

			cout << "a) JVM" << endl;

			cout << "b) JRE" << endl;

			cout << "c) JDK" << endl;

			cout << "d) JDB" << endl;

			choice = getch();

			if (choice == 'D' || choice == 'd')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is d" << endl
					 << endl;
			}

			break;

		case 2:

			cout << i + 1 << ") what is the return type of the hashcode() method in object class?" << endl;

			cout << "a) object" << endl;

			cout << "b) int" << endl;

			cout << "c) long" << endl;

			cout << "d) void" << endl;

			choice = getch();

			if (choice == 'b' || choice == 'B')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is b" << endl
					 << endl;
			}

			break;

		case 3:

			cout << i + 1 << ") what does the expression float a=35/0 return ?" << endl;

			cout << "a) 0" << endl;

			cout << "b) not a number" << endl;

			cout << "c) infinity" << endl;

			cout << "d) run time exception" << endl;

			choice = getch();

			if (choice == 'C' || choice == 'c')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is c" << endl
					 << endl;
			}

			break;

		case 4:

			cout << i + 1 << ")evaluate following java expression if x=3 y=5,z=10,then ++z+y-y+z+x++ ?" << endl;

			cout << "a) 24" << endl;

			cout << "b) 23" << endl;

			cout << "c) 20" << endl;

			cout << "d) 25" << endl;

			choice = getch();

			if (choice == 'D' || choice == 'd')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is d" << endl
					 << endl;
			}

			break;

		case 5:

			cout << i + 1 << ") which package contains the random class?" << endl;

			cout << "a) java.utl package " << endl;

			cout << "b) java.lang package" << endl;

			cout << "c) java.awt package " << endl;

			cout << "d) java.io package " << endl;

			choice = getch();

			if (choice == 'a' || choice == 'A')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl
					 << endl;

				cout << "The corrent answer is a" << endl;
			}

			break;

		case 6:

			cout << i + 1 << ") which of the following is a reserved keyword in java ?" << endl;

			cout << "a) object" << endl;

			cout << "b) strictfp" << endl;

			cout << "c) main" << endl;

			cout << "d) system" << endl;

			choice = getch();

			if (choice == 'b' || choice == 'B')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is d" << endl
					 << endl;
			}

			break;
		}

		i++;
	}
}

void html()
{

	int i = 0, arr[6];

	st.marks = 0;

	char choice;

	while (i < 5)
	{

	back:

		st.random = rand() % 6;

		for (int j = 0; j <= 6; j++)
		{

			if (st.random == arr[j])
			{

				goto back;
			}
		}

		arr[i] = st.random;

		switch (st.random)

		{

		case 0:

			cout << i + 1 << ") HTML is the standard ____language for creating Web pages. ?" << endl;

			cout << "A.scripting " << endl;

			cout << "B. programming" << endl;

			cout << "C. styling" << endl;

			cout << "D. markup" << endl;

			choice = getch();

			if (choice == 'D' || choice == 'd')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is d" << endl
					 << endl;
			}

			break;

		case 1:

			cout << i + 1 << ") HTML stands for_______.?" << endl;

			cout << "a) Hyperactive Text Markup Language" << endl;

			cout << "b) Hyper Text Markup Language" << endl;

			cout << "c) Hyper Text Machine Language" << endl;

			cout << "d) none of these" << endl;

			choice = getch();

			if (choice == 'B' || choice == 'b')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is b" << endl
					 << endl;
			}

			break;

		case 2:

			cout << i + 1 << ") Which is the correct syntax to include comment in an HTML document? ?" << endl;

			cout << "a) //" << endl;

			cout << "b) /* comment*/" << endl;

			cout << "c)//comment //" << endl;

			cout << "d) <!--comment -->>" << endl;

			choice = getch();

			if (choice == 'd' || choice == 'D')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is d" << endl
					 << endl;
			}

			break;

		case 3:

			cout << i + 1 << ") Can we hide content using the comment? ?" << endl;

			cout << "a) yes" << endl;

			cout << "b) no" << endl;

			cout << "c) both " << endl;

			cout << "d) none of these" << endl;

			choice = getch();

			if (choice == 'A' || choice == 'a')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is a" << endl
					 << endl;
			}

			break;

		case 4:

			cout << i + 1 << ")  Which element/tag defines a paragraph? " << endl;

			cout << "a) <p>" << endl;

			cout << "b) <pre>" << endl;

			cout << "c) <panel>" << endl;

			cout << "d) none of these" << endl;

			choice = getch();

			if (choice == 'A' || choice == 'a')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is a" << endl
					 << endl;
			}

			break;

		case 5:

			cout << i + 1 << ") Which tag/element defines the HTML document's body??" << endl;

			cout << "a) <html>" << endl;

			cout << "b) <htmlbody>" << endl;

			cout << "c) <bdy>" << endl;

			cout << "d) <body>" << endl;

			choice = getch();

			if (choice == 'd' || choice == 'D')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl
					 << endl;

				cout << "The corrent answer is d" << endl;
			}

			break;

		case 6:

			cout << i + 1 << ") Which tag contains the meta information about the HTML page??" << endl;

			cout << "a) <html>" << endl;

			cout << "b) <title>" << endl;

			cout << "c) <head>" << endl;

			cout << "d) <body>" << endl;

			choice = getch();

			if (choice == 'c' || choice == 'C')
			{

				cout << choice << " is correct Answer" << endl
					 << endl;

				st.marks++;
			}

			else
			{

				cout << choice << " is incorrect Answer" << endl;

				cout << "The corrent answer is c" << endl
					 << endl;
			}

			break;
		}

		i++;
	}
}

void result()
{

	float percentage = 0;

	cout << "Student Name: " << st.nam << endl;

	cout << "Roll no: " << st.rollno << endl;

	cout << "Marks: " << st.marks << " out of 6" << endl;

	percentage = 100 * st.marks / 6;

	cout << "Percentage: " << percentage << "%" << endl;

	if (percentage >= 50)
	{

		cout << "Status: Pass" << endl;
	}

	else
	{

		cout << "Status: Fail" << endl;
	}
}

void start()
{

	char press, select;

	do

	{

		cout << "\n\n\t\t****************" << endl;

		cout << "\t\t  QUIZ SYSTEM" << endl;

		cout << "\t\t****************" << endl;

		cout << "\t\tEnter name: ";

		gets(st.nam);

		cout << "\t\tEnter rollno: ";

		gets(st.rollno);

		system("CLS");

		cout << "\t\tMarks less than 50% will be fail" << endl;

		cout << "\n\nSelect option which subject's quiz you want to perform" << endl;

		cout << "1) C++" << endl;

		cout << "2) Java" << endl;

		cout << "3) Html" << endl;

		select = getch();

		system("CLS");

		switch (select)
		{

		case '1':

			cout << "\t\tC++ Quiz" << endl;

			cppp();

			system("CLS");

			cout << "\t\tC++ Quiz Result" << endl;

			result();

			break;

		case '2':

			cout << "\t\tJava Quiz" << endl;

			java();

			system("CLS");

			cout << "\t\tJava Quiz Result" << endl;

			result();

			break;

		case '3':

			cout << "\t\tHtml Quiz" << endl;

			html();

			system("CLS");

			cout << "\t\tHtml Quiz Result" << endl;

			result();

			break;

		default:

			cout << "Invalid input" << endl;

			break;
		}

		cout << "Press y if you want to continue or any key to terminate" << endl;

		press = getch();

		system("CLS");

	} while (press == 'y' || press == 'Y');
}

};


int main(){

	Quiz q1;
	q1.start();
	return 0;
}