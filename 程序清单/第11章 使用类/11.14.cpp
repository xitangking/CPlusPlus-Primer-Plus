//vect.cpp--methods for the Vector class
#include"11.13.h"
#include<cmath>  //includes (iostream)

using namespace std;

namespace VECTOR
{
  const double Red_to_deg=45;
//private methods
  void Vector::set_mag()
  {
    mag=sqrt(x*x+y*y);
  }

  void Vector::set_ang()
  {
    if(x==0&&y==0)
      ang=0;
    else
      ang=atan2(y,x);
  }

  void Vector::set_x()
  {
    x=mag*cos(ang);
  }

  void Vector::set_y()
  {
    y=mag*sin(ang);
  }
//public methods
  Vector::Vector()
  {
    x=y=mag=ang=0;
    mode=RECT;
  }

  Vector::Vector(double n1,double n2,Mode form)
  {
    mode=form;
    if(from==RECT)
    {
      x=n1;
      y=n2;
      set_mag();
      set_ang();
    }
    else if(form==ROL)
    {
      mag=n1;
      ang=n2/Red_to_deg;
      set_x();
      set_y();
    }
    else
    {
      cout<<"Incorrect 3rd argument to Vector()--";
      cout<<"vector set to 0\n";
      x=y=mag=ang=0;
      mode=RECT;
    }
  }

  void Vector::reset(double n1,double n2,Mode form)
  {
   mode=form;
    if(from==RECT)
    {
      x=n1;
      y=n2;
      set_mag();
      set_ang();
    }
    else if(form==ROL)
    {
      mag=n1;
      ang=n2/Red_to_deg;
      set_x();
      set_y();
    }
    else
    {
      cout<<"Incorrect 3rd argument to Vector()--";
      cout<<"vector set to 0\n";
      x=y=mag=ang=0;
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

  void Vector:polar_mode()
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

  Vector Vector::operator-()
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
        os<<"(m,a) = ("<<v.mag<<","<<v.ang*Red_to_deg<<")";
      }
    else
    {
      os<<"Vector object mode is invalid";
    }
    return os;
  }

}
