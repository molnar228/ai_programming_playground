#include<iostream>
#include<string>
int main() {
    std::string weather;
    std::cout << "Please enter the current weather (sunny, rainy, cloudy, snowy, windy): ";
    std::cin >> weather;

    if (weather == "snowy" || weather == "rainy") 
        std::cout << "You should wear a jacket today.\n";
     else 
        std::cout << "You don't need a jacket today.\n";
    
    if (weather == "sunny") 
        std::cout << "It's a great day for a picnic!\n";
     else if (weather == "rainy") 
        std::cout << "Perfect weather to read a book inside!\n";
     else if (weather == "cloudy") 
        std::cout << "Maybe visit a museum?\n";
     else if (weather == "snowy") 
        std::cout << "How about building a snowman?\n";
     else if (weather == "windy") 
        std::cout << "Fly a kite if you have one!\n";

    switch (weather[0]) { 
        case 's': 
            if(weather == "sunny") 
                std::cout << "Wear your favorite sneakers!\n";
             else 
                std::cout << "Snow boots will keep your feet warm!\n";
            break;
        case 'r':
            std::cout << "Rain boots are a good idea!\n";
            break;
        case 'c':
            std::cout << "Any footwear is fine today.\n";
            break;
        case 'w':
            std::cout << "Wear something sturdy!\n";
            break;
        default:
            std::cout << "Invalid weather condition input.\n";
            break;
    }
    return 0;
}
