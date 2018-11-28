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
double getX()
{
  return x;
}
double getY()
{
  return y;
}
};
class three_d{
private:
  double z;
public:
  three_d()                  {    z=0;   }

  three_d(double a)          {   z=a;    }
};
int main()
{
  three_d obj1;
  return 0;
}
