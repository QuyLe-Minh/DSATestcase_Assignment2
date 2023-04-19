#include "main.h"
#include "result.cpp"

int main(int argc, char* argv[]) {
    for (int tc = 1; tc <= 100; tc++){
        string fileName = "C:\\Users\\Admin\\OneDrive\\ass2\\testcase\\input\\input" + to_string(tc) + ".txt";
        simulate(fileName, tc);
    }

    return 0;
}
