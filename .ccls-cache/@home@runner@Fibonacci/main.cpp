#include <iostream>
#include <cassert>
#include <vector>

long long fib(int seq)
{
    static std::vector<long long> data{0,1};
    if(seq < data.size())
    {
      return data[seq];
    }
    else
    {
        long long new_val =  fib(seq-2) + fib(seq-1);
        data.push_back(new_val);    
        return new_val;
    }
}

int main()
{
    std::cout<<"Hello Fibonacci \n";
    
    assert(fib(0) == 0 );
    assert(fib(1) == 1 );
    assert(fib(2) == 1 );
    assert(fib(75) == 2111485077978050);
    std::cout<<"All testcases pass\n";
  
    return 0;
}