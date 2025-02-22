#include "Vector.hpp"

Vector::Vector(){
    array = nullptr;
    len = 0;
}
Vector::Vector(const bool* other, int length){//создаём вектор А
    len = length;
    //std::cout << len << std::endl;
    array = new bool[len];
    for (int i = 0; i < len; i++){
        array[i] = other[i];
    }
}

Vector::Vector(const Vector& other){//создаём вектор Б(А)
    len = other.len;
    array = new bool[len];
}

Vector::Vector(Vector&& other){//конструктор преемещения
    array = other.array;
    len = other.len;
    other.array = nullptr;
    other.len = 0;
}

Vector::~Vector(){
    delete [] array;
}

Vector& Vector::operator=(const Vector& other){
    if (this!=&other)
    {
        len = other.len;
        delete [] array;
        len = other.len;
        array = new bool[len];
        for(int i = 0; i < len; i++){
            array[i] = other.array[i];
        }
    }
    return *this;
}

Vector& Vector::operator=(Vector&& other){
    std::swap(array, other.array);
    std::swap(len, other.len);
}

bool Vector::operator[](int index){ //a[10]
    return array[index];
}

std::ofstream& operator<<(std::ofstream& ofs, const Vector& pudge){
    if (pudge.array != nullptr)
    {
        for (int i = 0; i < pudge.len; i++)
        {
            ofs << pudge.array[i];
        }
    }
    return ofs;
}

std::ifstream& operator>>(std::ifstream& ifs, Vector& pudge){
    delete [] pudge.array;
    pudge.array = new bool[pudge.len];
    ifs >> pudge.len;
    for(int i = 0; i < pudge.len; i++){
        ifs >> pudge.array[i];
    }
    return ifs;
}

Vector Vector::operator^(const Vector& v2){
    Vector v;
    v.len =v2.len;
    v.array = new bool[v.len];
    for (int i = 0; i < v2.len; i++){
        v.array[i] = (array[i])^(v2.array[i]);
    }
    return v;
}

void Vector::print() // Печать вектора (массива)
{
    std::cout<<"len="<<len<<std::endl;
    for (int i = 0; i < len; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main(){
    Vector a;
    std::ifstream in("input.txt");
    in >> a;
    in.close();
    a.print();
    
    Vector b;
    std::ifstream in2("input2.txt");
    in2 >> b;
    in2.close();
    b.print();

    Vector c = a^b;
    c.print();
    std::ofstream out("output.txt");
    out << c;
    std::cout << "Done" << std::endl;
    out.close();


    bool m1[8]{0, 1, 0, 1, 0, 1, 1, 0};
    
    Vector m2(m1, 8);
    m2.print();

    Vector m3 = std::move(m2);
    std::cout << (&m1) << std::endl;
    m3.print();
    std::cout << (&m3) << std::endl;
    std::cout << (&m1) << std::endl;


    std::cout << m3[3] << std::endl;
}