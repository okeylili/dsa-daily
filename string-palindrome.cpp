class Solution{	
	public:		
		bool palindromeCheck(string& s){
			int left = 0, right = s.length()-1;
            while(left<right) {
                if(!isalnum(s[left])) left++;
                else if(!isalnum(s[right])) right--;
                else if(tolower(s[left])!=tolower(s[right])) {
                    return false;
                }
                else {
                    left++;
                    right--;
                }
            }
            return true;
		}
};

class Solution{	
	public:		
		bool palindromeCheck(int i, string& s){
			if(i>=s.length()/2) return true;
            if(s[i]!= s[s.length()-i-1]) return false;
            return palindromeCheck(i+1, s);
		}
};
