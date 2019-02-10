#ifndef MY_H
#define MY_H
class your;

class My
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        My();
        void display();
        virtual ~My();
        friend your;



};

#endif // MY_H
