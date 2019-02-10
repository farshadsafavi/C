#ifndef TEST_H
#define TEST_H


class Test
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        Test();
        friend void fun();
        void display();
        virtual ~Test();

};

#endif // TEST_H
