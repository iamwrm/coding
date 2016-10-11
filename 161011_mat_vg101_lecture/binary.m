a = [1:100];
fid = fopen('a.dat','w');
fwrite(fid,a,'uint8');
fclose(fid);