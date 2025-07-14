#include <algorithm>
#include <vector>
using namespace std;

class Solution {
  public:
    // Declare static members
    static int* phyArr;
    static int* chemArr;
    static int* mathArr;

    // Static compare function
    static bool compare(int a, int b) {
        if (phyArr[a] != phyArr[b])
            return phyArr[a] < phyArr[b];
        if (chemArr[a] != chemArr[b])
            return chemArr[a] > chemArr[b];
        return mathArr[a] < mathArr[b];
    }

    void customSort(int phy[], int chem[], int math[], int N) {
        phyArr = phy;
        chemArr = chem;
        mathArr = math;

        vector<int> index(N);
        for (int i = 0; i < N; ++i) {
            index[i] = i;
        }

        sort(index.begin(), index.end(), compare);

        int sortedPhy[N], sortedChem[N], sortedMath[N];
        for (int i = 0; i < N; ++i) {
            sortedPhy[i] = phy[index[i]];
            sortedChem[i] = chem[index[i]];
            sortedMath[i] = math[index[i]];
        }

        for (int i = 0; i < N; ++i) {
            phy[i] = sortedPhy[i];
            chem[i] = sortedChem[i];
            math[i] = sortedMath[i];
        }
    }
};

int* Solution::phyArr = nullptr;
int* Solution::chemArr = nullptr;
int* Solution::mathArr = nullptr;