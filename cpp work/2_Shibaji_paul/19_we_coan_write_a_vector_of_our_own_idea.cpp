//date: 2021-03-13
// #include <bits/stdc++.h>
#include <iostream>
#include <sstream>

using namespace std;

class SimpleVector
{
private:
    //the base address of array
    int *item;

    //size of array
    int size;
    //number of elements in the array
    int numElements;

public:
    //overloaded Constructor
    SimpleVector(int size)
    {
        this->size = size;
        this->numElements = 0;
        this->item = new int[this->size];
    }
    //default constructor;
    SimpleVector() : SimpleVector(10)
    {
    }
    void pushBack(int v);
    int getSize() const;
    int getNumberElemnts() const;
    int &operator[](int);
    friend ostream &operator<<(ostream &, const SimpleVector &);
    //destructor
    ~SimpleVector()
    {
        cout << "Destructor called...." << endl;
    }
    SimpleVector &operator=(const SimpleVector &rho);
   //copy constructor
    SimpleVector(const SimpleVector& rho);
};
//copy constructor
SimpleVector:: SimpleVector(const SimpleVector& rho){
      this->item=new int[rho.size];
        this->size=rho.size;
        this->numElements=rho.numElements;
        for (int i = 0; i < this->size; i++)
        {
            this->item[i]=rho.item[i];
        }
}

SimpleVector &SimpleVector::operator=(const SimpleVector &rho)
{
    if (this != &rho)
    {
        delete[] this->item;
        this->item=new int[rho.size];
        this->size=rho.size;
        this->numElements=rho.numElements;
        for (int i = 0; i < this->size; i++)
        {
            this->item[i]=rho.item[i];
        }
        
    }
}

ostream &operator<<(ostream &out, const SimpleVector &sv)
{
    out << "[";
    for (int i = 0; i < sv.numElements; i++)
    {
        if (i == sv.numElements - 1)
            out << sv.item[i];
        else
            out << sv.item[i] << ",";
    }

    out << "]";
    return out;
}

int &SimpleVector::operator[](int index)
{
    if (index >= 0 && index < numElements)
        return item[index];
}

int SimpleVector::getSize() const
{
    return this->size;
}
int SimpleVector::getNumberElemnts() const
{
    return this->numElements;
}

void SimpleVector::pushBack(int v)
{
    if (numElements == size)
    {
        //double the size of array
        //keeping the existing elements intact

        int newSize = size * 2;
        int *temp = new int[newSize];
        for (int i = 0; i < numElements; i++)
        {
            temp[i] = item[i];
        }
        delete[] item;        //delete previous pointer
        item = temp;          //update the item;
        this->size = newSize; //update the size;
        // cout << "Array size doubled ..." << this->size << endl;
    }
    item[numElements++] = v; //1st upgrade than increment;
    // cout << "Added: " << v << endl;
    // cout << "Total elements in the vector : " << numElements << endl;
}

void process()
{
    SimpleVector sv(5);
}
int main()
{

    // SimpleVector sv1(2);
    // sv1.pushBack(3);
    // sv1.pushBack(5);
    // sv1.pushBack(7);

    // for (int i = 0; i < sv1.getNumberElemnts(); i++)
    // {
    //     cout << sv1[i] << " ";
    // }

    // sv1[1] = 1000;
    // cout << endl;
    // for (int i = 0; i < sv1.getNumberElemnts(); i++)
    // {
    //     cout << sv1[i] << " ";
    // }

    // cout << sv1 << endl;

    //for destructor
    // for (int i = 0; i < 10; i++)
    // {
    //     process();
    // }
    //assignment operator;

    SimpleVector sv1(3);
    sv1.pushBack(10);
    sv1.pushBack(20);

    SimpleVector sv2;
    sv2 = sv1; //sv2.operator = (sv1);
    SimpleVector sv3(sv2);
    cout<<sv1<<endl<<sv2<<endl<<sv3;
    return 0;
}