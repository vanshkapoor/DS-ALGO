#include<iostream>

using namespace std;


class dynamic
{
    int *data;
    int nextIndex;
    int capacity;

    dynamic()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    dynamic(dynamic const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        
        // Deep copy
        this->data = new int[d.capacity];
        for(int i=0;i<d.nextIndex;i++)
        {
            this->data[i] = d.data[i];
        }
    }

    void add(int element)
    {
        if(nextIndex == capacity)
        {
            int *newdata = new int[2*capacity];   
            for(int i=0;i<capacity;i++)
            {
                newdata[i] = data[i];
            }
            delete [] data;
            data = newdata;
            capacity *= 2;
        }

        data[nextIndex] = element;
        nextIndex++;
    }

    int get(int i)
    {
        if(i<nextIndex)
        {
            return data[i];
        }else{
            return -1;
        }
    }

    void print()
    {
        for(int i=0;i<nextIndex;i++)
        {
            cout<<data[i]<<" ";
        }
    }
};