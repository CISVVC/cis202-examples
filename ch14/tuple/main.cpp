#include<iostream>
#include<sstream>


class Foo
{

};

std::ostream & operator<<(std::ostream &o,const Foo &f)
{
    o << "foo prints here";
    return o;
}

template<typename T> class Tuple
{
    T m_x;
    T m_y;

public:
    Tuple(T x,T y)
    {
         m_x = x;
         m_y = y;
    }
    
    std::string to_string() const
    {
        std::stringstream ss;

        ss << "(" << m_x << "," << m_y << ")";
        return ss.str();
    }

    T get_x() const
    {
        return m_x;
    }

    T get_y() const
    {
        return m_y;
    }

friend std::ostream& operator<<(std::ostream &o, const Tuple& t)
{
//    o << "(" << t.m_x << "," << t.m_y << ")";
    o << t.to_string();

    return o;
}

};





int main()
{
    Tuple<double> d(1.1,2.1);
    Tuple<int> i(1,2);
    std::cout << d.get_x() << " "<< d.get_y() << std::endl;
    std::cout << d << std::endl;
    std::cout << Tuple<char>('a','z') << std::endl;
    std::cout << Tuple<Foo>(Foo(),Foo()) << std::endl;

    return 0;
}
