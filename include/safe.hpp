#ifndef SAFE_HPP
#define SAFE_HPP

class safe {
private:
    int value, zeroes_count = 0;

    void normalize() {
        // Keep value between 0-99
        value = value % 100;
        if (value < 0) value += 100;
    }

public:
    safe(int initial) : value(initial) {}

    void turnLeft(int amount) {
        int old_value = value;
        if (value == 0){
            old_value+=100;
        }
        value = value - amount;
        if (amount < old_value)
        {
            // do nothing
        }
        else
        {
            zeroes_count += abs(value / 100) +1;
        }normalize();
    }

    void turnRight(int amount) {
        value = value + amount;
        zeroes_count += value / 100;
        normalize();
    }    
    
    int current() const {
        return value;
    }

    int zeroes() const {
        return zeroes_count;
    }

    void reset(int initial) {
        value = initial;
        zeroes_count = 0;
    }

};

#endif
