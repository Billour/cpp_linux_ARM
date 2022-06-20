#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
/*
version : 2022061301
Refere : 
*/
#define PI 3.14593f

class Cuboid{
public:
    int length;
    int width;
    int  height;
    int area(){
        return 2*(length * width + width *height + height * length);
    }
    int volumn(){
        return length *width * height;
    }

};

class Cylinder{
    public:
        float radius;
        float height;
        float area(){
            return 2 * PI * radius * height;
        }
        float volumn(){
            return PI * float(pow(radius,2)) * height;
        }

};


int main(int argc, char ** argv)
{
    Cuboid rt = {6,8,10};
    cout<< "Length:"<< rt.length  << endl;
cout<< "Width:"<< rt.width  << endl;
cout<< "Height:"<< rt.height  << endl;
cout<< "Area:"<< rt.area()  << endl;
cout<< "Volumn:"<< rt.volumn()  << endl;
cout<<"------------" <<endl;

Cylinder c1 = {5.0, 10.0};
cout<< "Rdius:"<< c1.radius  << endl;
cout<< "Height:"<< c1.height  << endl;
cout<< "Area:"<< c1.area()  << endl;
cout<< "Volumn:"<< c1.volumn()  << endl;

    system("pause");
    return 0;
}