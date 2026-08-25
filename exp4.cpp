// Shivam Singh (2503201001090)
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6};

    for (const auto& value : numbers) {
        cout << value << endl;
    }
    return 0;
}
