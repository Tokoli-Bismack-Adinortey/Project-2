#include <iostream>
using namespace std;
int main()
{
  int score;
    cout << "Please enter your score:" << endl;
    cin>>score;
     if((score>=80) && (score<=100))
    {
      cout<<"Your grade is:"<< "A"<<endl;
      cout<<"Interpretation : EXCELLENT\n";
    }
    else if((score>=75) && (score<=79))
    {
    cout<<"Your grade is:"<< "B+"<<endl;
    cout<<"Interpretation : VERY GOOD\n";
    }
    else if((score>=70) && (score<=74))
    {
    cout<<"Your grade is:"<< "B"<<endl;;
    cout<<"Interpretation : GOOD\n";
    }
    else if((score>=65) && (score<=69))
    {
    cout<<"Your grade is:"<< "C+"<<endl;
    cout<<"Interpretation : FAIRLY GOOD\n";
    }
    else if ((score>=60) && (score<=64))
    {
    cout<<"Your grade is:"<< "C"<<endl;
    cout<<"Interpretation : AVERAGE\n";
    }
    else if((score>=55) && (score<=59))
    {
    cout<<"Your grade is:"<< "D+"<<endl;
    cout<<"Interpretation : BELOW AVERAGE\n";
    }
    else if((score>=50) && (score<=54))
    {
    cout<<"Your grade is:"<< "D"<<endl;
    cout<<"Interpretation : MARGINAL PASS\n";
    }
    else if((score>=45) && (score<=49))
    {
    cout<<"Your grade is:" <<"E"<<endl;
    cout<<"Interpretation : UNSATISFACTORY\n";
    }
    else if((score>=0) && (score<=44))
    {
    cout<<"Your grade is:"<< "F"<<endl;
    cout<<"Interpretation : FAIL\n";
    }
    return 0;
}
