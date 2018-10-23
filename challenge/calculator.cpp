#include <iostream>

typedef int (*arithmeticFcn)(int, int);

struct arithmeticStruct 
{
    char op;
    arithmeticFcn fcn;
};

int getInteger() 
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}

char getOperation()
{
    char op;
 
    do
    {   
        std::cout << "Enter an operation ('+', '-', '*', '/'): ";
        std::cin >> op;
    }
    while (op!='+' && op!='-' && op!='*' && op!='/');
 
    return op;
}
 
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

static const arithmeticStruct arithmeticArray[] { 
    { '+', add },
    { '-', subtract },
    { '*', multiply },
    { '/', divide }
};

arithmeticFcn getArithmeticFunction(char op) 
{
    
    // switch (op)
    // {
    //     default:
    //     case '+': return add;
    //     case '-': return subtract;
    //     case '*': return multiply;
    //     case '/': return divide;
    // }

    // int length = sizeof(arithmeticArray) / sizeof(arithmeticArray[0]);
    // for (int i = 0; i < length; i++)
    // {
    //     if (arithmeticArray[i].op == op)
    //     {
    //         return arithmeticArray[i].fcn;
    //     }
    // };

    for (const auto &arith : arithmeticArray)
    {
        if (arith.op == op)
            return arith.fcn;
    }

    // return nullptr;
    return add;
};

int main() 
{
    int x = getInteger();
    char op = getOperation();
    int y = getInteger();
    arithmeticFcn calcFcn = getArithmeticFunction(op);

    // if (calcFcn)
    // {
    int result = calcFcn(x, y);
    std::cout << "The answer is: " << result << "\n";
    // }
    // else 
    // {
    //     std::cout << "Operation not possible \n";
    // }
    

    return 0;
}