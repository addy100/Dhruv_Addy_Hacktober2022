// leetcode 1143. 
/* Given two strings text1 and text2, return the length of their longest common subsequence.
If there is no common subsequence, return 0.
A subsequence of a string is a new string generated from the original string with some characters (can be none) 
deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings. */
// code
#include<bits/stdc++.h>
using namespace std;
int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m=text2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]){
                   dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                   dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }  
            }
        }
        return dp[n][m];
     /*  To find LCS string 
         string lcs="";
         int i=n,j=m;
         while(i>0 && j>0){
             if(text1[i-1]==text2[i-2]){
                 lcs=text1[i-1]+lcs;
                 i--;j--;
             }
             else{
                 if(dp[i][j]==dp[i-1][j]){ // or dp[i-1][j]>dp[i][j-1]
                     i--;
                 }
                 else{
                     j--;
                 }
             }
         }
     */
}