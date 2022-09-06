syms x
f1=solve(x.^3+cos(0.5))
f2=solve(x.^3+cos(x))
f3=solve(x.^3+cos(0.5*x))
p=[1 0 0 cos(0.5)]
r=roots(p)