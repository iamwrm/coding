clear
syms x
input_function='+x.^3+66*x^3-78*x.^4-6*x+1*x.^2';
eval(['f(x)=' input_function ';']);

sym2poly(f(x))