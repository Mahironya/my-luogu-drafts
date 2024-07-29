#include<iostream>    //iostream是输入输出流的头文件，使用包含头文件的命令#include将该文件的内容嵌入此代码的所在文件中。
using namespace std;  //引入标准输入输出的命名空间std，让编译器能够识别cin,cout,endl等标识符
int main(){
    int a,b,c;
    cin>>a>>b;    //输入流
    c = a*b;
    cout<<a<<"*"<<b<<"="<<c<<endl;    //c++输出流，用于输出数据
    return 0;
}