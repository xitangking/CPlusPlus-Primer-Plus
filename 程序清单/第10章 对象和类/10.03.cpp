//usestock0.cpp--the client program
//complite with stock00.cpp
#include<iostream>
#include"10.1.h"

int int main(int argc, char const *argv[])
{
  Stock fluffy_the_cat;
  fluffy_the_cat.acquire("NanoSmart",20,12.50);
  fluffy_the_cat.show();
  fluffy_the_cat.buy(15,18.125);
  fluffy_the_cat.show();
  fluffy_the_cat.sell(400,20.00);
  fluffy_the_cat.show();
  fluffy_the_cat.buy(300000,40.125);
  fluffy_the_cat.show();
  fluffy_the_cat.sell(300000,0.125);
  fluffy_the_cat.show();

  system("pause");
  return 0;
}
