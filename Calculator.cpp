// Calculator.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{ 
double a,b; 
int n; 
cout � "Menu: "; 
cout � "Enter 2 numbers: "; 
cin � a � b; 
cout � "1. Summa"; 
cout � "2. Vichitan"; 
cout � "3. Delenie"; 
cout � "4. Umnozhenie"; //
cout << "5. Pow";
cout << "6. Exit";
cout � "Enter action:"; 
cin � n; 
switch (n) 
{ 
case '1': 
cout � MySum(a,b) � endl; 		
case '2': 
cout � MySub(a,b) � endl; 
case '3': 
cout � Del(a,b) � endl; //Function deleniya
case '4': 
cout � Umn(a,b) � endl; //Function umnozheniya
return 0; 	
case '5': 
cout << Pow(a) << endl;
return 0; 
}