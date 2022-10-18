class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        
         int alice=0;
    int bob=0;

    while(piles.size()!=0)
    {
        sort(piles.begin(),piles.end());
        alice=alice+piles[piles.size()-1];
        bob=bob+piles[piles.size()-2];
        piles.pop_back();
        piles.pop_back();


    }

    if(alice > bob)
    {
        return true;
    }
    else
    {
        return false;
    }
        
    }
};