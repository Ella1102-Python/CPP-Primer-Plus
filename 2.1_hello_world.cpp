// hello_world.cpp -- displays a message

// 预处理器：处理名称以#开头的编译指令，将在程序编译时自动运行（在源代码被编译前，替换或添加文本）
# include <iostream>     // 预处理编译指令，让预处理器将iostream文件（包含文件/头文件）的内容添加到程序中

int main()    // 函数头
{   // 函数体，用{}括起
    using namespace std;    // 编译指令，使用名称空间
    cout << "Hello World!" << endl;    // cout工具输出（流），endl表示重启一行
    cout << "Hello C++ World!" << endl;
    system("pause");
    return 0;    // 结束函数，返回值（main 函数可省略该语句），返回给操作系统
} 