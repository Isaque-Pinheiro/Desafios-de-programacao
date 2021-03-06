class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            int a = arr[i];
            for (int j = i + 1; j < arr.size(); j++) {
                a ^= arr[j];
                int b = arr[j];
                for (int k = j; k < arr.size(); k++) {
                    b ^= arr[k];
                    if (a == b) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
