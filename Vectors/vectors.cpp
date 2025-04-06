#include <iostream>
#include <vector>
using namespace std;

int main()
{
//     vector<int> vec = {1, 2, 3};
//     cout << "size: " << vec.size() << endl;
//     vec.push_back(25);
//     cout << "size after push back function: " << vec.size() << endl;

//    vec.pop_back();
//    cout << "front : " << vec.front() << endl;
//    cout << "back: " << vec.back() << endl;
//    cout << "val of index: " << vec.at(0) << endl;

    // for (int val : vec)
    // {
    //     cout << val << endl;
    // }


// size and capacity testing on dynaminc allocation of memory, how vectors save it.
    vector<int> vec1;

    vec1.push_back(0);
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(2);
    vec1.push_back(2);



    cout << vec1.size() << endl;
    cout << vec1.capacity() << endl;


    return 0;
}