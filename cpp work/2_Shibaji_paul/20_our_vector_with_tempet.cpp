//date: 2021-03-14
// #include <bits/stdc++.h>
#include <iostream>
#include <sstream>

using namespace std;
template<typename T>
class SimpleVector
{
private:
    //the base address of array
    T *item;

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
        this->item = new T[this->size];
    }
    //default constructor;
    SimpleVector() : SimpleVector(10)//we take 10 size in default constructor;
    {
    }
    void pushBack(T v);
   
    int getSize() const;
    int getNumberElemnts() const;
   
    T &operator[](int);

    template<typename U>
    friend ostream &operator<<(ostream &, const SimpleVector<U> &);
    //destructor
    ~SimpleVector()
    {
        cout << "Destructor called...." << endl;
    }
    SimpleVector<T> &operator=(const SimpleVector<T> &rho);
   //copy constructor
    SimpleVector(const SimpleVector<T>& rho);
};
template<typename T>
SimpleVector<T>:: SimpleVector(const SimpleVector<T>& rho){
      this->item=new T[rho.size];
        this->size=rho.size;
        this->numElements=rho.numElements;
        for (int i = 0; i < this->size; i++)
        {
            this->item[i]=rho.item[i];
        }
}
template<typename T>
SimpleVector<T> &SimpleVector<T>::operator=(const SimpleVector<T> &rho)
{
    if (this != &rho)
    {
        delete[] this->item;
        this->item=new T[rho.size];
        this->size=rho.size;
        this->numElements=rho.numElements;
        for (int i = 0; i < this->size; i++)
        {
            this->item[i]=rho.item[i];
        }
        
    }
}

template<typename U>
ostream &operator<<(ostream &out, const SimpleVector<U> &sv)
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
template<typename T>
T &SimpleVector<T>::operator[](int index)
{
    if (index >= 0 && index < numElements)
        return item[index];
}
template<typename T>
int SimpleVector<T>::getSize() const
{
    return this->size;
}

template<typename T>
int SimpleVector<T>::getNumberElemnts() const
{
    return this->numElements;
}

template<typename T>
void SimpleVector<T>::pushBack(T v)
{
    if (numElements == size)
    {
        //double the size of array
        //keeping the existing elements intact

        int newSize = size * 2;
        T *temp = new T[newSize];
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


int main()
{

SimpleVector<int> sv1(3);
sv1.pushBack(10);
sv1.pushBack(1);
sv1.pushBack(2);
cout<<sv1<<endl;
SimpleVector<string> sv2(3);
sv2.pushBack("aaa");
sv2.pushBack("bbb");
sv2.pushBack("ccc");
sv2.pushBack("ddd");
cout<<sv2<<endl;
   
    return 0;
}