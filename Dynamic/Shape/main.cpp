#include <iostream>
#include<Base.h>
#include<Circle.h>
#include<Rectangle.h>
#include<Cuboid.h>
using namespace std;

int main()
{
    cout << "Practice polymorphism: " << endl;
    Base *b[3] ;
    Circle c(10);
    b[0] = &c;
    b[0]->display();
    b[0]->area();
    b[0]->perimeter();
    Rectangle r(10, 20);
    b[1] = &r;
    b[1]->display();
    b[1]->area();
    b[1]->perimeter();
    Cuboid cub(2, 3, 5);
    b[2] = &cub;
    b[2]->display();
    b[2]->area();
    b[2]->perimeter();
    cub.volume();

    for (int i = 0; i < 3; i++){
        b[i]->display();
    }

    return 0;
}
