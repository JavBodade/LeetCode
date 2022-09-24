class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        
        int cap=capacity;
        int steps=0;
        
        for(int i=0;i<plants.size();i++)
        {
            if(plants[i]>cap)
            {
                steps+=i+i+1;
                cap=capacity;
                cap=cap-plants[i];
            }
            else
            {
                cap=cap-plants[i];
                steps++;
            }
        }
        
        return steps;
        
    }
};