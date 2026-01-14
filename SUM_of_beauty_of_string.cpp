 class Solution {
public:

    int getmaxcount(int freq[]){
        int maxcount =0;
        for(int i=0;i<26;i++){
            maxcount = max(maxcount , freq[i]);
        }
        return maxcount;
    }

    int getmincount(int freq[]){
        int mincount = INT_MAX;
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                mincount = min(mincount, freq[i]);
            }
        }
        return mincount;
    }

    int beautySum(string s) {
          int sum =0;
          int n = s.length();


          for(int i=0;i<n;i++){
            int freq[26] = {0};
            for(int j=i ;j<n; j++){

                freq[s[j] - 'a']++;
                int beauty = getmaxcount(freq) - getmincount(freq);
                sum += beauty;
            }
          } 
          return sum;
    }
};
    