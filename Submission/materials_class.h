/*
 *         NAME: Ty Ahrens
 *      PROGRAM: materials_class.h
 *         DATE: 11/1/24
 *      PURPOSE: 
 */
#ifndef MATERIALS_CLASS_H
#define MATERIALS_CLASS_H

#include <iostream>
#include <string>
#include "list_node.h"

class Materials{
    private:
        std::string matType;
        std::string matColor;
        float matPrice;
        float matAmount;

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
};


#endif
