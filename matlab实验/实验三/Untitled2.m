
x=-5:0.1:5
y=exp(-(x.^2))
subplot(2,2,1)
plot(x,y,'bl');title('概率曲线')

theta=0:0.01*pi:2*pi
rho=sin(2*theta)
subplot(2,2,2)
polar(theta,rho,'b');title('四叶玫瑰线')

t=0:0.1:5000
x=(3*t./(1+t.^3))
y=(3*t.^2./(1+t.^3))
subplot(2,2,3);plot(x,y,'k');title('叶形线')

y=-10:0.1:10
x1=log((1+sqrt(1-y.^2)./y))-sqrt(1-y.^2)
x2=log((1-sqrt(1-y.^2)./y))+sqrt(1-y.^2)
subplot(2,2,4);plot(y,x1,'k',y,x2,'g');title('。。')

