#include<iostream>
using namespace std;


int add(int a , int b){
int c= a+b;
 return c;
}

int main()
{
int sum= add(12,14);  // returned c storing into sum
cout<< sum;
return 0;
}