class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> vec;
        if(words.empty()){
            return vec;

        }
        string r1= "qwertyuiop";
        string r2="asdfghjkl";
        string r3="zxcvbnm";
        
        for(auto word:words){
            int cnt=word.size();
            int r=0;
            int rr=0;
            int rrr=0;
            for(auto w :word){
                if(r1.find(tolower(w)) != string::npos){
                    r++;

                }
                if(r2.find(tolower(w)) != string::npos){
                    rr++;

                }
                if(r3.find(tolower(w)) != string::npos){
                    rrr++;

                }
                if(r==cnt||rr==cnt||rrr==cnt){
                    vec.push_back(word);
                }


            }
        }
        return vec;
        
    }
};