
% AdjustBrightness: function description
function AdjustBrightness(filename,ratio)
% filename='lena_gray.jpg';
% ratio=1.2;



pic=imread(filename);
pic1=pic*ratio;
pic1(pic1(:)>255)=255;

imwrite(pic1,[filename(1:end-4) '_brightness_x_' num2str(ratio) filename(end-3:end)])
	

