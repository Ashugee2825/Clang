#include<iostream> 
using namespace std; 
class Add 

{ 
public:
 int addition(int x, int y)
 
  {
   return x + y;
    } 
    };
    class Sub 
    {
        public:
        int subtration(int x,int y)
        { 
       return x - y;
       
      }
        
    };
     int main() 
     { 
     int x, y, a,s;
  cout << "Enter two numbers:"; 
  cin >> x >> y;
       Add obj;
       Sub obj;
        a = obj.addition(x, y); 
        s = obj.subtration(x,y);
        cout << "Sum of two numbers:" << a; 
        cout <<"Subtration of two number:"<<s;
        return 0; 
        }