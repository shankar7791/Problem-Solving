#include <iostream>
#include <vector>
#include <algorithm>
   using namespace std;

void show(vector<int> &v1)
 {
    cout<<"data show"<<endl;
    for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<endl;
 }

int
main()
{
    vector<int>v1;
    cout<<"INITIAL CAPACITY OF VECTOR is:"<<v1.capacity()<<endl;
    cout<<"INITAL SIZE OF ELEMETS IN VECTOR IS:"<<" "<<v1.size()<<endl;

    v1.push_back(30);
    v1.push_back(26);
    v1.push_back(8);
    v1.push_back(26);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(1);
    cout<<"NEW ELEMETS ADDED INTO THE VECTOR"<<endl;
    show(v1);
    cout<<"CAPACITY AFTER INSERTING ELEMETS is:"<<v1.capacity()<<endl;

    cout<<"ELMENT INSERT AT ANY LOCATION"<<endl;
    vector<int>::iterator it=v1.begin();
    v1.insert(it+2, 35);

    cout<<"AFTER INSERTING NEW VALUE IN LOCATION IS"<<endl;
    show(v1);

    cout<<"NEW ELEMENTS INSRTED"<<endl;
    v1.push_back(90);
    v1.push_back(88);
    show(v1);
    std::sort(v1.begin(), v1.end());
    cout<<"AFTER SORTING ELEMENTS are"<<endl;
    show(v1);

    cout<<"REVERSE POSTION IN ELEMETS"<<endl;
    std::reverse(v1.begin(), v1.end());
    show(v1);

    cout<<"CAPACITY AFTER ALL THE ELEMETS IS:-"<<v1.capacity()<<" " <<endl;

    cout<<"SIZE OF ELEMETS IN VECTOR IS:"<<" "<<v1.size()<<endl;

    cout<<"After REMOVING ELEMETS IS"<<endl;
    v1.pop_back();
    show(v1);
    cout<<"1 is REMOVED FROM VECTOR"<<endl;

    cout<<"CAPACITY AFTER ALL THE ELEMETS IS:-"<<v1.capacity()<<" " <<endl;

    cout<<"SIZE OF ELEMETS IN VECTOR IS:"<<" "<<v1.size()<<endl;
}
