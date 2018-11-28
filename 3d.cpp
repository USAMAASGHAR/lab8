#include<iostream>
#include<cmath>

using namespace std;

class two_d
{
protected:
double x, y;
public:
  two_d()
  {x=0;y=0;}
two_d(double i, double j):x(i), y(j){}
void setX(double newx)
{x = newx;}
void setY(double newy)
{
  y = newy;
}
double getX() const
{
  return x;
}
double getY()  const
{
  return y;
}
double get_Distance(const two_d &p2)
{
  double a;
   a=pow((pow(x-p2.x,2)+pow(y-p2.y,2)),0.5);
return a;
}
};
class three_d : public two_d{
private:
  double z;
public:
  three_d()                  {    z=0;   }

  three_d(double a)          {   z=a;    }

  void setZ(double newZ)     {   z=newZ;        }

  double getZ()              {   return z;        }
  double get_Distance(const three_d &p2)
  {
    double a;
     a=pow((pow(x-p2.x,2)+pow(y-p2.y,2))+pow(z-p2.z,2),0.5);
  return a;
  }
};

int main()
{
  three_d p1(23),p2(2);
  three_d obj1;
  p1.get_Distance(p2);
  cout<<p1.get_Distance(p2);

//  obj1.setX(34);
//  cout<<obj1.getX();
//  cout<<obj1.getY();
///  cout<<obj1.getZ();
  return 0;
}
