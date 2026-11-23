
#include <iostream>
#include <string>

struct MathVariable {
    int options;
    double x, y, sum;
    std::string YNOptions;


};


MathVariable MainDisplay() {
    MathVariable MV01;

    std::cout << "\n";

    std::cout << R"(                                                  
▄█████  ▄▄▄  ▄▄     ▄▄▄▄ ▄▄ ▄▄ ▄▄     ▄▄▄ ▄▄▄▄▄▄ ▄▄▄  ▄▄▄▄  
██     ██▀██ ██    ██▀▀▀ ██ ██ ██    ██▀██  ██  ██▀██ ██▄█▄ 
▀█████ ██▀██ ██▄▄▄ ▀████ ▀███▀ ██▄▄▄ ██▀██  ██  ▀███▀ ██ ██ 
 
 > Additions (1)
 > Subtractions (2)
 > Multiplications (3)
 > Divisions (4)
 > Modulo (5)
 > Exit (6)

    )" << "\n";

    std::cout << "[Enter Options]: "; std::cin >> MV01.options;
    std::cout << "\n";

    return MV01;
} 

MathVariable AskToContinue() {

    MathVariable MV08;;
    int j = 0;

    while (j < 1) {

        std::cout << "Wish To Continue? [Y/N]: "; std::cin >> MV08.YNOptions;
        std::cout << "\n";

        if (MV08.YNOptions == "Y" && MV08.YNOptions == "y") {
            MainDisplay();
        }

        else if (MV08.YNOptions == "N" && MV08.YNOptions == "n") {
            std::cout << "THANKS YOU !" << "\n";
            std::exit(0);
        }

        else {
            "There Only had Y / N";
        }

        j++;
    }

    return MV08;

}

MathVariable Additions(double x, double y) {
    MathVariable MV00;

    std::cout << R"(                                                         
▄████▄ ▄▄▄▄  ▄▄▄▄ ▄▄▄▄▄▄ ▄▄  ▄▄▄  ▄▄  ▄▄  ▄▄▄▄ 
██▄▄██ ██▀██ ██▀██  ██   ██ ██▀██ ███▄██ ███▄▄ 
██  ██ ████▀ ████▀  ██   ██ ▀███▀ ██ ▀██ ▄▄██▀ 
                                                
    )" << "\n";

    std::cout << "[Enter Value 1]: "; std::cin >> x;
    std::cout << "[Enter Value 2]: "; std::cin >> y;

    MV00.sum = x + y;

    std::cout << "Result: " << MV00.sum << "\n";
    AskToContinue();

    return MV00;
}

MathVariable Subtractions(double x, double y) {
    MathVariable MV02;

    std::cout << R"(                                                                  
▄█████ ▄▄ ▄▄ ▄▄▄▄ ▄▄▄▄▄▄ ▄▄▄▄   ▄▄▄   ▄▄▄▄ ▄▄▄▄▄▄ ▄▄  ▄▄▄  ▄▄  ▄▄  ▄▄▄▄ 
▀▀▀▄▄▄ ██ ██ ██▄██  ██   ██▄█▄ ██▀██ ██▀▀▀   ██   ██ ██▀██ ███▄██ ███▄▄ 
█████▀ ▀███▀ ██▄█▀  ██   ██ ██ ██▀██ ▀████   ██   ██ ▀███▀ ██ ▀██ ▄▄██▀                                                                
    )" << "\n";

    std::cout << "[Enter Value 1]: "; std::cin >> x;
    std::cout << "[Enter Value 2]: "; std::cin >> y;

    MV02.sum = x - y;

    std::cout << "Result: " << MV02.sum << "\n";
    AskToContinue();

    return MV02;
}

MathVariable Multiplications(double x, double y) {
    MathVariable MV03;

    std::cout << "[Enter Value 1]: "; std::cin >> x; 
    std::cout << "[Enter Value 2]; "; std::cin >> y;

    MV03.sum = x * y;
    std::cout << "[Result]: " << MV03.sum;

    AskToContinue();

    return MV03;

}

MathVariable Divisions(double x, double y) {
    MathVariable MV04;
    std::cout << R"(                                                                    
██▄  ▄██ ▄▄ ▄▄ ▄▄   ▄▄▄▄▄▄ ▄▄ ▄▄▄▄  ▄▄    ▄▄  ▄▄▄▄  ▄▄▄ ▄▄▄▄▄▄ ▄▄  ▄▄▄  ▄▄  ▄▄  ▄▄▄▄ 
██ ▀▀ ██ ██ ██ ██     ██   ██ ██▄█▀ ██    ██ ██▀▀▀ ██▀██  ██   ██ ██▀██ ███▄██ ███▄▄ 
██    ██ ▀███▀ ██▄▄▄  ██   ██ ██    ██▄▄▄ ██ ▀████ ██▀██  ██   ██ ▀███▀ ██ ▀██ ▄▄██▀                                                                                
    )" << "\n";

    std::cout << "[Enter Value 1]: "; std::cin >> x;
    std::cout << "[Enter Value 2]: "; std::cin >> y;

    MV04.sum = x / y;

    std::cout << "Result: " << MV04.sum;
    AskToContinue();

    return MV04;
}

MathVariable Modulo(int x, int y) { // lesson if declare the variable inside the functions just.. 
                                    // dont make it complicated to make another one. just use the functions Variable Declarations one instead.

    MathVariable MV05;
    std::cout << R"(                                      
██▄  ▄██  ▄▄▄  ▄▄▄▄  ▄▄ ▄▄ ▄▄     ▄▄▄  
██ ▀▀ ██ ██▀██ ██▀██ ██ ██ ██    ██▀██ 
██    ██ ▀███▀ ████▀ ▀███▀ ██▄▄▄ ▀███▀                                      
    )" << "\n";

    std::cout << "[Enter Value 1]: "; std::cin >> x;
    std::cout << "[Enter Value 2]: "; std::cin >> y;

    if (x == 0) {
        std::cout << "Value 1 Cannot Be zero" << "\n";

    }

    else if ( y == 0) {
        std::cout << "Value 2 Cannot Be Zero" << "\n";
    }

    MV05.sum = x % y;
    std::cout << "[Result] [Reminder]: " << MV05.sum;

    AskToContinue();

    return MV05;
}

 int main() {
    MathVariable MV09;

    MV09 = MainDisplay();

    int k = 0;

    while (k < 3) {

        if (MV09.options == 1) {
            Additions(MV09.x, MV09.y);
        }

        else if (MV09.options == 2) {
            Subtractions(MV09.x, MV09.y);
        }

        else if (MV09.options == 3) {
            Multiplications(MV09.x, MV09.y);
        }

        else if (MV09.options == 4) {
            Divisions(MV09.x, MV09.y);
        }

        else if (MV09.options == 5) {
            Modulo(MV09.x, MV09.y);
        }

        else {
            "There Only Had 1-7 Only";
        }

        k++;
      }

    return 0;

 }
