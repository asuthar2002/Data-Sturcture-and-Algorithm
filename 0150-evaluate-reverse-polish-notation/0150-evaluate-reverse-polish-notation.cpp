class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        long long int top = 0;
	for(auto& t : tokens) 
		if(t == "+" || t == "-" || t == "*" || t == "/") {
			long long int op1 = stoll(tokens[--top]); 
			long long int op2 = stoll(tokens[--top]); 
			if(t == "+") op1 = op2 + op1;
			if(t == "-") op1 = op2 - op1;
			if(t == "/") op1 = op2 / op1;
			if(t == "*") op1 = op2 * op1;   
			tokens[top++] = to_string(op1);
		}
		else tokens[top++] = t;
	    int a =  stoll(tokens[0]);
        return a;
    }
};