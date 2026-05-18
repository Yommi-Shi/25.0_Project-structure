#pragma once
#include <iostream>


struct Point {
    double x;
    double y;
};

void input_point(Point &p) {
    std::cout << "Enter point coordinates (x, y):";
    std::cin >> p.x >> p.y;
}

void print_point(Point &p) {
    std::cout << "(" << p.x << ", " << p.y << ")";
}

bool points_equal(Point &p1, Point &p2) {
    double epsilon = 1e-9;
    return (abs(p1.x - p2.x) < epsilon) && (abs(p1.y - p2.y) < epsilon);
}

void scalpel(Point &start, Point &end) {
    std::cout << "A cut is made between the points: ";
    print_point(start);
    std::cout << " and ";
    print_point(end);
    std::cout << ".\n";
}

void hemostat(Point &p) {
    std::cout << "The clamp is made at a point: ";
    print_point(p);
    std::cout << ".\n";
}

void tweezers(Point &p) {
    std::cout << "Tweezers applied to the point: ";
    print_point(p);
    std::cout << ".\n";
}

void suture(Point &p1, Point &p2) {
    std::cout << "The seam is made between the points: ";
    print_point(p1);
    std::cout << " and ";
    print_point(p2);
    std::cout << ".\n";
}