h=0:pi/10:2*pi;
x=((1+cos(h)).*cos(h))
y=((1+cos(h)).*sin(h))
z=sin(h)
plot3(x,y,z)
