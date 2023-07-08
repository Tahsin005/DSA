// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         stack<char> ss;
//         stack<char> ts;
//         for(int i = 0; i<s.size(); i++){
//             char ch = s[i];
//             if(ch != '#'){
//                 ss.push(ch);
//             }
//             else{
//                 if(!ss.empty()){
//                     ss.pop();
//                 }
//             }
//         }
//         for(int i = 0; i<t.size(); i++){
//             char ch = t[i];
//             if(ch != '#'){
//                 ts.push(ch);
//             }
//             else{
//                 if(!ts.empty()){
//                     ts.pop();
//                 }
//             }
//         }
//         return ss == ts;
//     }
// };