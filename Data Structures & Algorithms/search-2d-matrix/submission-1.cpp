class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        if (matrix.empty() || matrix[0].empty()) return false;
        vector<int>arr(m*n);
        int k=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[k]=matrix[i][j];
                k++;

            }
        }
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)
        return true;
        else if(target > arr[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    return false;
    }
};
