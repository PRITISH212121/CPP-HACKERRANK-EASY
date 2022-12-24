// Input Format

// You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

// Output Format

// In the first line print two space-separated integers, representing the length of  and  respectively.
// In the second line print the string produced by concatenating  and  ().
// In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.






#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1,s2;
    cin>>s1>>s2;
    cout<<s1.size()<<" "<<s2.size()<<endl;
    cout<<s1+s2<<endl;
    char temp;
    temp=s1[0];
    s1[0]=s2[0];
    s2[0]=temp;
    cout<<s1<<" "<<s2;
    
  
    return 0;
}