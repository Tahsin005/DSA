// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for(int i=0; i<s.size(); i++){
//             char ch = s[i];
//             if(ch == '(' or ch == '{' or ch == '['){
//                 st.push(ch);
//             }
//             else{
//                 if(ch == ')' and !st.empty() and st.top() == '('){
//                     st.pop();
//                 }
//                 else if(ch == '}' and !st.empty() and st.top() == '{'){
//                     st.pop();
//                 }
//                 else if(ch == ']' and !st.empty() and st.top() == '['){
//                     st.pop();
//                 }
//                 else{
//                     return false;
//                 }
//             }
//         }
//         return st.empty();
//     }
// };