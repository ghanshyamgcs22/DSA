class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        
         unordered_set<string>st(wordList.begin(),wordList.end());
         st.erase(beginWord);
          while(!q.empty())
        {
                string word=q.front().first;
                  // word hot
                int level=q.front().second;
                q.pop();
                if(word==endWord)return level;
                for(int i=0;i<word.size();i++)
                {   
                    char original=word[i];
                    // h
                    for(char ch='a';ch<='z';ch++)
                    {
                        //aot
                        //bot
                        //cot
                        //.
                        //.

                        word[i]=ch;

                        //checking existance
            if(st.find(word)!=st.end())
                        {
                            st.erase(word);
                            q.push({word,level+1});
                        }
                    }
                  word[i]=original;
                }                                         
        }

        return 0;
    }
};
