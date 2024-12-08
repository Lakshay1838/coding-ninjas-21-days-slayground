#include <vector>
using namespace std;

int mergeAndCount(vector<int>& a, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0, inversions = 0;

    while (i <= mid && j <= right) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
            inversions += (mid - i + 1);
        }
    }

    while (i <= mid) temp[k++] = a[i++];
    while (j <= right) temp[k++] = a[j++];

    for (int i = left; i <= right; ++i) {
        a[i] = temp[i - left];
    }

    return inversions;
}

int mergeSortAndCount(vector<int>& a, int left, int right) {
    if (left >= right) return 0;

    int mid = left + (right - left) / 2;
    int inversions = mergeSortAndCount(a, left, mid);
    inversions += mergeSortAndCount(a, mid + 1, right);
    inversions += mergeAndCount(a, left, mid, right);

    return inversions;
}

int numberOfInversions(vector<int>& a, int n) {
    return mergeSortAndCount(a, 0, n - 1);
}
