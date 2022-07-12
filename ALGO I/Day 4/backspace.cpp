class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
          vector<vector<int>>ans;
        int i=0,j=0;
        while(i<firstList.size() and j<secondList.size()){
            vector<int>temp;
            if(firstList[i][1]<secondList[j][0]){
                i++;
                continue;
            }else if(firstList[i][0]>secondList[j][1]){
                j++;
                continue;
            }
            temp.push_back(max(firstList[i][0],secondList[j][0]));
             temp.push_back(min(firstList[i][1],secondList[j][1]));    
             ans.push_back(temp);
              if(firstList[i][1]>secondList[j][1]){
                  j++;
              }else if(firstList[i][1]<secondList[j][1]){
                  i++;
              }else if(firstList[i][1]==secondList[j][1]){
                  i++;
                  j++;
              }
        }
        return ans;
    }
};