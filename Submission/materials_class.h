/*
 *         NAME: Ty Ahrens
 *      PROGRAM: materials_class.h
 *         DATE: 10/31/24
 *      PURPOSE: Data class to set/get the material types, color, price, 
 *               and amount of each material. There are also comparison 
 *               and output overloaded operators for the material price 
 *               well.
 */

#ifndef MATERIALS_CLASS_H
#define MATERIALS_CLASS_H
#include <iostream>
#include <iomanip>
#include <string>
#include "list_node.h"

class Materials{
    private:
        std::string matType;
        std::string matColor;
        double matPrice;
        double matAmount;

    public:
        //constructor
        Materials();

        //deconstructor
        ~Materials();

        /*************** FUNCTIONS ***************/
        void setMaterialType(std::string);
        void setMaterialColor(std::string);
        void setMaterialPrice(double);
        void setMaterialAmount(double);
        std::string getMaterialType();
        std::string getMaterialColor();
        double getMaterialPrice();
        double getMaterialAmount();

        /*************** OVERLOADED OPERATORS ***************/
        bool operator==(const Materials&);
        bool operator<(const Materials&);
        bool operator>(const Materials&);
        friend std::ostream& operator<<(std::ostream& os, Materials& currentMaterial){
            os << "\nMATERIAL NAME:\t" << currentMaterial.matType 
            << "\nMATERIAL COLOR:\t" << currentMaterial.matColor 
            << "\nMATERIAL AMOUNT:\t" << currentMaterial.matAmount 
            << "\nMATERIAL COST:\t" << currentMaterial.matPrice << "\n";
            return os;
        }
};


#endif
