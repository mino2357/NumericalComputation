// ニュートン法を用いて2の平方根を求めるプログラム
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main() {
    auto x = 20.0; // 初期値は20.0とする

    for(int i=0; i<10; ++i) {
        x = x - (x * x - 2) / (2 * x);
        // 15桁出すのは https://cpprefjp.github.io/reference/iomanip/setprecision.html を参考
        std::cout << i << " " << std::fixed << std::setprecision(15) << x << " " << std::abs(x - std::sqrt(2.0))  << std::endl;
    }
}