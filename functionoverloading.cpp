//Function area() is overloaded three times
#include <iostream>
using namespace std;

//Declaration of Function Prototypes
int area (int);
int area (int,int);
int area (int);

int main()
{
    cout<<"Calling the area() function for computing the area of a square(side = 5)- "<<area(5)<<"\n";
    cout<<"Calling the area() function for computing the area of a rectangle(length = 5, breadth = 10)- "<<area(5,10)<<"\n";
    cout<<"Calling the area() function for computing the area of a circle (radius = 6) - "<<area(6);

return 0;   
}

int area (int side)
{
    return(side*side);
}
    int area (int length, int breadth)
{
    return(length*breadth);
}
    float area (float radius)
{
    return(3.14*radius*radius);
}