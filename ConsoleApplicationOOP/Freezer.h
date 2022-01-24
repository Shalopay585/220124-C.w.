#pragma once
#include "GoodBasic.h"
class Freezer : public GoodBasic
{
private:

    int _cameras;
    int _weight;
    string _newValue;
public:
    Freezer();
    Freezer(int id);
    Freezer(int id, int price);
    Freezer(int id, int price, string name);
    Freezer(int id, int price, string name, string description);
    Freezer(int id, int price, string name, string description, int cam);
    Freezer(int id, int price, string name, string description, int cam, int weight);
    Freezer(int id, int price, string name, string description, int cam, int weight, string newValue);

    void fillProperties(int cam = 1, int weight = 10, string newValue = "default");

    int getCameras();

    int getWeight();

    void setCameras(int cam);

    void setWeight(int weight);

    void printHello();

    void printString(string dataToPrint);

    void toString();
};

