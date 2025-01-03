/*
 *         NAME: Ty Ahrens
 *      PROGRAM: materials_class.cpp
 *         DATE: 10/31/24
 *      PURPOSE: This is the functions for the materials_class.h
 */

#include "materials_class.h"

/*
 *      FUNCTION: setMaterialType() 
 *       PURPOSE: set the material type at the current node 
 */

void Materials::setMaterialType(std::string materialType){
    this->matType = materialType;
}

/*
 *      FUNCTION: setMaterialColor() 
 *       PURPOSE: set the material color at the current node
 */

void Materials::setMaterialColor(std::string materialColor){
    this->matColor = materialColor;
}

/*
 *      FUNCTION: setMaterialPrice() 
 *       PURPOSE: set the material price at the current node
 */

void Materials::setMaterialPrice(float materialPrice){
    this->matPrice = materialPrice; 
}

/*
 *      FUNCTION: setMaterialAmount() 
 *       PURPOSE: set the material amount at the current node
 */

void Materials::setMaterialAmount(float materialAmount){
    this->matAmount = materialAmount;
}

/*
 *      FUNCTION: getMaterialType() 
 *       PURPOSE: get the material type from the desired node
 */

std::string Materials::getMaterialType()const{
    return this->matType;
}

/*
 *      FUNCTION: getMaterialColor() 
 *       PURPOSE: get the material color from the desired node
 */

std::string Materials::getMaterialColor()const{
    return this->matColor;
}

/*
 *      FUNCTION: getMaterialPrice() 
 *       PURPOSE: get the material price at the current node
 */

float Materials::getMaterialPrice()const{
    return this->matPrice;
}

/*
 *      FUNCTION: getMaterialType() 
 *       PURPOSE: get the material type at the current node
 */

float Materials::getMaterialAmount()const{
    return this->matAmount;
}

/*
 *      FUNCTION: operator==() 
 *       PURPOSE: 
 */
bool Materials::operator==(const Materials& right_comparison)
{
    return this->matPrice == right_comparison.matPrice;
}

/*
 *      FUNCTION: operator<() 
 *       PURPOSE: 
 */
bool Materials::operator<(const Materials& right_comparison)
{
    return this->matPrice < right_comparison.matPrice;
}

/*
 *      FUNCTION: operator>()
 *       PURPOSE: 
 */
bool Materials::operator>(const Materials& right_comparison)
{
    return this->matPrice > right_comparison.matPrice;
}

/*
 *      FUNCTION: Materials() 
 *       PURPOSE: constructor for Materials class
 */

Materials::Materials()
{
    
}

/*
 *      FUNCTION: ~Materials() 
 *       PURPOSE: deconstructor for Materials class
 */

Materials::~Materials(){
 
}