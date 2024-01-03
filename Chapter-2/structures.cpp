#include <iostream>

struct Vector
{
    int size;
    double* elem;
};

void vector_init(Vector& v, int size)
{
    v.elem = new double(size);
    v.size = size;
}

int main()
{
    return 0;
}