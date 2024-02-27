class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0)) {
            return false;
        }

        int reversed = 0;
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        return (x == reversed) || (x == reversed / 10);
    }
};

/*

NOTES: Why does this code not work

class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        int reversed = 0;

        while (original > 0){
            int index = original % 10;
            reversed = reversed * 10 + index;
            original /= 10;
        }
        return reversed == x;
    }
};


*/