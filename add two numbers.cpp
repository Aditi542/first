#include<iostream> //header file
using namespace std;

int main()
{
    int a; // Variable declaration
    int b;
    int sum;
    cout<<"Enter one number : ";         // message asking for input
    cin>>a;                              // taking input
    cout<<endl<<"Enter two number : ";   // message asking for second input
    cin>>b;                              // taking input
    sum=a+b;                             // adding two variable and storing it into third variable sum
    cout<<endl<<"Sum is "<<sum;          //printing the output to the screen
    cout<<endl;

    return 0;
}
