#include <bits/stdc++.h>
using namespace std;
/*
using switch statemement for printing 
days 
take day no as 1 to 7 print 
1:monday 
2:tuesday
like this so on upto sunday
*/
int main()
{
  int day;
  cin >> day;
  switch(day){
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "thursday";
        break;
    case 5:
        cout << "friday";
        break;
    case 6:
        cout << "saturday";
        break;
    case 7:
        cout << "sunday";
        break;
    default:
        cout << "invalid day";
        break;
  }
  

    return 0;
}
