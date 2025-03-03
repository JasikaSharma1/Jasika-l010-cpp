/* Program to demonstrate Array Declaration and Array Initialization 
using Direct Method*/
// #include<iostream>
// using namespace std;
// class ArrayProgram{
// private: void Display(){
//     a[0]= 10;       //Initialization of Array Element at Index 0 using Direct Method
//     a[1]= 5;        //Initialization of Array Element at Index 1 using Direct Method
//     cout<<"\n Array Element at Index 0 is "<<a[0];
//     cout<<"\n Array Element at Index 1 is "<<a[1];
//     cout<<"\n Array Element at Index 2 is "<<a[2];
// }

// };
// int main()
// {
//     ArrayProgram obj;
//     obj.Display();
// }




/* Write a program to store 10 rollno of week Learners of your class and 10 rollno of Advance Learners of your class, According to you.
   Store rollno's in two different array and display the records.
*/
#include<iostream>
using namespace std;
class details{
    private : int weeklearner[10]={1,3,7,8,9,61,66,72,77,92};
    private : int advancelearner[10]={78,65,62,96,10,93,112,99,88,101};
    public : void display()
    {
        cout<<"\n Enter array value at index 6:"<< weeklearner[6];
        cout<<"\n Enter array value at index 9:"<< weeklearner[9];
        cout<<"\n Enter array value at index 5:"<< advancelearner[5];
        cout<<"\n Enetr array value at index 9:"<< advancelearner[9];
    }
};
int main()
{
    details obj;
    obj.display();
}