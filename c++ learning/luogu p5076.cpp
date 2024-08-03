#include <iostream>
#include <iomanip> // 用于控制输出精度
using namespace std;

int main() {
    double t;
    int n;
    
    // 输入 t 和 n
    cin >> t >> n;
    
    // 计算每名同学可以获得的毫升饮料
    double per_student = t / n;
    
    // 输出每名同学可以获得的毫升饮料，保留三位小数
    cout << fixed << setprecision(3) << per_student << endl;
    /*
    fixed：固定小数点显示。
    setprecision(3)：设置小数点后显示的位数为 3。
    per_student：输出每名同学可以获得的平均毫升数。
    endl;：换行输出。
    */
    // 计算一共需要的杯子数量
    int cups_needed = n * 2; // 每名同学需要 2 个杯子
    cout << cups_needed << endl;
    
    return 0;
}
