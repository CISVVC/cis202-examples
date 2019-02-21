#include<string>

std::string s_grade;
double grade_value;
s_grade = "A";

if(s_grade == "A+")
   grade_value = 4.0;
else if(s_grade == "A")
  grade_value = 4.0; 
else if(s_grade == "A-")
  grade_value = 3.7; 
else if(s_grade == "A-")
  grade_value = 3.7; 

int score;
// get the score
if(score > 90)
{
   // create the Grade, you might want to check further for + and minus;
   if(score > 99)
      add_grade("A+");
   else if(score > 95)
      add_grade("A");
   else 
      add_grade("A-");

   // add it to the grade vector
}
else if(score>80)
   Grade g("B");
