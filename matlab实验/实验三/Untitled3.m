x=-4:0.1:4
y=-4:0.1:4
[X,Y]=meshgrid(x,y)
Z=sin(pi*sqrt(X.^2+Y.^2))
mesh(X,Y,Z)