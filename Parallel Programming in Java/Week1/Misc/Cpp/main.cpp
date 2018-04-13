#include <iostream>
#include <vector>
#include <algorithm>
#include <future>
#include <numeric>

int main(int argc, char *argv[])
{
    std::vector<size_t> numbers(10000, 2);
    size_t s1 = 0, e1 = numbers.size() / 2;
    size_t s2 = numbers.size() / 2, e2 = numbers.size();

    auto comp1 = std::async(std::launch::async, [&numbers, s1, e1]() {
        return std::accumulate(numbers.begin() + s1, numbers.begin() + s1 + e1, 0);
    });

    auto comp2 = std::async(std::launch::async, [&numbers, s2, e2]() {
        return std::accumulate(numbers.begin() + s2, numbers.begin() + s2 + e2, 0);
    });

    size_t sum1 = comp1.get();
    size_t sum2 = comp2.get();
    std::cout <<"Sum : "<<sum1 + sum2<<std::endl;

    return 0;
}