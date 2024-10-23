/*
 *      NAME:   Zander Underwood
 *      PROGRAM: main.cpp
 *      DATE: 10/23/24
 */

#include "storage_class.h"
#include "materials_class.h"
#include <iostream>
#include <iomanip>
using namespace std;
//function prototypes
void printMenu();
void addMenu();
void removeMenu();

int main()
{
    int choice = 0;


    do{
        //prints menu
        printMenu();
        cout<<"Choice:";
        cin>>choice;

        if(choice < 1 || choice > 4)
        {
            cout<<"\n*********************************************************"<<endl;
            cout<<"Sorry you entered a number out of the range. Try again."<<endl;
            cout<<"*********************************************************"<<endl<<endl<<endl;
        }
        switch(choice)
        {   //Case 1 will add material to the storage
            case 1:
            cout<<"\n*********************************************************"<<endl;
            addMenu();
            cout<<"*********************************************************"<<endl<<endl<<endl;
            break;
            
            //Case 2 wil remove material from storage
            case 2:
            cout<<"\n*********************************************************"<<endl;
            removeMenu();
            cout<<"*********************************************************"<<endl<<endl<<endl;
            break;
            
            //Case 3 will check the materials in storage
            case 3:
            cout<<"\n*********************************************************"<<endl;
            cout <<"in case 3"<<endl;
            cout<<"*********************************************************"<<endl<<endl<<endl;
            break;
            
            //Case 4 will end the program
            case 4:
            cout<<"\n*********************************************************"<<endl;
            cout<<"Have a nice day!"<<endl;
            cout<<"*********************************************************"<<endl<<endl<<endl;
            return 0;
            
        }
    }while(choice != 4);
    
}

/*
 *      FUNCTION: printMenu()
 *      PURPOSE: Prints the menu so the user can read the options
 */

void printMenu(){
    cout<<"\n*********************************************************"<<endl;
    cout<<"1) Add material to storage"<<endl;
    cout<<"2) Take material from storage"<<endl;
    cout<<"3) Check materials in storage"<<endl;
    cout<<"4) End Program"<<endl;
    cout<<"*********************************************************"<<endl;
}

/*
 *      FUNCTION: addMenu()
 *      PURPOSE: Prints the menu so the user can add to the storage
 */

void addMenu(){
    cout<<"\n*********************************************************"<<endl;
    cout<<"1) Add to top"<<endl;
    cout<<"2) Choose where to add"<<endl;
    cout<<"3) Add to bottom"<<endl;
    cout<<"*********************************************************"<<endl;

}

/*
 *      FUNCTION: removeMenu()
 *      PURPOSE: Prints the menu so the user can remove from the storage
 */

void removeMenu(){
    cout<<"\n*********************************************************"<<endl;
    cout<<"1) Remove from top"<<endl;
    cout<<"2) Choose where to remove"<<endl;
    cout<<"3) Remove from bottom"<<endl;
    cout<<"*********************************************************"<<endl;
}