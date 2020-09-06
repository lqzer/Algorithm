#include <stdio.h>
#include <vector>
#include <map>

//判断一个数是否为质数
bool isPrimes(int num)
{
    if(num < 2)
    {
        return false;
    }
    for( int i = 2; i * i <= num; ++i)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}
/*
 * 给出一个数字 n，要求输出小于 n 的所有素数的个数总和。
 * 
 */
int countPrimes(int num)
{
    int count = 0;
    for(int i = 1; i <= num; ++i)
    {
        if(isPrimes(i))
        {
            printf(" %d ",i);
            count++;
        }
    }
    return count;
}

bool containsDuplicate(const std::vector<int>& array)
{
    std::map<int,int> record;
    for(auto elem : array)
    {
        auto exit = record.find(elem);
        if(exit == record.end())
        {
            record.insert(std::make_pair(elem,elem));
        }
        else
        {
            return true;
        } 
    }
    return false;
}

/*
判断一个数是否为4的幂次
*/
bool isPowerOfFour(int num)
{
    return (num > 0) && ((num &(num -1)) == 0) && ((num -1)%3 == 0);
}

//计算num的二进制中1的个数
int oneBitCount(int num)
{
    int count = 0;
    while(num != 0)
    {
        num = num&(num-1);
        count++;

    }
    return count;

}

