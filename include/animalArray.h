#ifndef ANIMALARRAY_H
#define ANIMALARRAY_H
#include<Animal.h>


class animalArray
{
    public:
        animalArray();
        animalArray(const Animal pts[],const int size);
        animalArray( animalArray &p);
        insertf(const int pos,const Animal &p);
        eliminar(const int pos);
        ~animalArray();
        void insert( const int pos , const Animal &p);
        void remove ( const int pos );
    private:
        int size;
        Animal *arr;
        void resize(int newSize);
};

#endif // ANIMALARRAY_H
