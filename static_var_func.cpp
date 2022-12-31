#include <iostream>

using namespace std;

// A static function
static void sayHi()
{
    cout << "Hi!" << endl;
}

int main()
{
    // A static variable
    static int count = 0;

    sayHi();
    count++;
    cout << "count: " << count << endl;

    return 0;
}
// the sayHi function is a static function, which means that it is only visible within the file it is defined in. The count variable is a static variable, which means that it is initialized only once and retains its value between function calls.