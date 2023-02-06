//A - Say Hello With C++

#include<iostream>
using namespace std;
 
int main()
{
    string Name;
    cin>> Name;
    cout<<"Hello, "<<Name<<endl;
    
    return 0;
}

------------------------------------------------------------------------------
// B - Basic Data Types
#include<iostream>
using namespace std;
 
int main(){
    int a;
    long long int b;
    char ch;
    float f;
    double d;
    
    
    cin>>a>>b>>ch>>f>>d;
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<ch<<endl;
    cout<<f<<endl;
    cout<<d<<endl;
    
    return 0;
}

---------------------------------------------------------------------------------

// C - Simple Calculator

#include<iostream>
using namespace std;
 
 
int main(){
  long long int a , b;
   cin>>a>>b;
 
   cout<<a<<" + "<<b<<" = "<<(a + b)<<endl;
   cout<<a<<" * "<<b<<" = "<<(a * b)<<endl;
   cout<<a<<" - "<<b<<" = "<<(a - b);
    return 0;
}


------------------------------------------------------------------------------



// D - Difference

#include<iostream>
using namespace std;
 
 
int main(){
 
  long long int a , b, c, d;
   cin>>a>>b>>c>>d;
 
   cout<<"Difference =" <<" "<<((a*b)-(c*d));
    return 0;
}

--------------------------------------------------------------------------------------
// E - Area of a Circle
 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    double PI = 3.141592653;
    
    double r;
    cin>>r;
    
    cout<<fixed<<setprecision(9)<<PI * r * r;
    return 0;
}

-------------------------------------------------------------------------------------

// F - Digits Summation
#include<iostream>
using namespace std;
 
int main()
{
    long long int a, b;
    cin>>a>>b;
 
    int r1 = a % 10;
    int r2 = b % 10;
 
    cout<<r1+r2;
 
 
    return 0;
}

---------------------------------------------------------------------------------------

// G - Summation from 1 to N 
 
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
 
 
 
int main(int argc, char const *argv[])
{
    unsigned long long int n;
    cin>>n;
    unsigned long long int sum = (n * (n + 1) / 2);
    cout<<sum;
 
    return 0;
}


-----------------------------------------------------------------------------------
 
// H - Two numbers
 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
 
int main(int argc, char const *argv[])
{
    float a, b;
    cin>>a>>b;
 
    int val = (a+b-1) / b ;
 
    cout<<"floor "<< a <<" / " << b << " = " << int(a/b)<<endl;
    cout<<"ceil "<< a <<" / " << b << " = " << val<<endl;
    cout<<"round "<< a <<" / " << b << " = " << llround(a/b);
    return 0;
}

----------------------------------------------------------------------------------
 
// I - Welcome for you with Conditions
#include<iostream>
using namespace std;
 
 
int main(){
    int a,b;
    cin>>a>>b;
    
    
    if(a>=b){
        cout<<"Yes";
    }
    else{
        
        cout<<"No";
        
    }
    
    return 0;
    
    
}

-------------------------------------------------------------------------------------
 
// J - Multiples 
#include<iostream>
using namespace std;
 
 
int main(){
    int a,b;
    cin>>a>>b;
    
    
    if((a%b == 0) || (b%a==0)){
        cout<<"Multiples";
    }
    else{
        
        cout<<"No Multiples";
        
    }
    
    return 0;
    
    
}

---------------------------------------------------------------------------------------

// K - Max and Min 
 
#include<iostream>
using namespace std;
 
 
 
int main(int argc, char const *argv[])
{
    int a, b, c;
    cin>>a>>b>>c;
    
    
 
    if((a<=b )&& (a <= c)){
        cout<<a<<" ";
        if(c>=b){
            cout<<c;
        }
 
        else{
            cout<<b;
        }
 
        
 
 
    }
    
 
    else if((b <= a) && (b <= c)){
         cout<<b<<" ";
 
        if (c >= a)
        {
            cout<<c;
        }
        else{
            cout<<a;
        }
 
       
    }
 
    else{
        cout<<c<<" ";
 
        if (a >= b)
        {
            cout<<a;
 
        }
        else{
            cout<<b;
        }
 
        
    }
    return 0;
}


---------------------------------------------------------------------------------------
 
// L - The Brothers
 
#include<iostream>
#include<string>
using namespace std;
 
 
 
int main(int argc, char const *argv[])
{
    string f1, s1, f2, s2;
 
    cin>>f1>>s1;
    cin>>f2>>s2;
    
    
 
    if(s1 == s2){
        cout<<"ARE Brothers";
    }
 
    else{
        cout<<"NOT";
        
    }
    return 0;
}
