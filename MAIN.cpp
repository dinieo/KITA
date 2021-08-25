#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include <iomanip>
#include<ctime>
using namespace std;


void delay(int milliseconds) 
{
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milliseconds); 
}



class Login
{
        /* File handling username password */
        protected:
            char username[50];
            char password[50];
			char email[100];
        public:
            void Register()
            {

                ofstream fs("user.txt",ios::app);
                cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t---------------------";
		        cout<<"\n\t\t\t\t\t Enter username: ";
                cin>>username;
                cout<<"\n\t\t\t\t\t---------------------";
		        cout<<"\n\t\t\t\t\t Enter email: ";
                cin>>email;
                cout<<"\n\t\t\t\t\t---------------------";
		        cout<<"\n\t\t\t\t\t Enter password: ";
                cin>>password;
                
                cout<<"\n\n\n\t\t\t\t\tCongratulation! You're now registered!"<<endl;
                fs<<username<<" "<<password<<" ";
                
                fs.close();
            }
            void login(char  un[],char pw[])
            {
                ifstream fs("user.txt",ios::in);
                while(!fs.eof())
                {
                fs>>username>>password;
					 if(strcmp(username,this->username)==0 && strcmp(password,this->password)==0)
               		 {
                       cout << "\t------------------";
                	 }
                else
               		 {
                    cout << "Invalid login ID. Please try again!";
                    Register();
               		}
                }
                fs.close();
            }
};


class donation
{ 
	public:
		void donate ()
	{
	
		bool error=0;
		int choice;
		
		do 
		{
			error = 0;
			char title[] = "Donation Menu";
			
			system("cls");
			cin.clear();
			
			// Display the menu 
			cout << "\n\n\n\t\t";
			for(int i = 0; i < 20; i++)
			{
				delay(30);
				printf("#");
			}
			cout << " ";
			for(int i = 0; i < 18; i++)
			{
				delay(30);
				printf("%c", title[i]);
			}
			cout << " ";
			for(int i = 0; i < 20; i++)
			{
				delay(30);
				printf("#");
			}
			delay(300);
			cout << "\n\n\t\t\t1. Money";
			delay(300);
			cout << "\n\n\t\t\t2. Hygienic Pack";
			delay(300);
			cout << "\n\n\t\t\t3. Educational Pack";
			delay(300);
			cout << "\n\n\t\t\t4. Food Pack";
			delay(300);
			cout << "\n\n\t\t\t0. Return to Main Menu\n\n\t\t";
			delay(300);
			for(int i = 0; i < 60; i++)
			{
				delay(10);
				printf("-");
			}
			cout << "\n\n\n\t\tPlease enter your choice: ";
			cin >> choice;
			
			// Detect failed cin command and invalid input.
			if(cin.fail() || choice > 2 || choice < 0)		// cin.fail() is used to check whether cin command failed
			{
				cout << "\n\n\t\tPlease enter valid choice." << endl;
				cin.clear();
				cin.ignore(80,'\n');
				error = 1;
			}
			cout << "\t\t";
			system("pause");
		}while(error == 1);		// end do-while
	}
};	

class volunteering
	{
	    private:
	        int dd,mm,yyyy,hh,min;
	    public:
	        
		void volunteer()
		{
			
		cout<<" *********Please choose a date**********";
		cout<<"\nEnter Year:";
	    cin>>yyyy;
	    cout<<"\nEnter Month:";
	    cin>>mm;
	    cout<<"\nEnter Day:";
	    cin>>dd;
		cout<<"\nEnter hour:";
	    cin>>hh;
	    cout<<"\nEnter minute:";
	    cin>>min;
	    
	    cout<<"\nEntered date :"<<dd<<"/"<<mm<<"/"<<yyyy;
		cout<<"\nEntered time :"<<hh<<":"<<min;
	    cout<<" \n\nYour request have been recorded.";
	    system("pause");
		}
};

class menu
{	
	public:
	void mainmenu()
{

	bool error=0;
	int choice;
	donation don;
	volunteering vol;
	
	do 
	{
		error = 0;
		char title[] = "Administrator Menu";
		
		system("cls");
		cin.clear();
		
		// Display the menu 
		cout << "\n\n\n\t\t";
		for(int i = 0; i < 20; i++)
		{
			delay(30);
			printf("#");
		}
		cout << " ";
		for(int i = 0; i < 18; i++)
		{
			delay(30);
			printf("%c", title[i]);
		}
		cout << " ";
		for(int i = 0; i < 20; i++)
		{
			delay(30);
			printf("#");
		}

		delay(300);
		cout << "\n\n\t\t\t1. Donate";
		delay(300);
		cout << "\n\n\t\t\t2. Volunteer";
		delay(300);
		cout << "\n\n\t\t\t3. Return to Main Menu\n\n\t\t";
		delay(300);
		for(int i = 0; i < 60; i++)
		{
			delay(10);
			printf("-");
		}
		cout << "\n\n\n\t\tPlease enter your choice: ";
		cin >> choice;
		
		if (choice == 1)
			don.donate();
		
		else if (choice == 2)
			vol.volunteer();
		
		else 
			mainmenu();
			
			
		// Detect failed cin command and invalid input.
		if(cin.fail() || choice > 2 || choice < 0)		// cin.fail() is used to check whether cin command failed
		{
			cout << "\n\n\t\tPlease enter valid choice." << endl;
			cin.clear();
			cin.ignore(80,'\n');
			error = 1;
		}
		cout << "\t\t";
		
	}while(error == 1);		// end do-while
}
};
		


int main()
{
   
    Login l1;
    menu m1;
    
    
    while(1)
    {
    system("cls");
    char username[50],password[50];
    int ch;
	cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t****************** Welcome ******************\n\n\t\t\t\t\t\t\t";
    cout<<"\n\t\t\t\t\t\t\t1. Register \n\n\n\t\t\t\t\t\t\t2. Login \n\n\n\t\t\t\t\t\t\t3. Exit"<<endl;
    cout<<"\n\n\n\n\t\t\t\tEnter choice: ";
    cin>>ch;
    system("CLS");
    	
    switch(ch)
    {
        case 1:
           l1.Register();
        break;
        case 2:
           cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t---------------------";
		   cout<<"\n\t\t\t\t\t Username : "; 
		   cin>>username;
           cout<<"\n\t\t\t\t\t---------------------";
		   cout<<"\n\t\t\t\t\t Password : "; 
		   cin>>password;
           l1.login(username,password);
           delay(10);
		   m1.mainmenu();
		break;
        case 3:
            exit(1);
    }
    getch();

   
	
    system("CLS");
	}
}





























