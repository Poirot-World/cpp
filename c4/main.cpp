//
//  main.cpp
//  c4
//
//  Created by Huizhi on 02.11.20.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;
using std::string;


/*
 //
int main() {

    cout << "Hello, World!\n";
    return 0;
}
 */

/* */
 //4.24
//右结合 finalgrade = (grade > 90 ) ? "hihg pass" :((grade < 60)? "fail":"pass");
//左结合 finalgrade = ((grade > 90 ) ? "hihg pass" :(grade < 60))? "fail":"pass"; --> fail



/*
 //4.23
int main() {
    
    string s = "word";
    string pl = s + ((s[s.size() - 1] =='s')?"":"s");
    cout << pl << endl;
    return 0;
}

 */

/*
//4.22

int main() {
    
    cout << "请输入成绩!\n";
    int grade;
    cin >> grade;
    //condition
    cout << ((grade < 60)?"fail":((grade>=60 && grade <75)?"low pass":((grade>=75 && grade <90)?"pass":"high pass")));
    cout << endl;
    
    
    // if eles
    if(grade<60){
        cout << "fail"<< endl;
        
    }else if (grade >=60 && grade <75){
        cout << "low pass"<< endl;
    }else if (grade >=75 && grade <90){
        cout << "pass"<< endl;
    }else{
        cout << "high pass"<< endl;
    }
    return 0;
}
 
*/


/*
//4.21/
int main() {

    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    //vector<int> v1(size_t(v));
    
    for(auto i: v){
        cout << (((i &1)==0)? i:i*2)<<endl;
    }
    
    
    return 0;
}
 */

/* */
 //4.16  if( (p = getPtr())!=0); if(i == 1024)


/* */
 //4.15  指针分开赋值

/* */
 //4.15  指针分开赋值


/* */
 //4.14  if(42 = i ) 编译错误  if(i =42) 编译正确


/*
 //4.13 （1） d = 3.0; i = 3 (2) d = 3.5; i = 3

int main() {
    
    int i;
    double d;
    d = i = 3.5;
    cout << d << "\n" << i << endl;
    i = d = 3.5;
    cout << d << "\n" << i << endl;
    


    return 0;
}
 */


/*
 //4.12 (i!=(j<k))  */


/*
 //4.11 a>b && b>c &&c>d */





 
/*
  //4.10 优化版 ： 把赋值语句放在条件当中
 int main() {
     int i;
     while( cin >>i &&  i!=42 ){
         ;
     }
     
     return 0;
 }
 

 //4.10
int main() {
    int i=0;
    while(i!=42){
        cin >> i;
    }
    
    return 0;
}
 */

 
/*
 //4.9 if判断首字母是否为空
int main() {
    const char *cp = "hello world";
  
    cout << (cp && *cp) << endl;
    return 0;
}*/
 

/*
 //4.6 判断奇偶数，用二进制与上1, 1的16进制是0x1，value & 0x1
int main() {
    int value;
    cin >> value;
    value = value & 1; // a = value & 0x1;
    cout <<  value << endl;
    return 0;
}
 */

/*
 //4.5  -86, -18, 11, -2
int main() {
    cout << -30 * 3 + 21 / 5 <<endl;
    cout << -30 + 3 * 21 / 5 <<endl;
    cout << 30 / 3 + 21 % 5 <<endl;
    cout << -30 / 3 * 21 % 4 <<endl;
    return 0;
}

 */

/*
 //4.4, 91
int main() {

    cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 <<endl;
    return 0;
}
 */



/*
 //4.0

int main() {
   
    cout << 5+10*20/2 <<endl;
    return 0;
}
 */
