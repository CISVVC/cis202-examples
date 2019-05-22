#include<iostream>
#include<stack>
#include<string>

class EmptyStackError : public logic_error
{

};

class SafeStack
{
   std::stack<std::string> m_data;
public:
   SafeStack();
   void push(std::string str);
   void pop();
   void top();
};

int main()
{
   SafeStack s;

   try
   {
      s.push("Hello");

      std::cout << s.top() << std::endl;
      s.pop();
      s.pop();
   }
   catch(EmptyStackError& e)
   {
      std::cerr << e.what() << std::endl;
   }

   return 0;
}
