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
private:
    int length;
    int width;
    int  height;
public:
    void setCuboid(int l, int w, int h){
        length = l;
        width = w;
        height = h;
    }
    int getLength(){
        return length;
    }
    int  getWidth(){
        return width;
    }
    int getheight(){
        return height;
    }

    int area(){
        return 2*(length * width + width *height + height * length);
    }
    int volumn(){
        return length *width * height;
    }

};

class Cylinder{
    
        float radius;
        float height;
    public:
        void setCylinder(float r, float h){
            radius = r;
            height = h;
        }
        float getRadius(){
            return radius;
        }
        float  getHeight(){
            return height;

        }
        

        float area(){
            return 2 * PI * radius * height;
        }
        float volumn(){
            return PI * float(pow(radius,2)) * height;
        }

};


int main(int argc, char ** argv)
{
    Cuboid rt ;
    rt.setCuboid(6,8,10);
    cout<< "Length:"<< rt.getLength()  << endl;
cout<< "Width:"<< rt.getWidth()  << endl;
cout<< "Height:"<< rt.getheight()  << endl;
cout<< "Area:"<< rt.area()  << endl;
cout<< "Volumn:"<< rt.volumn()  << endl;
cout<<"------------" <<endl;

Cylinder c1 ;
c1.setCylinder(5.0, 10.0);
cout<< "Rdius:"<< c1.getRadius()  << endl;
cout<< "Height:"<< c1.getHeight()  << endl;
cout<< "Area:"<< c1.area()  << endl;
cout<< "Volumn:"<< c1.volumn()  << endl;

    system("pause");
    return 0;
}