class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1,nums2);
        }
        int m = nums1.size();
        int n = nums2.size();
        
        int low = 0 ; 
        int high = m ;
        
        while (low <= high){
            int partitionX = (low + high) / 2 ;
            int partitionY = (m + n + 1 ) / 2 - partitionX;

            int leftX , leftY , rightX , rightY;
            
            leftX = (partitionX == 0 ) ? INT_MIN : nums1[partitionX - 1];
            rightX = (partitionX == m ) ? INT_MAX : nums1[partitionX];

            leftY = (partitionY == 0 ) ? INT_MIN : nums2[partitionY - 1];
            rightY = (partitionY == n ) ? INT_MAX : nums2[partitionY];

            if(leftX <= rightY && leftY <= rightX ){
                
                if( (m + n) % 2 == 0 ){
                    return (max(leftX , leftY) + min(rightX , rightY )) /2.0;
                }
                
                else{
                    return (max(leftX , leftY));
                }

            }
            if( leftX > rightY ){
                high = partitionX - 1;
            }
            else{
                low = partitionX + 1;
            }
        }
        return 0.0 ;

        
    }
};