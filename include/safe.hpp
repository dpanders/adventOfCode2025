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
        for(int i = 0; i < amount; i++) {
            value--;
            normalize();
            if (value == 0) {
                zeroes_count++;
            }
        }
    }

    void turnRight(int amount) {
        for(int i = 0; i < amount; i++) {
            value++;
            normalize();
            if (value == 0) {
                zeroes_count++;
            }
        }
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
