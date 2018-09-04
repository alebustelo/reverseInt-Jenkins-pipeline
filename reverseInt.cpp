#include <iostream>

#include <string>
class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        if (x < 0) {
            sign = -1;
        }
        x *= sign;
        int reverseInt = 0;
        bool overflow = false;
        while (x > 0) {
            reverseInt += x % 10;
            x /= 10;
            if (x > 0) {
                if (reverseInt > 214748364 && x % 10 != 0) {
                    overflow = true;
                }
                reverseInt *= 10;
            }
        }
        reverseInt *= sign;
        if (overflow) {
            reverseInt = 0;
        }
        return reverseInt;
    }
};

int main(int argc, char *argv[]){
    Solution *sol = new Solution();
    int num = 0;
    if (argc < 2 ) {
        std::cout << "Type in a number to reverse: ";
        std::cin >> num;
    } else {
        num = atoi(argv[1]);
    }
    std::cout << sol->reverse(num) << std::endl;
    delete sol;
    return 0;
}
