#include<iostream>
#include<optional>
#include<array>
#include<mutex>
#include<thread>
#include<vector>
#include<condition_variable>


std::condition_variable cv;

bool flag = false;

int globalVariable_1,globalVariable_2;
std::mutex mt;

void SumOfTwoNumbers(){

    std::unique_lock<std::mutex> ul(mt);
    cv.wait(ul,[](){return flag;});

    std::cout<<"Enter First Number = ";
    std::cin>>globalVariable_1;

    std::cout<<"Enter Second Number = ";
    std::cin>>globalVariable_2;

    std::cout << "Addition Of Given Input Is = " << globalVariable_1+globalVariable_2<<std::endl;
    
}

void SumOfNNumbers(){

    std::unique_lock<std::mutex> ul(mt);
    cv.wait(ul,[](){return flag;});
    int input;
    int total = 0;
    std::cout<<"Till Where you want sum of the numbers : ";
    std::cin>>input;

    for (int i = 0; i < input; i++)
    {
        total+=i;
    }
    std::cout<<"Addition Till "<< input << " Numbers is = "<< total << std::endl;
}

void ReturnOddNumbers(std::vector<int>& data, std::vector<int>& result){
    std::unique_lock<std::mutex> ul(mt);
    cv.wait(ul,[](){return flag;});
    
    for(int v : data){
        if(v%2 == 0){
            result.push_back(v);
        }
    }

    

    std::cout<<"Odd Numbers Are = "<<std::endl;
    for (int val : result)
    {
        std::cout<<val<<std::endl;
    }
    
}

void CreateThread(
    std::array<std::thread,3>& threadArr,
    std::vector<int>& data,
    std::vector<int>& result
){
    threadArr[0]= std::thread(&SumOfTwoNumbers);
    threadArr[1]= std::thread(&SumOfNNumbers);
    threadArr[2]= std::thread(&ReturnOddNumbers,std::ref(data),std::ref(result));
}

void joinThreads(std::array<std::thread,3>&threadArr){
    for (std::thread& t: threadArr)
    {
        cv.notify_one();
        if(t.joinable()){
            flag=true;
            t.join();
            flag=false;
        }
    }
}




void StartApp(){
    std::vector<int> data {10,20,30,40,50};
    std::array<std::thread,3> threadArr;
    std::vector<int> result;

    CreateThread(threadArr,data,result);
    joinThreads(threadArr);
}

int main(){

    StartApp();
    return 0;
}