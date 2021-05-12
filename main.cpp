#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <forward_list>
#include <array>
#include <ctime>


int main(int, char**) {
    time_t rawtime;
    time(&rawtime);
    std::cout<<"current time \t: "<< ctime(&rawtime)<<std::endl;
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

    //list initialization
    std::cout<<"list initialized  \t\t: [";
    std::vector<const char*> cStyle={"michael" ,"sipayung"};//explicitly specify the value
    for (auto &i : cStyle)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;

    std::cout<<"using standart library : array \t [";
    std::array<int,12> arrayLib;
    std::cout<<arrayLib.size();
    std::cout<<"]"<<std::endl;
    std::array<int,15>::size_type testSi;
    std::cout<<"size_type\t: " <<testSi;
    std::array<int,4> numberPhone={876,897,9986,9768};
    std::cout<<" array view \t: [";
    for (auto &u : numberPhone) //array as container -> 
    {
        std::cout<<u<<"|";
    }
    //test push
    //numberPhone.pushback()//error
    std::cout<<"]"<<std::endl;
    std::cout<<"copy array library\t\t:[";
    std::array<int,4> tempCopy;
    tempCopy=numberPhone;//note: only the same size can move or copy 
    for(auto i=tempCopy.begin();i!=tempCopy.end();i++){
        std::cout<<*i<<"|";
    }
    std::cout<<"]"<<std::endl;

    std::cout<<"before swap \t : [";
    std::vector<int> ori={1,2,3};
    std::vector<int> ori2={3,2,1};
    for (auto &i :ori)
    {
        std::cout<<i<<" | ";
    }
    std::cout<<"]"<<std::endl;
    
    ori.swap(ori2);
    std::cout<<"after swap \t:  [";
    for (auto&i : ori)
    {
        std::cout<<i<<" | ";
        
    }
    std::cout<<"]"<<std::endl;
    //using assign method 
    std::list<std::string> names={"michael","sipayung"};
    std::vector<const char*> oldstyle={"michael","blank"};
    std::cout<<"before assign \t\t\t: [";
    for (auto &i : names)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;

    names.assign(oldstyle.cbegin(), oldstyle.cend()); //assign : replaces all elemen with oldstyle container
    std::cout<<"using assign to replaces all elemen ian old container \t: [";
    for (auto &i : names)
    {
        std::cout<<i<<"|";        
    }
    std::cout<<"]"<<std::endl;   
    //names.assign(names.begin(),names.end()); : bad 
    names.insert(names.begin(),"jack daniel");
    std::cout<<" using insert \t: [";
    for (auto &i : names)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;
    names.insert(names.begin(),"daniel");
    std::cout<<" using insert \t: [";
    for (auto &i : names)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;
    
    std::cout<<"using swap \t: ["<<std::endl;
    std::vector<int> ten(10);
    std::vector<int> hun(100);
    std::cout<<"\t\t1. before swap \t:" <<ten.size()<<" element"<<std::endl;
    std::cout<<"\t\t2. before swap \t:" <<hun.size()<<" element"<<std::endl;

    swap(ten,hun);
    std::cout<<"\t\t1. after swap \t:" <<ten.size()<<" element"<<std::endl;
    std::cout<<"\t\t2. after swap \t:" <<hun.size()<<" element"<<std::endl;
    std::cout<<"]"<<std::endl;
    auto a1=12;
    auto a2=13;
    auto nameM="MICHAEL";
    auto nickN="sipayung";

    std::swap(nameM,nickN);
    std::swap(a1,a2); //note using non member swap
    std::cout<<"using non member - a1\t:"<<a1<<std::endl;
    std::cout<<"using non member - a2\t:"<<a2<<std::endl;
    std::cout<<"using non member - a2\t:"<<nameM<<std::endl;

    std::cout<<"Relational Operator"<<std::endl;
    std::vector<int> compare_1={1,2,4};
    std::vector<int> compare_2={1,2,3};
    std::cout<<"1.equal\t\t: "<<(compare_1==compare_2) <<"\t0:false , true:otherwise"<<std::endl;
    std::cout<<"2.less than\t\t: "<<(compare_1>=compare_2)<<"\t0:false , true:otherwise"<<std::endl;
    std::cout<<"Before insert\t\t\t:[";
    for (auto &i : compare_1)
    {
        std::cout<<i<<"|";
        
    }
    std::cout<<"]"<<std::endl;
    
    compare_1.insert(++compare_1.begin(),12);
    
    std::cout<<"Using insert to fill new value with iterator\t:[";
    for (auto &i : compare_1)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;

    //string support push back : because it is a container
    std::string fill;
    for (size_t i = 97; i <123; ++i)
    {
        fill.push_back(char(i));
    }
    
    //view the data
    std::cout<<"push \t: [";
    for (auto &i : fill)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;
    std::cout<<"back \t: [";
    auto endIter=fill.end();
    auto begIter=fill.begin();
    for(auto i=endIter;i>=begIter;--i){
        std::cout<<*i<<"|";
    }
    std::cout<<"]"<<std::endl;

    std::deque<int> deq;
    for(int i=0;i<5;++i){
        deq.push_front(i);
    }
    std::cout<<"using push front \t\t:[";
    for (auto &i : deq)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;
    std::vector<std::string> womenName={"ana","michel"};
    std::cout<<"  before insert with a range \t:[";
    for (auto &i : womenName)
    {
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;
    womenName.insert(womenName.end(),10,"man");//insert ten man to womenname vector
    std::cout<<"  after insert with a range \t:[";
    for(auto &i:womenName){
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;

    womenName.insert(womenName.end()-2,"dona");
    std::cout<<"  after insert dona at 2 past the end of vector \t:[";
    for(auto &i:womenName){
        std::cout<<i<<"|";
    }
    std::cout<<"]"<<std::endl;

    //another experimentation

    std::list<std::string> nameCountry;
    auto iterCoun=nameCountry.begin();
    std::cout<<"warning, press ctrl+z to stop input"<<std::endl;
    std::cout<<"similiar operation to push_front() \t: [ ";
    std::string wordIn;
    while(std::cin>>wordIn){
        iterCoun=nameCountry.insert(iterCoun,wordIn);
    }
    std::cout<<"]"<<std::endl;

    std::cout<<"reading data \t: [";
    for (auto &i : nameCountry)
    {
        std::cout<<i<<"|";
    }
    
    std::cout<<"]"<<std::endl; 



}