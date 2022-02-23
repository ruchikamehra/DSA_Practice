class Solution {
public:
    vector<int> minOperations(string boxes) {
      vector<int>result;
       int sum;
        for(int i=0;i<boxes.size();i++){
              sum=0;
            for(int j=0;j<boxes.size();j++)
            {
                if(boxes[j]=='1')
                {
                    sum=sum+fabs(j-i);
                }
                    
            }
            result.push_back(sum);
        }
        return result;
    }
};
