#include<iostream>
#include <vector>
using namespace std;

class Calculate
{
    int x;
    public:
        Calculate(int n);
        Calculate *calcSum(Calculate obj);
        void showSum(Calculate a , Calculate b);

};

    Calculate::Calculate(int n)
    {
        x = n;
    };

    Calculate *Calculate::calcSum(Calculate obj)
    {
        x+= obj.x;
        return this;
    };

    void Calculate::showSum(Calculate a, Calculate b)
    {
        cout<<"a = "<< a.x <<endl;
        cout<<"b = " << b.x <<endl;
        cout<<"a+b = " << this->x <<endl;
    };
  
int main(int argc, char ** argv)
{
    Calculate a(100), b(200), c(0);
    c = * (a.calcSum(b));
    c.showSum(a,b);
    system("pause");
    return 0;
}