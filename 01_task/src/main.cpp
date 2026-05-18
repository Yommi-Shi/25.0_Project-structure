#include <iostream>
#include <string>
#include "tools.h"


int main() {
    std::cout << "Operation simulator\n";

    std::cout << "Operation commands:\n"
            "\tscalpel - takes two 2D coordinates as input\n"
            "\themostat - accepts one point as input\n"
            "\ttweezers - accepts one point as input\n"
            "\tsuture - a surgical needle that makes a suture between two specified points\n"
            "-> !!!The operation begins with the scalpel command!!!\n";

    Point start_point, end_point;
    Point suture_point1, suture_point2;
    bool operation_start = false;

    while (true) {
        std::cout << "Enter the command:\n";
        std::string command;
        std::cin >> command;

        if (command == "scalpel") {
            std::cout << "Enter the start and end points of the cut.\n";
            input_point(start_point);
            input_point(end_point);
            scalpel(start_point, end_point);
            operation_start = true;
        } else if (command == "hemostat" && operation_start) {
            Point p;
            input_point(p);
            hemostat(p);
        } else if (command == "tweezers" && operation_start) {
            Point p;
            input_point(p);
            tweezers(p);
        } else if (command == "suture" && operation_start) {
            std::cout << "Enter seam points\n";
            input_point(suture_point1);
            input_point(suture_point2);
            if (points_equal(suture_point1, suture_point2)) {
                suture(suture_point1, suture_point2);
                std::cout << "The operation is over\n";
                break;
            } else {
                suture(suture_point1, suture_point2);
            }
        } else {
            std::cout << "Unknown command\n";
        }
    }
}
