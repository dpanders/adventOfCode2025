#ifndef SAFE_HPP
#define SAFE_HPP

class safe {
private:
    int value;

    void normalize() {
        // Keep value between 0-99
        value = value % 100;
        if (value < 0) value += 100;
    }

public:
    safe(int initial) : value(initial) {}

    void turnLeft(int amount) {
        value = value - amount;
        normalize();
    }

    void turnRight(int amount) {
        value = value + amount;
        normalize();
    }    int current() const {
        return value;
    }

    int zeroes() const {
        // Count the number of zeroes in the current value
        int count = 0;
        int temp = value;
        
        if (temp == 0) return 1;
        
        while (temp > 0) {
            if (temp % 10 == 0) count++;
            temp /= 10;
        }
        return count;
    }

};

#endif
