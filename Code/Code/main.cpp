#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include "common/Node.h"
#include "Function.h"
int main()
{
  int count = countPrimes(10);
  printf("the primes count : %d \n",count);

  std::vector<int> array = {1,2,3,4,2};
  bool contains = containsDuplicate(array);
  if(contains)
  {
     printf("vector has duplicate element");
  }
   
}