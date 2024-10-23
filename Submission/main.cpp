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

int main()
{
    int choice;


    do{
        printMenu();
        cout<<"Choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            

            break;
            

            case 2:
            

            break;
            

            case 3:
            

            break;
            
            //Case 4 will end the program
            case 4:
            cout<<"Have a nice day!";
            return 0;
            
        }
    }while(choice != 4);
    
}

/*
 *      FUNCTION: printMenu()
 *      PURPOSE: Prints the menu so the user can read the options
 */

void printMenu(){
    cout<<"*********************************************************"<<endl;
    cout<<"1) Add material to storage"<<endl;
    cout<<"2) Take material from storage"<<endl;
    cout<<"3) Check materials in storage"<<endl;
    cout<<"4) End Program"<<endl<<endl;
}