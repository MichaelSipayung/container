#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <forward_list>

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
    name.push_back("1.michael");
    name.push_back("2.michael");
    name.push_back("3.michael");
    name.push_back("4.michael");
    auto iter=0;
    auto begin=name.begin();
    auto end=name.end();
    std::cout<<" size \t: " << name.size()  <<std::endl;
    
    for(auto &i:name)
    {
        std::cout<<"."<<i<<std::endl;
    }
    std::cout<<"using while "<<std::endl;
    while (begin!=end)
    {
        std::cout<<*begin<<std::endl;
        ++begin;
    }

    std::vector<int>::difference_type iterator;

    //define list as a container 
    std::list<int> code;
    code.push_back(0x123232);
    code.push_back(0x123249);
    code.push_back(0x123323);
    std::cout<<" show code \t: [";
    for (auto &i : code)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;

    std::deque<int> dequeTest;
    dequeTest.push_back(+898977);
    dequeTest.push_back(+898974);
    dequeTest.push_back(+898978);
    dequeTest.push_back(+898975);
    std::cout<<" show code \t: [";
    for(auto &i:dequeTest){
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;

    std::list<std::string> a={"shakespare","austeen","daniel","lampar"};
    auto testReverO=a.rbegin();
    auto testReverOp=a.rend();
    std::cout<<" test reverse iterator for container \t: [";
    while(testReverO!=testReverOp){
       std::cout<<*testReverO<<"|";
       ++testReverO;
    }
    std::cout<<"]"<<std::endl;

    //explicitly specified type  for iterator 
    std::list<std::string>::iterator  begI=a.begin();
    std::list<std::string>::iterator  endI=a.end();

    std::cout<<" EXPLICITLY DECLARE ITERATOR  \t\t: [";
    while (begI!=endI){
        std::cout<<*begI<<"|";
       ++begI;
    }
    std::cout<<"]"<<std::endl;
    std::cout<<" Copy container  \t\t\t: [";
    std::list<std::string> copy(a);//copy container
    auto copyStart=copy.begin();
    auto copyEnd=copy.end();
    while (copyStart!=copyEnd)
    {
        std::cout<<*copyStart<<"|";
        ++copyStart;
        
    }  
    std::cout<<"]"<<std::endl;
    std::forward_list<int> numberE={1,2,3,4,5,7};
    std::cout<<" call container forward list \t: [";
    auto fbegin=numberE.begin();
    auto fend=numberE.end();
    while (fbegin!=fend)
    {
        std::cout<<*fbegin<<"|";
        ++fbegin;
    }

    std::cout<<"]"<<std::endl;

    std::vector<int> copyForward(numberE.begin(),numberE.end());//copy forward list to vector 
    //using pair of iterator 
    std::cout<<"Test copy forward list to vector that has a type of integer \t: [";
    for (auto &i : copyForward)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;

    std::deque<int> copyDe={1,2,3,4,5};
    std::deque<int>::iterator it=copyDe.end();
    std::deque<int> destinationC(copyDe.begin(),  it);
    std::cout<<" deque original size \t: " <<copyDe.size()<<" and max size \t: " <<copyDe.max_size()<<std::endl;
    std::cout<<" deque destiation size \t: " <<destinationC.size()<<" and max size \t: " <<destinationC.max_size()<<std::endl;

    




}