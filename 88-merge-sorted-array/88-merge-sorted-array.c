void merge(int* n1, int nums1Size, int len1, int* n2, int nums2Size, int len2){
    int i = len1 - 1, j = len2 - 1, k = len1 + len2 - 1;
    while (i >= 0 && j >= 0)
        n1[k--] = (n1[i] >= n2[j]) ? n1[i--] : n2[j--];
    while (j >= 0)
        n1[k--] = n2[j--];
}