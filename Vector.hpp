#pragma once
#include <iostream>
#include <fstream>

class Vector{
private:
    bool *array;
    int len;
    friend std::ofstream& operator<<(std::ofstream&, const Vector&);
    friend std::ifstream& operator>>(std::ifstream&, Vector&);
public:
    Vector();//default constructor
    Vector(const bool*, int);
    Vector(const Vector&);
    Vector(Vector&&);
    ~Vector();

    bool operator[](int);
    
    Vector& operator=(const Vector&);//prisvaivanie s kopirovaniem
    Vector& operator=(Vector&&);//

    Vector operator^(const Vector&);

    void print();
};

std::ofstream& operator<<(std::ofstream&, const Vector&); //output vector to file
std::ifstream& operator>>(std::ifstream&, Vector&); //input vector from file