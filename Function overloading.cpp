/* Program to Demonstrate the concept of Function overloading*/
Create a class with name Shapes , create a function with name Area(), 
with Area function calculate Area of Circle , Area of Rectangle , Area of triangle, 
using function overloading.
#include<iostream>
using namespace std;
class Shapes{
    private : float res=0;float l1;float b;
    public : void Area(float radius){       //constructor1
        res = 3.14 * radius * radius;
        cout<<"\n Area of Circle is "<<res;
    }
    public : void Area(float 1, float h){      // constructor2
        cout<<"\n Area of Triangle is "<<res;
    }
    public : void Area() // constructor3
    {
        l1=6, b=9;
        res = l1 * b;
        cout<<"\n Area of Rectangle is "<<res;
    }

};
int main(){
Area obj1;
Area obj2(8);
Area obj3(8,9);
return 0;
}
