#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std;
class Animal{
private:
    string nombre;
    int nropatas;
public:
    Animal(string n,int p):nombre(n),nropatas(p){cout<<nombre<<" "<<nropatas<<endl;}
    void habla(void);
    void hacehablar()
    {
        this->habla();
    }
};
class gato: public Animal{
public:
    void song(){cout<<"miauu";}
    gato(string a,int b):Animal(a,b){}
    void hablo(){
        this->hacehablar();
    }
};
class perro:public Animal{
public:
    perro(string x,int y):Animal(x,y){}
    void habla(){
    cout<<"wuauuuu"<<endl;}
};
class loro:public Animal{
public:
    loro(string a,int b):Animal(a,b){}
    void habla(){
    cout<<"laaaa"<<endl;}
    };

#endif // ANIMAL_H
