#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(3); // Inserting Element at the back of vector
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(5);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(7);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // Accessing elements of vector
    cout << v[0];
    cout << v[1];
    cout << v[2];

    // v.resize(5); // Resize the array
    // cout << "Size: " << v.size() << endl;
    // cout << "Capacity: " << v.capacity() << endl;

    // v.pop_back(); // Used to delete the last element
    // cout<<"Size: "<<v.size()<<endl;
    // cout<<"Capacity: "<<v.capacity()<<endl;

    // v.insert(v.begin() + 1, 2); // Insert elements using insert function
    // cout << "Size: " << v.size() << endl;
    // cout << "Capacity: " << v.capacity() << endl;

    // v.clear(); // Clears the vector
    // cout << "Size: " << v.size() << endl;
    // cout << "Capacity: " << v.capacity() << endl;

    // v.erase(v.end()-2); // Delete one element from a vector
    // cout << "Size: " << v.size() << endl;
    // cout << "Capacity: " << v.capacity() << endl;


    return 0;
}