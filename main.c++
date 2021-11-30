
/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Hamza Iqbal
 */


#include<iostream>
#include<cstring>

using namespace std;

int main()

{

string spell[10]={"Zero","one","two","three","four","five","six","seven","eight","nine"};

int digit;

cout<<"Enter a one digit number ONLY: ";

cin>>digit;

if(digit>=0 && digit<=9) //check entered digit is one digit or not

{

cout<<digit<<" has "<<spell[digit].length()<<" characters."; //output length

}

else

cout<<"Wrong Input!"

