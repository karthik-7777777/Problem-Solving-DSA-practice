class Solution {
public:
    double angleClock(int hour, int minutes) {
        double h;
        if(hour==12) h=0;
        else h=hour*5;
        double temp=(minutes/60.0)*5.0;
        h=(h+temp)*6;
        double m=minutes*6.0;
        cout << h << " " << m << endl;
        return min(abs(h-m),360.0-abs(h-m));
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna