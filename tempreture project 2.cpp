#include <iostream>
#include <string>
#include <vector>

class Temperature {
private:
    double temperature;

public:
    // Constructor
    Temperature(double temp = 0) : temperature(temp) {}

    // Accessor and Mutator
    double getTemperature() const {
        return temperature;
    }

    void setTemperature(double temp) {
        temperature = temp;
    }

    // Functions to test freezing and boiling
    bool isEthylFreezing() const {
        return temperature <= -114; // Freezing point of Ethyl Alcohol
    }

    bool isEthylBoiling() const {
        return temperature >= 78.37; // Boiling point of Ethyl Alcohol
    }

    bool isOxygenFreezing() const {
        return temperature <= -218.79; // Freezing point of Oxygen
    }

    bool isOxygenBoiling() const {
        return temperature >= -182.96; // Boiling point of Oxygen
    }

    bool isWaterFreezing() const {
        return temperature <= 0; // Freezing point of Water
    }

    bool isWaterBoiling() const {
        return temperature >= 100; // Boiling point of Water
    }

    bool isMercuryFreezing() const {
        return temperature <= -38.83; // Freezing point of Mercury
    }

    bool isMercuryBoiling() const {
        return temperature >= 356.73; // Boiling point of Mercury
    }

    // Check freezing and boiling for all substances
    void checkFreezing(std::vector<std::string>& freezingSubstances) const {
        if (isEthylFreezing()) freezingSubstances.push_back("Ethyl Alcohol");
        if (isOxygenFreezing()) freezingSubstances.push_back("Oxygen");
        if (isWaterFreezing()) freezingSubstances.push_back("Water");
        if (isMercuryFreezing()) freezingSubstances.push_back("Mercury");
    }

    void checkBoiling(std::vector<std::string>& boilingSubstances) const {
        if (isEthylBoiling()) boilingSubstances.push_back("Ethyl Alcohol");
        if (isOxygenBoiling()) boilingSubstances.push_back("Oxygen");
        if (isWaterBoiling()) boilingSubstances.push_back("Water");
        if (isMercuryBoiling()) boilingSubstances.push_back("Mercury");
    }
};

int main() {
    double userTemp;
    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> userTemp;

    // Create Temperature object
    Temperature temp(userTemp);

    // Vectors to store substances that freeze or boil
    std::vector<std::string> freezingSubstances;
    std::vector<std::string> boilingSubstances;

    // Check freezing and boiling
    temp.checkFreezing(freezingSubstances);
    temp.checkBoiling(boilingSubstances);

    // Output results
    std::cout << "\nSubstances that will freeze at " << userTemp << " degrees Celsius:\n";
    for (const auto& substance : freezingSubstances) {
        std::cout << "- " << substance << "\n";
    }

    std::cout << "\nSubstances that will boil at " << userTemp << " degrees Celsius:\n";
    for (const auto& substance : boilingSubstances) {
        std::cout << "- " << substance << "\n";
    }

    return 0;
}
