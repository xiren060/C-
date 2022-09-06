E=eye(3,3)
R=rand(3,2)
O=zeros(2,3)
v=[1 1];
S=diag(v)
A=[E,R;O,S]
X1=A^2
X2=[E,R+R*S;O,S^2]
X3=X1==X2