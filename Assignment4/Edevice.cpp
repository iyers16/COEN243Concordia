#include "device.h"


void Edevice::setCategory(string category) {
    this->category = category;
}

void Edevice::setModelNumber(int modelNumber) {
    this->modelNumber = modelNumber;
}

void Edevice::setColor(string color) {
    this->color = color;
}

void Edevice::setStatus(bool status) {
    this->status = status;
}

void Edevice::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

void Edevice::setPrice(double price) {
    this->price = price;
}

const string& Edevice::getCategory() {
    return this->category;
}

const int& Edevice::getModelNumber() {
    return this->modelNumber;
}

const string& Edevice::getColor() {
    return this->color;
}

const bool& Edevice::getStatus() {
    return this->status;
}

const int& Edevice::getYearBuilt() {
    return this->yearBuilt;
}

const double& Edevice::getPrice() {
    return this->price;
}