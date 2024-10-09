#include<iostream>
#include<cmath>
#include<vector>

using namespace std;
struct Coordinates {
    int x, y;
};

double distance(Coordinates first, Coordinates second) {
    double distance = sqrt(pow(first.x - second.x, 2) + pow(first.y - second.y, 2));
    return distance;
}

Coordinates nearest(Coordinates red, vector<Coordinates> blue) {

    double min = distance(red, blue[0]);
    Coordinates minCor = blue[0];

    for (int i = 1; i < blue.size(); i++) {
        double currentDistance = distance(red, blue[i]);
        if (currentDistance < min) {
            min = currentDistance;
            minCor = blue[i];
        }
    }
    return minCor;
}

int main() {
    return 0;
}
