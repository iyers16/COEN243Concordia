#ifndef DEVICE_H
#define DEVICE_H

#include <iostream>
#include <string>
using namespace std;



class Edevice {

    private:
    string category;
    int modelNumber;
    string color;
    bool status;
    int yearBuilt;
    double price;

    public:
    void setCategory(string category);
    void setModelNumber(int modelNumber);
    void setColor(string color);
    void setStatus(bool status);
    void setYearBuilt(int yearBuilt);
    void setPrice(double price);

    const string& getCategory();
    const int& getModelNumber();
    const string& getColor();
    const bool& getStatus();
    const int& getYearBuilt();
    const double& getPrice();
    

};

#endif