class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while(n > 0){
            int lastdigit = n & 1;
            count += lastdigit;
            n = n >> 1;
        }

        return count;
    }
};