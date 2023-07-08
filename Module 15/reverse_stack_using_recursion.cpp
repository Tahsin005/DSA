// void reverseStack(stack<int> &s) {
//     // Write your code here
//     if(s.empty()) return;
//     int x = s.top();
//     s.pop();

//     reverseStack(s);

//     stack<int> newS;
//     while(!s.empty()){
//         newS.push(s.top());
//         s.pop();
//     }
//     newS.push(x);
//     while(newS.empty() != true){
//         s.push(newS.top());
//         newS.pop();
//     }
// }