#include<iostream>
#include<string>
#include<algorithm>


int main()
{
    std::string s("Hello");
    
    std::cout << "before - " << s << std::endl;
    std::reverse(s.begin(),s.end());
    std::cout << "after - " << s << std::endl;
    return 0;
}
