clear
clc

nld=input('Please input a number ','s');% nld = number of lots of digits


nld_len=length(nld);
nldns=0;
for i1=1:nld_len
	nldns=nldns+str2num(nld(1,i1));
end
disp(nldns);


%------------------------

while 1
nld_len=length(nld);
nldns=0;
for i1=1:nld_len
	nldns=nldns+str2num(nld(1,i1));
end
if nldns<10
	break;
end

nld=num2str(nldns);
end
disp(nldns)


%----------






