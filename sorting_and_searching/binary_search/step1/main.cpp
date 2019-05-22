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

/*
 * binary search, this is the recursive version
 */
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

/*
 * binary search, this is the non recursive (iterative)  version
 */
int bsearch_iter(const std::vector<std::string> &v,const std::string &key,int low,int high)
{
   int index = -1;
   for(;;)
   {
      int mid = low + (high - low) / 2;

      if(mid < 0 || mid > high)
         break;

      if(v[mid] == key)
      {
         index = mid;
         break;
      }
      else if(key < v[mid])
         high = mid - 1;
      else if(key > v[mid])
         low = mid + 1;
   }
   return index;
}

int search(const std::vector<std::string> &v,const std::string &key)
{
   int count=0;
   int index=-1;

   //return bsearch(v,key,0,v.size()-1);
   return bsearch_iter(v,key,0,v.size()-1);
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
   std::cout << search(names,"Ratchford") << std::endl;

   return 0;
}

