#include <iostream>
using namespace std;

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

pair<Coordinates , int> nearest(Coordinates red, vector<Coordinates> blue) {

    double min = distance(red, blue[0]);
    int index;
    Coordinates minCor = blue[0];
    index = 0;
    for (int i = 1; i < blue.size(); i++) {
        double currentDistance = distance(red, blue[i]);
        if (currentDistance < min) {
            min = currentDistance;
            minCor = blue[i];
            index = i;
        }
    }
    return make_pair(minCor , index);
}

vector<Coordinates> bestPath(Coordinates red, vector<Coordinates> blue) {
    vector<Coordinates> bestPath;
    int index;
    while (!blue.empty()) {
        pair<Coordinates, int> nearestResult = nearest(red, blue);
        Coordinates theNearPoint = nearestResult.first;
        index = nearestResult.second;
        bestPath.push_back(theNearPoint);
        blue.erase(blue.begin() + index);
        red = theNearPoint;
    }
    return bestPath;
}


int main() {
    return 0;
}
