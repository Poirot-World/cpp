//
//  main.cpp
//  c3
//
//  Created by Huizhi on 24.10.20.
//

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using namespace std;
/*int main(){
    vector<vector<int>> ivec;
    vector<string> svec(10, "null");
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    
    std::cout << "es hat geklappt." <<std::endl;
    return 0;
}
*/

/* 3.20 （2） */
int main(){
    vector<int> v;
    for(int i; cin >> i; v.push_back(i) );
    
    for (int j = 0; j < v.size()/2; j= j+1)
        cout << v[j]+ v[v.size()- j -1] << endl;
    return 0;
}



/* 3.20 （1）
int main(){
    vector<int> v;
    for(int i; cin >> i; v.push_back(i) );
    
    for (int j = 0; j <= v.size()-2; j= j+2)
        cout << v[j]+ v[j+1] << endl;
    cout << v.size() << endl;
    return 0;
}
 */

/* 3.19
 
 int main(){

    vector<int> v1(10, 42);
    vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3(v2);

    
    std::cout << "es hat geklappt." <<std::endl;
    return 0;
}
 */

/* 3.18
 
 int main(){
    
    vector<int> ivec;
    ivec.push_back(42);
    
    std::cout << "es hat geklappt." <<std::endl;
    return 0;
}

 */

/* 3.17

int main(){
    string s;
    vector<string> s6;
    while(cin >> s){
        s6.push_back(s);
    }
   //用引用改变vector元素的值
   for (auto &i: s6)
        for(auto &j : i)
            j =toupper(j);
    
    
    for(auto c: s6)
        cout << c <<endl;
    
    std::cout << "es hat geklappt." <<std::endl;
    return 0;
}

*/


/* 3.16

int main(){
    vector<vector<int>> ivec;
    vector<string> svec(10, "null");
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};
    std::cout << "size: " << v4.size()<<std::endl;
    for(auto i:v4)
        cout << i << " "
        << endl;
    
    std::cout << "es hat geklappt." <<std::endl;
    return 0;
}

 */

/*3.15
 


int main(){
 
    vector<string> s;
    string s1;
    while(std::cin>>s1){
        s.push_back(s1);
    }
    
    std::cout << "es hat geklappt." <<std::endl;
    return 0;
}
 */

/* 练习3.14
int main(){
    
    vector<int> v1;
    int i;
    while(std::cin>>i){
        v1.push_back(i);
    }
    //ctrl + D退出

    std::cout << "es hat geklappt." <<std::endl;
    return 0;
}
 */

