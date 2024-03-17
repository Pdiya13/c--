// Online C++ compiler to run C++ program online
// move the rectangle using L,R,U,D or alter the size of rectangle 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class point 
{
    int x,y;
    
public :
    void get_x(int temp)
    {
        x=temp;
    }
    
    int give_x()
    {
        return x;
    }
    
    void get_y(int temp)
    {
        y=temp;
    }
    
    int give_y()
    {
        return y;
    }
    
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
    


};

class rectangle
{
    int p[4];

public:
    
    void getpoint(int arr[])
     { 
       for(int i=0;i<4;i++)
        {
          p[i].get_x(arr[i]);
          p[i].get_y(arr[i]);
        }
     } 
     void move_left(int n)
     {   
         p[0].get_x(p[0].give_x()-=n);  
         p[2].get_x(p[2].give_x()-=n);
     }
     
     void move_right(int n)
     {
         p[1].get_x(p[1].give_x()+=n);   
         p[3].get_x(p[3].give_x()+=n);
     }
     
     void move_up(int n)
     {
         p[0].get_y(p[0].give_y()+=n);      
         p[1].get_y(p[1].give_y()+=n);
     }
     
     void move_down(int n)
     {
         p[2].get_y(p[2].give_y()-=n);
         p[3].get_y(p[3].give_y()-=n);
     }
     
    void inc_width(int n)
    {
        p[1].get_x(p[1].give_x+=n);  
        p[3].get_x(p[3].give_x+=n);
    }
    
    void dec_width(int n)
    {
        p[0].get_x(p[0].give_x-=n);    
        p[2].get_x(p[2].give_x-=n);
    }
    
    void inc_higth(int n)
    {
        p[0].get_y(p[0].give_y()+=n);      
        p[1].get_y(p[1].give_y()+=n);
    }
    
    void dec_higth(int n)
    {
        p[2].get_y(p[2].give_y()-=n);     
        p[3].get_y(p[3].give_y()-=n);   
    }
    
    void display()
    {
        for(int i=0;i<4;i++)
        {
            p[i].print();
        }
    }
};
int main()
{
    rectangle r;
    int p[4];
    
    for(int i=0;i<4;i++)
    {
        cin>>p[i];
    }
    
    r.getpoint(p);
    
    char action,dir;
    int n;
    
    cin>>action>>dir>>n;
    
    switch(action)
    {
        case 'L':
           r.move_left(n);
        break ;
        
        case 'R':
           r.move_right(n);
        break ;
        
        case 'U':
           r.move_up(n);
        break ;
        
        case 'D':
           r.move_down(n);
        break ;
        
        case 'A':
                if(dir == 'T')
                {
                    r.inc_higth(n);
                }
                else if(dir == 'L')
                {
                    r.inc_width(n);
                }
            
                if(dir == 'T')
                {
                    r.dec_higth(n);
                }
                else if(dir == 'L')
                {
                    r.dec_width(n);
                }
            
            break ;
    }
    
   r.display();
    
  return 0;
}