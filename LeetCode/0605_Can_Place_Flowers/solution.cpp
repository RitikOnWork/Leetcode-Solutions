class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {

                if (i == 0) {
                    if (size == 1 || flowerbed[i + 1] != 1) {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                else if (i == size - 1) {
                    if (flowerbed[i - 1] != 1) {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                else {
                    if (flowerbed[i - 1] != 1 && flowerbed[i + 1] != 1) {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
            }
        }

        return n <= 0;
    }
};