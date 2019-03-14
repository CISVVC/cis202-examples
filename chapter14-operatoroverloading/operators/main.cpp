#include<iostream>
#include<string>

class Rational
{
   int m_num;
   int m_denom;

public:
   Rational(int num,int denom);

   std::string to_string() const;
   
   Rational operator+(const Rational &rhs);
   
   friend std::ostream& operator<<(std::ostream &out, const Rational &r);
};


Rational::Rational(int num,int denom)
{
   m_num = num;
   m_denom = denom;
}

std::string Rational::to_string() const
{
   return std::to_string(m_num) +  "/" + std::to_string(m_denom);
}

Rational Rational::operator+(const Rational &rhs)
{
   return Rational(m_num * rhs.m_denom + rhs.m_num * m_denom,m_denom * rhs.m_denom);
}

std::ostream& operator<<(std::ostream& out,const Rational &r)
{
   out << r.to_string();
   return out;
}

int main()
{
   Rational a(1,2);

   std::cout << a << std::endl;
   std::cout << (a + Rational(3,4)) << std::endl;
   // 1/2

   return 0;
}
