class Solution {
public:
    double r;
    double x;
    double y;
    Solution(double radius, double x_center, double y_center) {
        r = radius;
        x = x_center;
        y = y_center;
    }
    
    vector<double> randPoint() {
        
        double distance = sqrt((double)rand() / RAND_MAX) * r;
        double theta = ((double)rand() / RAND_MAX) * 2 * M_PI;
        
        return {x + distance * cos(theta), y + distance * sin(theta)};
    }
    
};