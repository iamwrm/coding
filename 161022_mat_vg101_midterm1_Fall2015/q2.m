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


ifodd=mod(nld_len,2);
%totalpairs=(nld_len-ifodd)/2+1;

nlds3=0;
if ifodd==0

for i1=1:2:nld_len-1
	nlds3=nlds3+str2num(nld(i1:i1+1));
end
disp(nlds3);
end


nlds31=0;
if ifodd==1
	for i1=1:2:nld_len-1
		nlds31=nlds31+str2num(nld(i1:i1+1));
	end
	nlds31=nlds31+str2num(nld(end));
	disp(nlds31);
end

