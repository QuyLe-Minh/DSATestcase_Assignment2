#include "main.h"
#include "result.cpp"

int main(int argc, char* argv[]) {
    for (int tc = 1; tc <= 100; tc++){
        //  EDIT HEREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
        string fileName = "C:\\Users\\Admin\\OneDrive\\ass2\\testcase\\input\\input" + to_string(tc) + ".txt";  //<-------- Throw your output folder path here and add additional \ in your path. Then add \\expected. In general, your path will look similar mine.
        simulate(fileName, tc);
    }

    return 0;
}
