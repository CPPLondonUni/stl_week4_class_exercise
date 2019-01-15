#include <iostream>
#include <string>
#include <vector>

void print(const std::vector<std::string>& vec)
{
    std::cout << '[';
    for (const auto& str : vec) {
        std::cout << str << ' ';
    }
    std::cout << "]\n";
}

int main()
{
    // 1.1: Create an empty vector and print it
    std::vector<std::string> vec{};
    print(vec);

    // 1.2: Add various items to the shopping list
    vec.push_back("eggs");
    vec.push_back("milk");
    vec.push_back("sugar");
    vec.push_back("chocolate");
    vec.push_back("flour");

    print(vec);

    // 1.3 Remove the last item and print the list again
    vec.pop_back();
    print(vec);

    // 1.4 Add "coffee" to the vector
    vec.emplace_back("coffee");
    print(vec);

    // 1.5 Use a loop to replace "sugar" with "honey"
    for (auto& str : vec) {
        if (str == "sugar") {
            str = "honey";
        }
    }
    print(vec);

    // 1.6 Use a loop to find "milk" and remove it from the vector
    auto milk_pos = vec.end();
    for (auto i = vec.begin(); i != vec.end(); ++i) {
        if (*i == "milk") {
            milk_pos = i;
            break;
        }
    }
    // or
    // auto milk_pos = std::find(vec.begin(), vec.end(), "milk");
    vec.erase(milk_pos);
    print(vec);

    // Or use the "erase-remove idiom":
    // vec.erase(std::remove(vec.begin(), vec.end(), "milk"), vec.end());
}