//Miles Per Gallon
#include<iostream>
using namespace std;
int main(){

    float gallons=16;
    float miles=312;
    float mpg=miles/gallons;

    cout << "With 16 gallons and 312 miles, the mpg is " << mpg << "\n";
    cout << "Input the gallons: ";
    cin >> gallons;

    cout << "Input the miles: ";
    cin >> miles;
    mpg=miles/gallons;
    cout << "The mpg is " << mpg;

    gallons=16;
    miles=312;
}
