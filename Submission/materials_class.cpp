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

void Materials::setMaterialPrice(double materialPrice){
    this->matPrice = materialPrice; 
}

/*
 *      FUNCTION: setMaterialAmount() 
 *       PURPOSE: set the material amount at the current node
 */

void Materials::setMaterialAmount(double materialAmount){
    this->matAmount = materialAmount;
}

/*
 *      FUNCTION: getMaterialType() 
 *       PURPOSE: get the material type from the desired node
 */

std::string Materials::getMaterialType(){
    return this->matType;
}

/*
 *      FUNCTION: getMaterialColor() 
 *       PURPOSE: get the material color from the desired node
 */

std::string Materials::getMaterialColor(){
    return this->matColor;
}

/*
 *      FUNCTION: getMaterialPrice() 
 *       PURPOSE: get the material price at the current node
 */

double Materials::getMaterialPrice(){
    return this->matPrice;
}

/*
 *      FUNCTION: getMaterialType() 
 *       PURPOSE: get the material type at the current node
 */

double Materials::getMaterialAmount(){
    return this->matAmount;
}

/*
 *      FUNCTION: operator== 
 *       PURPOSE: compare if a material price is equal to the current material price
 */
bool Materials::operator==(const Materials& right_comparison){
    return this->matPrice == right_comparison.matPrice;
}

/*
 *      FUNCTION: operator< 
 *       PURPOSE: compare if a material price is greater than the current material price
 */
bool Materials::operator<(const Materials& right_comparision){
    return this->matPrice < right_comparision.matPrice;
}

/*
 *      FUNCTION: operator> 
 *       PURPOSE: compare if a material price is less than the current material price
 */
bool Materials::operator>(const Materials& right_comparison){
    return this->matPrice > right_comparison.matPrice;
}

/*
 *      FUNCTION: Materials() 
 *       PURPOSE: constructor for Materials class
 */

Materials::Materials(){
    std::cin.ignore();
    //get the material type
    std::cout << "Please enter in material name:\t";
    getline(std::cin, this->matType);
    setMaterialType(this->matType);
    //get the material color  
    std::cout << "Please enter in material color:\t";
    getline(std::cin, this->matColor);
    setMaterialColor(this->matColor);
    //get the material price
    std::cout << "Please enter in material price (nearest cent):\t";
    std::cin >> this->matPrice;
    setMaterialPrice(this->matPrice);
    //get the material amount
    std::cout << "Please enter in material abundance (nearest hundreth):\t";
    std::cin >> this->matAmount;
    setMaterialAmount(this->matAmount);
}

/*
 *      FUNCTION: ~Materials() 
 *       PURPOSE: deconstructor for Materials class
 */

Materials::~Materials(){
 
}