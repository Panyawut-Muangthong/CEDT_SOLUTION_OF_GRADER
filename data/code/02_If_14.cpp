#include <iostream>
int main() {
    std::string id_1; std::cin >> id_1;
    double grade_1; std::cin >> grade_1;
    char comprog_1, cal1_1, cal2_1; std::cin >> comprog_1 >> cal1_1 >> cal2_1;
    std::string id_2; std::cin >> id_2;
    double grade_2; std::cin >> grade_2;
    char comprog_2, cal1_2, cal2_2; std::cin >> comprog_2 >> cal1_2 >> cal2_2;
    if(comprog_1 == 'A') {
        if(comprog_2 == 'A') {
            if(cal1_1 <= 'C' && cal2_1 <= 'C') {
                if(cal1_2 <= 'C' && cal2_2 <= 'C') {
                    if(grade_1 > grade_2) std::cout << id_1;
                    else if(grade_2 > grade_1) std::cout << id_2;
                    else {
                        if(cal1_1 < cal1_2) std::cout << id_1;
                        else if(cal1_2 < cal1_1) std::cout << id_2;
                        else {
                            if(cal2_1 < cal2_2) std::cout << id_1;
                            else if(cal2_2 < cal2_1) std::cout << id_2;
                            else std::cout << "Both";
                        }
                    }
                } else {
                    std::cout << id_1;
                }
            } else {
                if(cal1_2 <= 'C' && cal2_2 <= 'C') {
                    std::cout << id_2;
                } else {
                    std::cout << "None";
                }
            }
        } else {
            std::cout << id_1;
        }
    } else if(comprog_2 == 'A') std::cout << id_2;
    else std::cout << "None";
}