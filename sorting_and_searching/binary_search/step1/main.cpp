#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<string>

/*
 * lets put it in a vector, but use a function for reading
 */

std::vector<std::string> readfile(std::string filename)
{
   std::vector<std::string> v;
   std::ifstream inputfile(filename);
   std::string buffer;
   while(! inputfile.eof())
   {
      inputfile >> buffer;
      v.push_back(buffer);
   }
   return v;

}

void print(std::ostream &o,std::vector<std::string> v)
{
   for(std::vector<std::string>::iterator p=v.begin();p != v.end();p++)
      o << *p << std::endl;
}

int bsearch(const std::vector<std::string> &v,const std::string &key,int low,int high)
{
   // find the midpoint
   int mid = low + (high - low) / 2;

   if(mid < 0 || mid > high)
      return -1;

   if(v[mid] == key)
      return mid;
   else if(key < v[mid])
      return bsearch(v,key,low,mid-1);
   else if(key > v[mid])
      return bsearch(v,key,mid+1,high);


}

int search(const std::vector<std::string> &v,const std::string &key)
{
   int count=0;
   int index=-1;

   return bsearch(v,key,0,v.size()-1);
/*
   for(int i=0;i < v.size();i++)
   {
      count++;
      if(v[i] == key)
      {
         index = i;
         break;
      }
   }
   std::cout << "Took " << count << " steps" << std::endl;
   return index;
   */
}

bool compare(const std::string &left,const std::string &right)
{
   return left < right;
}

int main()
{
   std::vector<std::string> names = readfile("names.txt");
   std::sort(names.begin(),names.end(),compare);
   print(std::cout,names);
   std::cout << search(names,"Tonning");

   return 0;
}

