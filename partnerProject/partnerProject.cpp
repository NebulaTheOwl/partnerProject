#include <iostream>
#include "Vec3.h"
#include "file.h"

int main(){
    std::cout << "Hello World!\n";
    Vec3 testVec = Vec3(1.0f, 2.0f, 3.0f);
    fileFunction();
    testVec.y = addToNum(testVec.y);
    std::cout << "Test vector: " << testVec.x << ", " << testVec.y << ", " << testVec.z << "\n";
}
