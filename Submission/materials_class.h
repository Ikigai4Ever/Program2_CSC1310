/*
 *         NAME: Ty Ahrens
 *      PROGRAM: materials_class.h
 *         DATE: 11/1/24
 *      PURPOSE: 
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

    void setMaterialType(std::string);
    void setMaterialColor(std::string);
    void setMaterialPrice(float);
    void setMaterialAmount(float);
    std::string getMaterialType()const;
    std::string getMaterialColor()const;
    float getMaterialPrice()const;
    float getMaterialAmount()const;

    bool operator==(const Materials &right_comparison); 

    bool operator<(const Materials &right_comparison);

    bool operator>(const Materials &right_comparison);

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
