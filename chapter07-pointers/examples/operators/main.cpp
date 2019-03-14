#include<iostream>


class Object
{
   public:
     void someFunction();
};

void Object::someFunction()
{
   std::cout << "some function";
}

Object* objectFactory()
{
   return new Object;
}

void somewhatcrazyUseOfObjectFactory()
{
   for(int i=0;i<10000)
   {
      Object* obj = objectFactory();
      obj->someFunction();
      delete obj;

   }
}


typedef int* IntPointer;
void swap(intPointer &a,IntPointer &b)
{
   /*
   int temp = *a;
   *a = *b;
   *b = temp;
   */
   int *temp = a;
   a = b;
   b = temp;
}

int main()
{
    
    Object *aPtr = objectFactory();

    aPtr->someFunction();

    int *a,*b;
    a = new int;
    b = new int;
    *a = 10;
    *b = 20;
    swap(a,b);
    std::cout << "*a=" << *(*&a) << ",*b=" << *b << std::endl;
    return 0; 
} 
