clear
clc

fid=fopen('multiplication_table.txt','w+');




n=9;
fprintf('x\t');
fprintf(fid,'x\t');
for i1=1:n
	fprintf([num2str(i1),'\t']);
	fprintf(fid,[num2str(i1),'\t']);
end
fprintf('\n');
fprintf(fid,'\r\n');

fprintf('\t');
fprintf(fid,'\t');

for i1=1:n
	fprintf('-\t');
	fprintf(fid,'-\t');
end

fprintf('\n');
fprintf(fid,'\r\n');

for i1=1:n
	fprintf([num2str(i1),'|\t']);
	fprintf(fid,[num2str(i1),'|\t']);
 	for i2=1:n
 		fprintf([num2str(i1*i2),'\t']);
 		fprintf(fid,[num2str(i1*i2),'\t']);
 	end
 	fprintf('\n');
 	fprintf(fid,'\r\n');
 end