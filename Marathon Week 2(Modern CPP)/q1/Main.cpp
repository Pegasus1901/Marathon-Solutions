#include<iostream>
#include<array>


using ArrayType = std::array<std::array<int,2>,2>;


int main()
{
    //2d array to store the matrix
    ArrayType arr;

    //to store user input elements
    int element;
    
    //loop to insert elemnts in matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << "Enter Element = " << std::endl;
            std::cin >> element;
            arr[i][j] = element;
        }
    }

    if(arr.empty()){
        throw std::runtime_error("Array Values anot Initilized");
    }

    //loopto display array elements
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout<<"\n Matrix is = "<<std::endl;
            std::cout << arr[i][j] <<"\t";
        }
        std::cout << std::endl;
    }
    
    //Lambda function gives addition of rows elements
    auto AdditionOfRowElements = [&](){
        for (int i = 0; i < 2; i++)
        {
            int total=0;
            for (int j = 0; j < 2; j++)
            {
                total+=arr[i][j];
            }
            std::cout<<"Total Of Row elements = "<<total<<std::endl;
        }
    };

    //Lambda function to get the heighest value
    auto HighestValue = [&](){

        int Hvalue= arr[0][0];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if(Hvalue<arr[i][j]){
                    Hvalue=arr[i][j];
                }
            }
            std::cout<<"Heighest Value is = "<<Hvalue<<std::endl;
        }
    };

    //Lambda function to return Square of last element of matrix
    auto SquareOfLastElement = [&](){
        return arr[1][1]*arr[1][1];
    };

    //Lambda function prints maximum element in each column
    auto MaxColumnElement = [&](){
        for (int i = 0; i < 2; i++)
        {
            int maxElement=0;
            for (int j = 0; j < 2; j++)
            {
                if(maxElement<arr[j][i]){
                    maxElement=arr[j][i];
                }
            }
            std::cout<<"Heighest Value is = "<<maxElement<<std::endl;
        }
    };


    //Lambda functions called here
    AdditionOfRowElements();
    HighestValue();
    std::cout<<"Square Of Last Element Is = "<<SquareOfLastElement()<<std::endl;
    MaxColumnElement();

    return 0;
}