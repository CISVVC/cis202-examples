#include<iostream>
#include<vector>

template<class T>
class Stack
{
   std::vector<T> m_data;

public:
   T top();
   T pop();
   void push(T item);
   bool empty();
};


template<class T> 
T Stack<T>::top()
{
   return *(m_data.end()-1);
}

template<class T>
T Stack<T>::pop() {
   T value = *(m_data.end()-1);
   m_data.erase(m_data.end()-1);
   return value;
}

template<class T>
void Stack<T>::push(T item) {
   m_data.push_back(item);
}

template<class T>
bool Stack<T>::empty()
{
   return m_data.size() == 0;
}

int main() {
   Stack<int> stack;
   stack.push(1);
   stack.push(2);
   stack.push(3);

   while(!stack.empty())
      std::cout << stack.pop() << std::endl;

   return 0;
}
