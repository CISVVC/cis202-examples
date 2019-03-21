#include<iostream>
#include<string>

class Foo
{
   std::string m_name;
public:
   Foo() {m_name = "";}
   Foo(const std::string &name);

   friend std::ostream& operator<<(std::ostream& out,const Foo &f);
};

Foo::Foo(const std::string &name)
{
    m_name = name;
}

std::ostream& operator<<(std::ostream& out,const Foo &f)
{
    out << f.m_name;
    return out;
}

template<typename T> void print_array(T ar[],int size)
{
    for(int i=0;i< size;i++)
        std::cout << ar[i] << " ";

    std::cout << std::endl;
}

int main()
{
    int ar[5];
    ar[0] = 0;
    ar[1] = 1;
    ar[2] = 2;
    ar[3] = 3;
    ar[4] = 4;

    print_array(ar,5);
    
    char s[6];
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'l';
    s[3] = 'l';
    s[4] = 'o';
    s[5] = '\0';
    print_array(s,5);

    std::string s_ar[3];
    s_ar[0] = "Hello";
    s_ar[1] = "there";
    s_ar[2] = "class";
    print_array(s_ar,3);


    std::cout << Foo("Hi") << std::endl;

    Foo ar_foo[3];
    ar_foo[0] = Foo("Hello");
    ar_foo[1] = Foo("there");
    ar_foo[2] = Foo("foo");
    
    print_array(ar_foo,3);
    return 0;
}
