x=0:0.1:1;
y=[-0.447 1.978 3.28 6.16 7.08 7.34 7.66 9.56 9.48 9.30 11.2];
A=polyfit(x,y,2),z=polyval(A,x);
plot(x,y,'k+',x,z,'b')
xlabel('x'),ylabel('y=f(x)')