#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    char a = my_string[num1];
    my_string[num1] = my_string[num2];
    my_string[num2] = a;
    return my_string;
}