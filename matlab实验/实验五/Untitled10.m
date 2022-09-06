
%dsolve('Dx=z*sin(3*z)','Dy=z*cos(3*z)','t')
z=-10:0.1:10
x=z.*sin(3.*z)
y=z.*cos(3.*z)
plot3(z,x,y,'bl')