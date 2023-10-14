#include <iostream>

void transverse(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        std::cout <<"\n"<< i << " ->   ";
        std::cout << arr[i];
    }
    std::cout<<"\n";
}

int insertion(int arr[], int val, int at)
{
    if(at >= 10){
        std::cout<<"\noverflow insertation failed";
        return 0;
    }
    for (int i = 10 - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
        if (i == at)
        {
            arr[i] = val;
            break;
        }
    }
};
void deletation(int arr[], int at)
{
    for (int i = at; i < 10; i++)
    {
        if(i == at){
            break;
        }
        arr[i] = arr[i + 1];
    };
};
void updateArr(int arr[], int val, int at)
{
    arr[at] = val;
};

int main()
{
    int arr[10] = {1, 2, 3, 2 , 10 , 1 , 2 ,3 ,11 , 8};
    insertion(arr, 5, 10);
    transverse(arr);
    deletation(arr, 2);
    transverse(arr);
    updateArr(arr, 20, 1);
    transverse(arr);
}