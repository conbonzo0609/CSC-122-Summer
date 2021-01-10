#include <iostream>
#include <algorithm>


using namespace std;

std::string random_string( size_t length ) //https://stackoverflow.com/questions/440133/how-do-i-create-a-random-alpha-numeric-string-in-c
{
    auto randchar = []() -> char
    {
        const char charset[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[ rand() % max_index ];
    };
    std::string str(length,0);
    std::generate_n( str.begin(), length, randchar );
    return str;
}

template < class T, int len>  

  class dynaarray 

{

  T * elems;

  int length; 

  public:

    dynaarray(int size = len)  

  {

    length = size;

    elems = new T[length];  

  }

  dynaarray<T, len> (const dynaarray<T, len> &s)  

  {

    length = s.getlength();

    elems = new T[length];

    for (int i = 0; i < length; i++) 

      elems[i] = s.getvalue(i);
  }

  ~dynaarray() 

  {

    delete[] elems;
  }

  int getlength()

  {

    return length;
  }

  T get(int index)

  {

    if (index < 0 || index >= length)

    {
        
     
    }
    else

      return elems[index];
  }

  void set(int index, T val)

  {

    if (index < 0)

    {

     
    }

    if (index >= length)

    {

      T *o_elems = elems;

      int o_length = length;

      length += ((index - length) + 1);

      elems = new T[length];

      for (int i = 0; i < o_length; i++)

        elems[i] = o_elems[i];

      delete[] o_elems;
    }

    elems[index] = val;
  }



};

int main()

{
 
   

   dynaarray<string, 20> stringArray; 

  dynaarray<int, 20> intArray;

  dynaarray<double, 20> doubleArray;

 

  
  
  

  for (int i = 0; i < 20; i++)

  {

    intArray.set(i, i);

    doubleArray.set(i, i *0.5);

    stringArray.set(i, random_string(7));


   
  }

  for (int i = 0; i < 20; i++)

  {

    cout << intArray.get(i) << "\t" << doubleArray.get(i) << "\t" << stringArray.get(i) << "\n";
  }

  return 0;

}