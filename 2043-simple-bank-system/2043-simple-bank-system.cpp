class Bank {
public: 
    
    vector<long long> arr;
    Bank(vector<long long>& balance) {
        
        arr=balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        
        if(account1 > arr.size() || account2 > arr.size())
        {
            return false;
        }
        if(arr[account1-1] < money)
        {
            return false;
        }
        else
        {
            arr[account1-1]=arr[account1-1]-money;
            arr[account2-1]=arr[account2-1]+money;
            
            return true;
        }
        
    }
    
    bool deposit(int account, long long money) {
        
        if(account > arr.size())
        {
            return false;
        }
        else
        {
            arr[account-1]=arr[account-1]+money;
            
            return true;
            
        }
        
    }
    
    bool withdraw(int account, long long money) {
        
        if(account > arr.size())
        {
            return false;
        }
        if(arr[account-1] < money)
        {
            return false;
        }
        else
        {
            arr[account-1]=arr[account-1]-money;
            return true;
        }
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */