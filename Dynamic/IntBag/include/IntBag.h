#ifndef INTBAG_H
#define INTBAG_H


class IntBag
{
    public:
        IntBag();
        IntBag(int capacity);
        bool add(int value);
        void print();
        virtual ~IntBag();


    protected:

    private:
        int *data; // Pointer to dynamically allocated array
        int capacity; // the size of this array
        int cnt; // number of value currently in the bag
        bool walkInProgress;
        int walkPosition;
};

#endif // INTBAG_H
