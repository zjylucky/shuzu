#include <iostream>  
#include <vector>  
#include <algorithm> // 引入算法库，以便使用std::sort  
  
int main() {
    // 创建一个std::vector<int>来存储整数类型的无序数组  
    std::vector<int> unorderedArray = {3, 1, 4, 1, 5, 9, 2, 6};  
  
    // 检查vector是否为空(虽然在这个例子中它不为空)  
    if (!unorderedArray.empty()) {  
        // 遍历并打印数组元素  
        std::cout << "无序数组的内容为：" << std::endl;  
        for (size_t i = 0; i < unorderedArray.size(); ++i) {  
            std::cout << unorderedArray[i] << " ";  
        }  
        std::cout << std::endl;  
  
        // 另一种遍历vector的方式,使用范围for循环  
        std::cout << "使用范围for循环遍历数组:" << std::endl;  
        for (int num : unorderedArray) {  
            std::cout << num << " ";  
        }  
        std::cout << std::endl;  
  
        // 对vector进行排序  
        std::sort(unorderedArray.begin(), unorderedArray.end());  
  
        // 排序后遍历并打印数组元素  
        std::cout << "排序后的数组内容为：" << std::endl;  
        for (int num : unorderedArray) {  
            std::cout << num << " ";  
        }  
        std::cout << std::endl;  
    } else {  
        std::cout << "数组为空，没有元素可以显示。" << std::endl;  
    }  
  
    return 0;  
}