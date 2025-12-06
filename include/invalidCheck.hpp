#ifndef INVALID_CHECK_HPP
#define INVALID_CHECK_HPP

// Check if a number is invalid based on some criteria
bool invalidCheck(long long value) {
    std::string str = std::to_string(value);
    
    if (str.length()%2 == 1) {
        return false;
    }
    int mid = str.length()/2;
    for (int i=0; i<mid; i++) {
        if (str[i] != str[mid + i]) {
            return false;
        }
    }
    return true;
}

#endif
