#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
string name;
string	user="admin",pass="password";
int nol(char n[2]);
void view(char n[2]);
void registration(int roll);
void record();
int chk(char c[]);
void check();
void remove();
void logout();
void login();
int auth=0;
void takeattendance();
int main()
{
	cout<<"\033[2J";	
	cout<<"\n\n\t\t\t_________________________________________________________________________________________________\n\t\t\t";
	cout<<"|*---------------------------------------------------------------------------------------------*|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                    Attendance Consolidation and Information System                          *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
        cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                               			       *|\n\t\t\t";
	cout<<"|*_____________________________________________________________________________________________*|\n\n\n\t";
	cout<<"\n\n\n\n\n\n";
	menu:
	cout<<"Press Enter to continue...";	
	getchar();
	cout<<"\033[2J";
	int a,b,c;
	char name[25];
	cout<<"\n\t\t\t\t-------------------------------MAIN MENU-------------------------------------\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	if(auth==0)
	cout<<"|*                     1. Admin Login                                      *|\n\t\t\t\t";
	else
	cout<<"|*                     1. Logout                                           *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                     2. Register a candidate                             *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
        cout<<"|*                     3. View candidate file info	                   *|\n\t\t\t\t"; 
   	cout<<"|*                                                                         *|\n\t\t\t\t";
   	cout<<"|*                        			                           *|\n\t\t\t\t";
   	cout<<"|*                     4. Taking attendance for candidates                 *|\n\t\t\t\t";
   	cout<<"|*                                                                         *|\n\t\t\t\t";
   	cout<<"|*                                                                         *|\n\t\t\t\t";
   	cout<<"|*                     5. View registered candidates                       *|\n\t\t\t\t";
   	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                     6. Check attendance on a particular day             *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                     7. Remove a student record                          *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                     8. Exit                                             *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
	cout<<"|*            Note: Exiting program casues logout automatically            *|\n\t\t\t\t";
	cout<<"|*                                                                         *|\n\t\t\t\t";
   	cout<<"|*                                                                         *|\n\t\t\t\t";
   	cout<<"-----------------------------------------------------------------------------\n\n\n\t\t";
	cout<<"\n\n\n\n";
	char n[2];
	redo:	
	cout<<"Enter your option:";
	cin>>a;
	char x;
	switch(a)
{
		case 1:		cout<<"\033[2J";
				cout<<"\n\t\t\t\t-----------------------------Login Portal--------------------------------\n";
				if(auth==0)
				login();
				else
				logout();
				getchar();
				goto menu;
	      	case 2:     	if(auth==0)
				{
					cout<<"Please Login to continue..";
					getchar();
					goto menu;
				}
				else
				{
				cout<<"\033[2J";
				cout<<"\n\t\t\t\t----------------------------Registering Candidate--------------------------------\n";
			        cout<<"Enter roll no:";
				cin>>c;				
				registration(c);
				getchar(); 	
				goto menu; 
			    	break;
				}
        	case 3:     	cout<<"\033[2J";
			    	cout<<"\n\t\t\t\t----------------------------View candidate---------------------------------\n";
				cout<<"Enter Roll no:";
			        cin>>n;
			    	view(n); 
		            	getchar();
		            	goto menu;
			        break;
		case 4:     	if(auth==0)
				{
					cout<<"Please Login to continue..";
					getchar();
					goto menu;
				}
				else
				{
				cout<<"\033[2J";
			    	cout<<"\n\t\t\t\t----------------------------Taking attendance--------------------------------\n";
				takeattendance();
				getchar();	
				goto menu;
				break;
				}
		case 5:		cout<<"\033[2J";
				record();
				getchar();
				goto menu;
		case 6:		if(auth==0)
				{
					cout<<"Please Login to continue..";
					getchar();
					goto menu;
				}
				else
				{
				cout<<"\033[2J";
				cout<<"\n\t\t\t\t----------------------------------Checking attendance--------------------------------\n";
				check();
				getchar();
				goto menu;
				break;
				}
		case 7:		if(auth==0)
				{
					cout<<"Please Login to continue..";
					getchar();
					goto menu;
				}
				else
				{
					remove();
					cout<<"Data removed successfully...";
					goto menu;
				}
   		case 8:         cout<<"\033[2J";
				exit(0);
				break;
		default:	cout<<"Invalid input....Please try again....\n";	
				goto redo;
				break;
}
	return 0;
}

void registration(int roll)
{
	string name;
	int present,absent,total=90;
	float percent;
	fstream a;
	a.open("display.txt",ios::out | ios::app);
	cout<<"Enter name:";
	cin>>name;
	a<<roll<<"\t\t"<<name<<endl;
	a.close();
}

void view(char n[2])
{
	int i=0;
	string line;
	fstream a;
	a.open(n,ios::in);
	for(i=0;getline(a,line);i++)
	{
		cout<<"Day "<<i+1;
		if(line=="1")
		cout<<" present";
		else
		cout<<" absent";
		cout<<endl;
	}
}

void record()
{
	string line;
	fstream a;
	a.open("display.txt",ios::in);
	cout<<"Roll no		Student name\n";
	while(getline(a,line))
	cout<<line<<endl;
	a.close();	
}

void takeattendance()
{
	int l;
	char dec,num[2];
	cout<<"Enter Roll.No:";
	cin>>num;
	if(chk(num)==1)
{
	fstream a;
	a.open(num,ios::out|ios::app);
	l=nol(num);
	cout<<"Is Roll.No "<<num<<" present on day "<<l+1<<" ?(y/n)";
	cin>>dec;
	if(dec=='y')
	a<<1<<endl;
	else
	a<<0<<endl;
}
	else
	cout<<"Roll no not registered..\n";
}
void check()
{
	int i,n;
	char d[2];
	string line;
	char nu[2];
	fstream a;
	cout<<"Enter roll.no:";
	cin>>nu;
	cout<<"Enter on which day you want the attendance for the roll no "<<nu<<" :";
	cin>>n;
	if(nol(nu)>=n)
{
	a.open(nu,ios::in);
	for(i=1;i<=n;i++)
	{
		getline(a,line);
	}
	if(line=="1")
	cout<<"Present\n";
	else
	cout<<"Absent\n";
	a.close();
}
	else 
	cout<<"Attendance is not taken yet...\n";
}

int chk(char c[])
{
	fstream a;
	a.open("display.txt",ios::in);
	char b[2];
	string line;
	while(a>>b)
	{
		getline(a,line);
		if(!strcmp(b,c))
		return 1;
	}
	return 0;
}
void login()
{
	string uentered,pentered;
	cout<<"Enter username:";
	cin>>uentered;
	cout<<"Enter password:";
	cin>>pentered;
	if(uentered==user&&pentered==pass)
	{
	auth=1;	
	cout<<"Logged in successfully...";
	}
	else
	cout<<"Something went wrong.....";
}
void logout()
{
	auth=0;
	cout<<"Logged out successfully...";
}

int nol(char n[2])
{	
	int nlines=0;
	string line;
	fstream a;
	a.open(n,ios::in);
	while(getline(a,line))
	nlines++;
	return nlines;
}

void remove()
{
	char roll_no[2];
        cout<<"Enter roll no.:";
	cin>>roll_no;
	remove(roll_no);
}
