// There are total 45 people in the class, 25 are boys. Write a program how many girls receive A grade.If 17 boys made up 80% of the students that received A grade

#include <iostream>
using namespace std;
int main()
{
    int total,boys,girls;
    boys = 17;
    total = (45*80)/100;
    girls = total - boys;
    cout<<"Number of Girls who got A grade: "<<girls;
return 0;
}