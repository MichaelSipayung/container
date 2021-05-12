#include <iostream>
#include <list>
#include <deque>
#include <vector>


int main(int, char**) {
    std::cout << "Hello, container\n";
    std::list<int> listD;
    std::deque<int> deqD;
    std::vector<std::vector<int>> containContainer;
    std::vector<std::string> name;
    name.push_back("michael");
    std::cout<<" size \t: " << name.size()  <<std::endl;
    name.clear();
    std::cout<<" size \t: " << name.size()  <<std::endl;



}
