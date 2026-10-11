class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        int a, b;
        for(auto const &arith : tokens){
            if(arith != "+" && arith != "-" && arith != "/" && arith != "*"){
                stk.push(stoi(arith));
            }
            else{
                a = stk.top();
                stk.pop();
                b = stk.top();
                stk.pop(); 
                switch(arith[0]){
                    case '+':
                        stk.push(b+a);
                        break;
                    case '-':
                        stk.push(b-a);
                        break;
                    case '/':
                        stk.push(b/a);
                        break;
                    case '*':
                        stk.push(a*b);
                        break;
                }
            }
        }
        return stk.top();
    }
}; 
