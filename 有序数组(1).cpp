#include <iostream>  
#include <vector> // 使用vector代替原生数组，以支持动态大小  
#include <algorithm> // 包含std::sort  
  
using namespace std;  
  
int main() {  
    int n;  
    cout << "请输入数组的元素个数: ";  
    cin >> n; // 读取用户输入的数组大小  
  
    // 使用vector代替原生数组，因为vector的大小可以动态改变  
    vector<int> arr(n);  
  
    cout << "请输入" << n << "个整数（用空格分隔）: ";  
    for(int i = 0; i < n; i++) {  
        cin >> arr[i]; // 读取用户输入的每个元素  
    }  
  
    // 使用std::sort对vector进行排序  
    sort(arr.begin(), arr.end());  
  
    // 打印排序后的vector以验证其有序性  
    cout << "排序后的数组为: ";  
    for(int i = 0; i < n; i++) {  
        cout << arr[i] << " ";  
    }  
    cout << endl;  
  
    return 0;  
}
