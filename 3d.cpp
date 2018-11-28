#include<iostream>

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
};
class three_d : public two_d{
private:
  double z;
public:
  three_d()                  {    z=0;   }

  three_d(double a)          {   z=a;    }

  double getZ()              {   return z;        }
};
int main()
{
  three_d obj1;
  cout<<obj1.getX();
  cout<<obj1.getY();
  cout<<obj1.getZ();
  return 0;
}
