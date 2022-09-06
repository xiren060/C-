n=100;a=ones(1,n);
for i=3:n
    a(i)=a(i-1)+a(i-2);
    if a(i)>=10000
        a(i)
        break;
    end
end