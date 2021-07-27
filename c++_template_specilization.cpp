#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;
// Define specializations for the Traits class template here.

char u[]="unknown";
char F0[]="apple";
char F1[]="orange";
char F2[]="pear";
char C0[]="red";
char C1[]="green";
char C2[]="orange";
template<>
struct Traits<Fruit>
{
    public:static string name(int a)
    {
        if(a>=3||a<0)
          return u;
        else if(a==0)
          return F0;
        else if(a==1)
          return F1;
        else
          return F2;
    }
};
template<>
struct Traits<Color>
{
    public:static string name(int b)
    {
        if(b==0)
          return C0;
        else if(b==1)
          return C1;
        else if(b==2)
          return C2;
        else
          return u;
    }
};


int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}