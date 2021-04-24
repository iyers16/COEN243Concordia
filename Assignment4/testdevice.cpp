#include <iostream>
#include <string>
#include "device.h"

using namespace std;

int main() {

    Edevice firstDevice, secondDevice;

    string category, color, status;
    int modelNumber, yearBuilt;
    double price;

    cout << "Enter Category of First Device (Smartphone/Laptop/Tablet/Smartwatch): ";
    cin >> category;
    cout << "Enter model number of First Device: ";
    cin >> modelNumber;
    cout << "Enter color of First Device: ";
    cin >> color;
    cout << "Enter status of First Device (new/used): ";
    cin >> status;
    cout << "Enter the year the First Device was built: ";
    cin >> yearBuilt;
    cout << "Enter the price of First Device: ";
    cin >> price;
    cout << endl;

    firstDevice.setCategory(category);
    firstDevice.setModelNumber(modelNumber);
    firstDevice.setColor(color);
    (status == "new") ? firstDevice.setStatus(true) : firstDevice.setStatus(false);
    firstDevice.setYearBuilt(yearBuilt);
    firstDevice.setPrice(price);



    cout << "Enter Category of Second Device (Smartphone/Laptop/Tablet/Smartwatch): ";
    cin >> category;
    cout << "Enter model number of Second Device: ";
    cin >> modelNumber;
    cout << "Enter color of Second Device: ";
    cin >> color;
    cout << "Enter status of Second Device (new/used): ";
    cin >> status;
    cout << "Enter the year the Second Device was built: ";
    cin >> yearBuilt;
    cout << "Enter the price of Second Device: ";
    cin >> price;
    cout << endl;
    


    secondDevice.setCategory(category);
    secondDevice.setModelNumber(modelNumber);
    secondDevice.setColor(color);
    (status == "new") ? secondDevice.setStatus(true) : secondDevice.setStatus(false);
    secondDevice.setYearBuilt(yearBuilt);
    secondDevice.setPrice(price);

    cout << "First Device Category: " << firstDevice.getCategory() << endl;
    cout << "First Device Model Number: " << firstDevice.getModelNumber() << endl;
    cout << "First Device Color: " << firstDevice.getColor() << endl;
    
    if(firstDevice.getStatus() == true) {
        cout << "First Device Status: New" << endl;
    } else {
        cout << "First Device Status: Used" << endl;
    }
    
    cout << "First Device Year Built: " << firstDevice.getYearBuilt() << endl;
    cout << "First Device Price: " << firstDevice.getPrice() << endl;
    cout << endl;

    cout << "Second Device Category: " << secondDevice.getCategory() << endl;
    cout << "Second Device Model Number: " << secondDevice.getModelNumber() << endl;
    cout << "Second Device Color: " << secondDevice.getColor() << endl;

    if(secondDevice.getStatus() == true) {
        cout << "Second Device Status: New" << endl;
    } else {
        cout << "Second Device Status: Used" << endl;
    }

    cout << "Second Device Year Built: " << secondDevice.getYearBuilt() << endl;
    cout << "Second Device Price: " << secondDevice.getPrice() << endl;


    return 0;
}