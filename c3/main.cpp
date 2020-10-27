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

/* 3.5 */
 
 int main(){
     string s1,s2;
   //输出大字符串
    //while(cin>>s1)
     //   s2+=s1;
    //cout << s2 << endl;
     
    
     //输出用空格分隔开的大字符串
     while(cin>>s1)
        s2 += s1;
        cout << s2 << endl;
        s2 += " ";
        cout << s2 << endl;
     cout << s2 << endl;
    

    return 0;
}

/* 3.4
 
 int main(){
     string s1,s2;
   //输出较大的字符串
     getline(cin,s1);
     getline(cin,s2);
     if (s1>= s2)
         cout << s1<< endl;
     else
         cout << s2 << endl;
    
     //输出长度较大的字符串
     if(s1.size()>=s2.size())
         cout << s1 << endl;
     else
         cout << s2 << endl;
    

    return 0;
}
*/

/* 3.3
标准输入会忽略开始的空白，从第一个字符开始读取，知道碰到下一个空白的字符。
 getline会保留输入时的空白符
 */


/* 3.2
 
 int main(){
     string line;
   //一次读入一整行
  //   while(getline(cin,line))
  //       cout << line << endl;
 
     //一次读入一个词
    while(cin>>line)
        cout << line << endl;

    return 0;
}
*/

/* 3.20 （2）
int main(){
    vector<int> v;
    for(int i; cin >> i; v.push_back(i) );
    
    for (int j = 0; j < v.size()/2; j= j+1)
        cout << v[j]+ v[v.size()- j -1] << endl;
    return 0;
}
 */


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

    

    return 0;
}
 */

/* 3.18
 
 int main(){
    
    vector<int> ivec;
    ivec.push_back(42);
    

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

