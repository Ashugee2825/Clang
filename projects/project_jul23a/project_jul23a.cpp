/* program to perform arithmetic operations*/
#include<iostream>

#include<conio.h>
class Arith
{
    private:
        int x,y;
    public:
        int add();
        int sub();
        
};
int Arith::add()
{
    cout<<"Enter the x value"<<endl;
    cin>>x;
    cout<<"Enter the y value"<<endl;
    cin>>y;
    return(x+y);
}
int Arith::sub()
{
    cout<<"Enter the x value"<<endl;
    cin>>x;
    cout<<"Enter the y value"<<endl;
    cin>>y;
    return(x-y);
}


 int main()
{
    Arith obj;
    char ch;
    clrscr();
    while(1)
    {
    cout<<"a:Addition"<<endl;
    cout <<"s:Subtration"<<endl;
    cout<<"e:exit"<<endl;
    cout<<"Enter your Choice"<<end;
    cin>>ch;
    switch(ch)
    {
        case 'a':
                int a=obj.add();
                cout<<"Addtion Result="<<a<<endl;
                break;
        case 's':
                int s=obj.sub();
                cout<<"Subtract Result="<<s<<endl;
                break;
                Result="<<d<<endl;
                break;
        case 'e':
                exit(0);
    
    
return 0;
} 