x=-2:0.1:2
y=-2:0.1:2
[X,Y]=meshgrid(x,y)
Z=X.^2.*exp(-(X.^2.+Y.^2))
surf(X,Y,Z)
shading flat