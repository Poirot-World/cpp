//
//  main.cpp
//  c3
//
//  Created by Huizhi on 24.10.20.
// 按照题号从大到小排列

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using namespace std;
/*int main(){

    
    std::cout << "es hat geklappt." <<std::endl;
    return 0;
}
*/

/* 3.32 */
 //代码冗长，希望改善
int main(){
    
    vector<int> ia(10);
    
        
    
    return 0;
}
 





/* 3.31
 //代码冗长，希望改善
int main(){

    constexpr size_t array_size = 10;
    int ia[array_size];

    for(int ix=0; ix <array_size;++ix){
        ia[ix] =ix;
        
     }
    for (auto i : ia){
        cout << i << endl;
        
    }
    return 0;
}
 
 */



/* 3.30

int main(){

    constexpr size_t array_size = 10;
    int ia[array_size];
    //for(size_t ix=1; ix <=array_size;++ix){
     //   ia[ix] =ix;  将size_t 类型赋值给Int类型， 类型冲突
    // }


    return 0;
}
 */

/* 3.29
 
 相对于vctor，数组的元素size固定，不能根据需要改变size大小；
 没有vector灵活*/


/*3.28
string sa[10];
int ia[10];
 
 int main(){
     
     string sa2[10];
     int ia2[10];

    
     cout << sa[0] << endl;  // sa中元素的值是' '
     cout << ia[0]<< endl;   // ia中元素的值是0
     
     cout << sa2[0] << endl;  // sa2中元素的值是' '
     cout << ia2[0]<< endl;   // ia中元素的值是-272632816,32766,102951,1,...
     for(auto i : ia){
         cout << i << endl;
     }
     
     
    return 0;
}

 */

/*3.27
int txt_size(){
    return 2;
}
 
 int main(){
     
     unsigned buf_size =1024;
     int ia[buf_size]; //非法，维度不是常量表达式
     int ib[4 *7 - 14];//合法
     int ic[txt_size()]; //非法，维度不是常量表达式
     char st[11] = "fundamental"; //非法, 维度是12

    
    std::cout << "es hat geklappt." <<std::endl;
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


/* 3.11
 //c 的类型是const char&
// 不改变c的值，例如输出语句cout<<c;合法
//改变c的值，例如赋值，不合法

int main(){
    const string s = "Keep out!";
    for(auto &c:s){
        cout << c;
        }
   return 0;
}
 
 */

/* 3.10
 

int main(){
    string s;
    string s_new;
    cin >> s;
    
    //用cctype头文件里面的函数
    for(auto &i:s){
        if(true ==isalpha(i)){
            cout << i;
        }
    }
    cout << endl;
    
   // cout << s << endl;
    
     //这种判断是否是字母的方法太复杂了
    for(auto &i : s){
        if((i<='Z'&& i>='A')||(i<='z'&& i>='a')){
            s_new += i;
        }
    }
    cout << s_new << endl;
   
   return 0;
}
 
 */


/* 3.9
 //不合法，因为s为空

int main(){
    string s;
    cout << s[0] << endl;
   return 0;
}
 
 */

/* 3.8
 //范围for好一些，更加简洁
 
 int main(){
     string s1("Harry Potter");
     string s2("Greenmax since 1961");
     
     //传统for
     for(decltype(s1.size()) i= 0;
         i != s1.size();
         ++i){
         s1[i] = 'X';
     }

     cout << s1 << endl;
     
     //while
     decltype(s2.size()) n= 0;
     while(n!=s2.size()){
         s2[n] = 'X';
         ++n;
         
     }
     
     cout << s2 <<endl;
     
     
    return 0;
}


 */


/* 3.7
 如果for里面的是char i，那么i = 'X'不会改变s1的内容。
 
 int main(){
     string s1("Harry Potter");
 //范围for
     for(char i: s1){
         i = 'X';
     }

     cout << s1 << endl;
    return 0;
}

 */

/* 3.6
 
 int main(){
     string s1("Harry Potter");
     for(auto &i: s1){
         i = 'X';
     }

     cout << s1 << endl;
    return 0;
}
 
 */

/* 3.5
 
 int main(){
     string s1,s2;
   //输出大字符串
    //while(cin>>s1)
     //   s2+=s1;
    //cout << s2 << endl;
         
     //输出用空格分隔开的大字符串
    
     while(cin>>s1){
        s2 += s1;
        s2 += " ";
         
     }
     cout << s2 << endl;
    return 0;
}
 
 */

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
