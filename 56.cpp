/*logic :
Algorithm:-

Firstly, the base case : if there are no intervals return [] .
Sort the intervals .
While traversing the intervals vector we will come accross two coditions
First condition : if there is a overlapping between the intervals then just take out the max element from the ending point and thus we merged them
eg:- [1,4],[2,8] =Mergerd intervals will be> [1,8]
second condition : if there is no overlapping then simply push those interval to our resultant vector .
*/
//Comment and Upvote

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        vector<vector<int>> result;
        //base case when threr are no intervals
        if(interval.size()==0)return result;
        //sort takes O(nlogn) time
        sort(interval.begin(),interval.end());
        //insert the the the first interval in the result
        result.push_back(interval[0]);
        int j=0;
        //Traverse the whole vector .Takes O(n) time
        for(int i=1;i<interval.size();i++)
        {
            //if intevals are overlapping
            if(result[j][1]>=interval[i][0]) result[j][1]=max(result[j][1],interval[i][1]);
            //else they are not overlapping
            else
            {
                j++;
                result.push_back(interval[i]);
            }
        }
        return result;
    }
};