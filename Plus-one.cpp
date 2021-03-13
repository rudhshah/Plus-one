class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> x;
        int temp = 0;
        int carry  =1;
        for(int i = digits.size()- 1; i >=0; i--){
            temp = digits[i] + carry;
            if(temp > 9){
                digits[i] = 0;
                carry = 1;
            }
            else{
                digits[i] = temp;
                carry = 0;
                return digits;
            }
        }
        if(carry == 1){
            x.push_back(1);
            for(int i: digits){
                x.push_back(i);
            }
            return x;
        }
        return digits;
    }
};
