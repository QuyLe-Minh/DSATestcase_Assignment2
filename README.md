# DSAtestcase
# Update
- (04/19/2023 17:00) Welcome for your contributions. Please always tracking update session. If any further updates are made, kindly clone my repo again. Thank you!!!
- (04/20/2023 17:15) Fix bug in CLE command
# Introduction
The reason why I make this to support you and me to get 10 points at DSA assignment 2 <("). If you have any issues with my result, because of very long output, please open **ISSUES** after **very carefully checking** with heading according to format (TESTCASE _ LINE OF INPUT _ LINE OF EXPECTED) then describe it for me. 12 hours before deadline, I will close **ISSUES**, so please complete as soon as possible hehe.
# Note
- Inputs have no noise, maybe I'll add later.
- If you pass all testcase, please check if your expect files are empty or not, if empty, it means that the program is dumped.
# Set up
## 1. Clone my repos
- Make a cloned of my repository using the following command in git bash: 
```sh
git clone https://github.com/QuyLe-Minh/DSATestcase_Assignment2.git
```
## 2. main.cpp file
- Make a copy of your main file (restaurant.cpp) and the paste it to the same folder. For simplicity, please rename your copied file to **result.cpp** to make it synthesize with mine.
- In **main.cpp** file I've already made for you, include your copied file path. If you already rename to **result.cpp**, skip this step.
- Finally, change the input path folder to get input files. Details in file **main.cpp**.
## 3. result.cpp file
- Except all required command, there are no other *cout* in this file.
- In **simulate** funtion, change it to: 
```sh
void simulate(string filename, int testcase)
```
- Then, add the following code in the beginning of the result.cpp file (right below "include"):
 ```sh
ofstream outfile; 
```
-Then declare it in the simulate function
 ```sh
outfile.open("got" + to_string(testcase) + ".txt"); //don't forget to close at the end of the function
```
- Replace all **cout** in result.cpp file to  **outfile**. For example, instead of *cout << "Empty\n;* change to *outfile << "Empty\n"*.
- Finally, run main.cpp to get all the "got.txt" file. If you already have it, skip this step.
# Compile
- ASan is a powerful tool to check memory leak of your program and it works really well on Linux. You can read documentations of how to install it.
- (Optional) For checking memory leak, first change directory to your folder, then run the command below, in here I'm using gcc compiler:
 ```sh
g++ -fsanitize=address -g main.cpp -o main
./main
```
- Finally, change the output path folder in **test.cpp** (details in this file), run **test.cpp** file and debugging with me.

# Bottom line
This is only for reference purposes. I will not be responsible for any complaints regarding your grades.
