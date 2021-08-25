#include<iostream>
#include<string>
#include<iomanip>
#include<cstring>
#include<ctime>
#include<sstream>

using namespace std;


struct packagelist //defintion of a struct to store data about resturant
{
       string package;
       double price;
};
packagelist item[5];
void getdata ();
void showdata ();
void selectItems ();
void checkout ();
int c[5] = { 0, 0, 0, 0,0};



int main (){
	
	cout << "\n\n\n\t\t\t Thank you for choosing KITA" << endl;
    getdata(); //calling of a function to get load the data
    showdata();//calling of a function to display data
    selectItems(); //calling of a function select the items from the menu
    checkout(); //calling of a function to calculate the bill
    
       //system("pause");
       return 0;

}

// Data of items
void getdata() //a function to hold the data
{		
	
       item[1].package = "Food Package";
       item[1].price = 20.00;
       item[2].package = "Hygienic Package";
       item[2].price = 30.00;
       item[3].package = "Study Package";
       item[3].price = 40.00;
       item[4].package = "Money Donation";
       item[4].price = 10.00;
}



//A function to display menu
void showdata() 
{
	   cout << "\n\n\t\t\t----------------------------" <<endl;
       cout << "\t\t\t Items offered by us: " << endl;
       cout << "\t\t\t----------------------------\n" <<endl;
       cout <<"\t\t\t" << 1 << "\t" << item[1].package << setw(13) << "RM " << item[1].price << endl;
       cout <<"\t\t\t" << 2 << "\t" << item[2].package << setw(9) << "RM " << item[2].price << endl;
       cout <<"\t\t\t" << 3 << "\t" << item[3].package << setw(12) << "RM " << item[3].price << endl;
       cout <<"\t\t\t" << 4 << "\t" << item[4].package << setw(11) << "RM " << item[4].price << endl;
       cout << endl;
}

//A function select the items from the menu
void selectItems() 
{
       int ch,quantity;
       char con;
       do{
              cout << "\t\t\tEnter your choice :";
              cin >> ch; //takes the choice from the user to select the item
              cout << "\t\t\tEnter the Quantity :";
              cin >> quantity;
              switch (ch)
              {
              case 1:
              {
                     c[1] = c[1] + quantity;
                     cout << "You have Selected :" << item[1].package << endl;

                     break;
              }
              case 2:
              {
                     c[2] = c[2] + quantity;
                     cout << "You have Selected :" << item[2].package << endl;

                     break;
              }
              case 3:
              {
                     c[3] = c[3] + quantity;
                     cout << "You have Selected :" << item[3].package << endl;

                     break;
              }
              case 4:
              {
                     c[4] = c[4] + quantity;
                     cout << "You have Selected :" << item[4].package << endl;
                     break;
              }
			  
			  default:
                     cout << "Invalid input" << endl;
              }
              cout << endl;
              cout << "To select more items, press Y (Yes) or N (No): ";
              cin >> con;


       } while (con != 'N');
       cout << endl;

}

//Checkout system
void checkout ()
{
	system("cls");
	cin.clear();
	
	double total=0, tax1,tax2,due;		// The total price of all the book user wants
	double cash;		// the money recieved from customer
	
	// display receipt
	cout << "\n\n\t\t         Thank You for using our service        \t\t\n\n";
	for (int i = 1; i < 10; i++)
       {
              if (c[i] > 0)
              {
              		 cout << "QTY" << "\t" << "ITEM" << "\t            " << "  PRICE\n" << endl;
                     cout << c[i] << "\t" << item[i].package << setw(11)<< "RM" << item[i].price << endl;
                     total = total + (item[i].price*c[i]);
                     cout << "-----------------------------------------------" <<endl;
              }
              
        }
    	tax1 = total*0.06; //calculate the tax on the total price
    	tax2 = total*0.10;
        due = total + tax1 + tax2; //calculate the price after adding tax
        
    	cout << endl;
       	cout << "        Tax: " << "\t" << "       RM " << tax1 << endl;
       	cout << "        Service Tax:" << "   RM " << tax2 << endl;
       	cout << "        Total: " << "        RM " << total <<endl;
       	cout << "-----------------------------------------------" << endl;
       	cout << "        Amount due     RM " << due<< endl;
       	cout << "-----------------------------------------------" << endl;
              

}

