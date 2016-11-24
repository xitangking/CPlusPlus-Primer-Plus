//vect.cpp--methods for the Vector class
#include"Vector2.h"
#include<cmath>  //includes (iostream)

using namespace std;

namespace VECTOR
{
  const double Red_to_deg=45;
//private methods



//public methods
  Vector::Vector()
  {
    x=y=0;
    mode=RECT;
  }

  Vector::Vector(double n1,double n2,Mode form)
  {
    mode=form;
    if(form==RECT)
    {
      x=n1;
      y=n2;
     
    }
    else if(form==POL)
    {
		x = n1*cos(n2);
		y = n1*sin(n2);
    }
    else
    {
      cout<<"Incorrect 3rd argument to Vector()--";
      cout<<"vector set to 0\n";
      x=y=0;
      mode=RECT;
    }
  }

 void Vector::reset(double n1,double n2,Mode form)
  {
   mode=form;
    if(form==RECT)
    {
      x=n1;
      y=n2;
    }
    else if(form==POL)
    {
		x = n1*cos(n2);
		y = n1*sin(n2);
    }
    else
    {
      cout<<"Incorrect 3rd argument to Vector()--";
      cout<<"vector set to 0\n";
      x=y=0;
      mode=RECT;
    }
  }

  Vector::~Vector()
  {
  }

  void Vector::rect_mode()
  {
    mode=RECT;
  }

  void Vector::polar_mode()
  {
    mode=POL;
  }

//operator overloading
  Vector Vector::operator+(const Vector & b) const
  {
    return Vector(x+b.x,y+b.y);
  }

  Vector Vector::operator-(const Vector & b) const
  {
    return Vector(x-b.x,y-b.y);
  }

  Vector Vector::operator-() const
  {
    return Vector(-x,-y);
  }

  Vector Vector::operator*(double n) const
  {
    return Vector(n*x,n*y);
  }

//friend methods
  Vector operator*(double n,Vector & a)
  {
    return a*n;
  }

  std::ostream & operator<<(std::ostream & os,const Vector & v)
  {
    if(v.mode==Vector::RECT)
        os<<"(x,y) = ("<<v.x<<","<<v.y<<")";
    else if(v.mode==Vector::POL)
      {
        os<<"(m,a) = ("<<v.magval()<<","<<v.angval()*Red_to_deg<<")";
      }
    else
    {
      os<<"Vector object mode is invalid";
    }
    return os;
  }

}
