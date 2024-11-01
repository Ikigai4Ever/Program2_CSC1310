/*
 *      NAME:   Zander Underwood
 *      PROGRAM: main.cpp
 *      DATE: 10/30/24
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
void sortMenu();
void addMat(Materials &mat);

int main()
{
    int choice = 0, menuChoice = 0;
    Storage myStorage;
    Materials myMats;

    do{
        cout <<myStorage;
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
            cout << "Choice: ";
            cin >> menuChoice;
            if(menuChoice > 3||menuChoice < 1)
            {
                cout<<"\n*********************************************************"<<endl;
                cout<<"Sorry you entered a number out of the range. Try again."<<endl;
            }
            //menuChoice 1 will add to the top
            else if(menuChoice == 1)
            {
                cout<<"\n*********************************************************"<<endl;
                addMat(myMats); //calls addMat for user input
                myStorage.push_front(myMats); //push the Mat to the top of list
                
            }
            //menuChoice 2 will add to the bottom
            else if(menuChoice == 2)
            {
                cout<<"\n*********************************************************"<<endl;
                addMat(myMats); //calls addMat for user input
                myStorage.push_bottom(myMats); //push the mat to the bottom of the list
                

            }
            else if(menuChoice == 3)
            {
                break;
            }

            cout<<"*********************************************************"<<endl<<endl<<endl;
            break;
            
            //Case 2 wil remove material from storage
            case 2:
            cout<<"\n*********************************************************"<<endl;
            removeMenu();
            cout << "Choice: ";
            cin >> menuChoice;
            if(menuChoice > 3||menuChoice < 1)
            {
                cout<<"\n*********************************************************"<<endl;
                cout<<"Sorry you entered a number out of the range. Try again."<<endl;
            }
            //menuChoice 1 will remove from the top
            else if(menuChoice == 1)
            {
                cout<<"\n*********************************************************"<<endl;
                myStorage.pop_front(myMats); //pops the front element from the list
                
            }
            //menuChoice 2 will remove from the bottom
            else if(menuChoice == 2)
            {
                cout<<"\n*********************************************************"<<endl;
                myStorage.pop_back(myMats); //pops the bottom element from the list
                
            }
            else if(menuChoice == 3)
            {
                break;
            }
            cout<<"*********************************************************"<<endl<<endl<<endl;
            break;
            
            //Case 3 will sort the materials in storage
            case 3:
            cout<<"\n*********************************************************"<<endl;
            sortMenu();
            cout << "Choice: ";
            cin >> menuChoice;
            if(menuChoice > 3||menuChoice < 1)
            {
                cout<<"\n*********************************************************"<<endl;
                cout<<"Sorry you entered a number out of the range. Try again."<<endl;
            }
            //menuChoice 1 sort by accending order
            else if(menuChoice == 1)
            {
                cout<<"\n*********************************************************"<<endl;
                myStorage.sorting_ac(true); //bool is true, so sort in ascending
                
            }
            //menuChoice 2 will sort by decending order
            else if(menuChoice == 2)
            {
                cout<<"\n*********************************************************"<<endl;
                myStorage.sorting_ac(false); //bool is false, so sort in decending
                
            }
            else if(menuChoice == 3)
            {
                break;
            }
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
    cout<<"3) Sort materials in storage"<<endl;
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
    cout<<"2) Add to bottom"<<endl;
    cout<<"3) Back"<<endl;
    cout<<"*********************************************************"<<endl;

}

/*
 *      FUNCTION: removeMenu()
 *      PURPOSE: Prints the menu so the user can remove from the storage
 */

void removeMenu(){
    cout<<"\n*********************************************************"<<endl;
    cout<<"1) Remove from top"<<endl;
    cout<<"2) Remove from bottom"<<endl;
    cout<<"3) Back"<<endl;
    cout<<"*********************************************************"<<endl;
}

/*
 *      FUNCTION: sortMenu()
 *      PURPOSE: Prints the menu so the user can sort the storage
 */
void sortMenu(){
    cout<<"\n*********************************************************"<<endl;
    cout<<"1) Sort Accending"<<endl;
    cout<<"2) Sort Decending"<<endl;
    cout<<"3) Back"<<endl;
    cout<<"*********************************************************"<<endl;
}

void addMat(Materials &mat) //gets user input for a material
{
    string wordtemp; //uses temps to set atributtes
    float numtemp;
    cout<<"\n*********************************************************"<<endl;
    cout << "Type) ";
    cin.ignore(); //ignore  
    getline(cin,wordtemp);
    mat.setMaterialType(wordtemp);
    cout << endl;
    cout<< "Color) ";
    getline(cin,wordtemp);
    mat.setMaterialColor(wordtemp);
    cout << endl;
    cout<< "Price) ";
    cin >> numtemp;
    mat.setMaterialPrice(numtemp);
    cout << endl;
    cout<< "Amount) ";
    cin >> numtemp;
    mat.setMaterialAmount(numtemp);
    cout<< endl;

    
}