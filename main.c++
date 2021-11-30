#include<iostream>

#include<cstring>

using namespace std;

int main()

{

string spell[10]={"Zero","one","two","three","four","five","six","seven","eight","nine"};

int digit;

cout<<"Enter a onr digit number: ";

cin>>digit;

if(digit>=0 && digit<=9) //check entered digit is one digit or not

{

cout<<digit<<" has "<<spell[digit].length()<<" characters."; //output length

}

else

cout<<"Wrong Input!"

