#include <vector>
#include <algorithm> // for std::min_element
#include <limits>    // for std::numeric_limits
#include <stdexcept> // for std::invalid_argument

class Universe {
public:
    // Returns the smallest number in the list. Throws if the list is empty.
    int GetMinimumNumber(std::vector<int>& numbers);
};

int Universe::GetMinimumNumber(std::vector<int>& numbers) {
    if (numbers.empty()) {
        throw std::invalid_argument("Input list cannot be empty.");
    }
    return *std::min_element(numbers.begin(), numbers.end());
}
