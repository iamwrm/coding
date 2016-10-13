input_mat=[1 2 3 12 45 78 32 14 2 5 4];
smin=10;
smax=30;
input_mat(input_mat(:)>=smax)=255;
input_mat(input_mat(:)<=smin)=0;
input_mat((input_mat(:)~=(255))+(input_mat(:)~=(0)))=(input_mat((input_mat(:)~=(255))+(input_mat(:)~=(0)))-smin)/(smax-smin)*255;
input_mat