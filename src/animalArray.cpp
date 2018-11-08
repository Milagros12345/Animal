#include "animalArray.h"
#include<Animal.h>

animalArray::animalArray()
{   this->size=0;
    this->arr=new Animal[0];
    //ctor
}
animalArray::animalArray( const Animal pts[], const int nt){
 {
    size = nt ;
    arr = new Animal[ nt ];
    for(int i = 0; i <nt ; ++i) {
    arr[i] = pts[i];}
}
animalArray::animalArray()(const Animal &p){
    size=p.size;
    arr=new Animal[size];
    for(int i=0;i<size;i++){
        arr[i]=p.arr[i];
    }
    }
animalArray::~animalArray()
{
    delete [] arr;
    //dtor
}
animalArray::resize(int newSize){
    Animal *pts=new Animal[newSize];
    int mi=(newSize>size?size:newSize);
    for(int i=0;i<mi;i++)
        pts[i]=arr[i];
    delete[] arr;
    size=newSize;
    arr=pts;
}
animalArray::insertf(const int pos,const Animal &p){
    resize(size+1);
    for(int i=size-1;i>pos,i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=p;
}
animalArray::eliminar(const int pos){
    if(pos>=0 && pos<size)
        {
            arr[i]=arr[i+1];
        }
        resize(size-1);
}


