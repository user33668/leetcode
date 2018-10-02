//给定一个字符串，找出不含有重复字符的最长子串的长度。
//示例 1:
//输入: "abcabcbb"
//输出: 3 
//解释: 无重复字符的最长子串是 "abc"，其长度为 3。

//示例 2:
//输入: "bbbbb"
//输出: 1
//解释: 无重复字符的最长子串是 "b"，其长度为 1。

//示例 3:
//输入: "pwwkew"
//输出: 3
//解释: 无重复字符的最长子串是 "wke"，其长度为 3

//请注意，答案必须是一个子串，"pwke" 是一个子序列 而不是子串。

int lengthOfLongestSubstring(char* s) {
    if(s[0]=='\0')return 0; //懒得重写逻辑了
    
    int m = 0;
    int n = 1;
    int length = 1;
    //int start = m; //从哪一位开始,可能会有用
    
    while(!(s[n] == '\0')){
        for(int i = m; i < n; i++){
            if(s[i] == s[n]){m = i+1; break;}
        }
        n++;
        length = (n-m > length) ? n-m : length;
        //start  = (n-m>length) ? m   : start;
    }
    return length;
}
