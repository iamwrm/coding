clc
clear
[pic clm]=imread('ShanghaiCityCenter_gray.bmp');


jing_an=size(pic(pic==198),1);
unit=jing_an;



jing_an=size(pic(pic==198),1)/unit*7.6;
yangpu=size(pic(pic==28),1)/unit*7.6;
xuhui=size(pic(pic==56),1)/unit*7.6;
putuo=size(pic(pic==85),1)/unit*7.6;
huangpu=size(pic(pic==113),1)/unit*7.6;
changning=size(pic(pic==141),1)/unit*7.6;
hongkou=size(pic(pic==170),1)/unit*7.6;
zhabei=size(pic(pic==226),1)/unit*7.6;


darea=[];

darea=[jing_an yangpu xuhui putuo huangpu changning hongkou zhabei];

narea={'Jingan' 'Yangpu' 'Xuhui' 'Putuo' 'Huangpu' 'Changning' 'Hongkou' 'Zhabei'};


[sdarea,idarea]=sort(darea);

for i1=1:8
    fprintf([narea{idarea(i1)} ':' num2str(darea(idarea(i1))) '\n']);
end

% 
% for i1=1:length(sdarea)
% 	switch idarea(i1)
% 			case 1
% 				fprintf( ['Jing''an:' num2str(sdarea(i1)) '\n' ])
% 			case 2
% 				fprintf( ['Yangpu' num2str(sdarea(i1)) '\n'] )
% 			case 3
% 				fprintf([ 'Jing''an:' num2str(sdarea(i1)) '\n'] )
% 			case 4
% 				fprintf([ 'Jing''an:' num2str(sdarea(i1)) '\n'] )	
% 			case 5
% 				fprintf( ['Jing''an:' num2str(sdarea(i1)) '\n'] )
% 			case 6
% 				fprintf([ 'Jing''an:' num2str(sdarea(i1)) '\n' ])
% 			case 7
% 				fprintf([ 'Jing''an:' num2str(sdarea(i1)) '\n'] )
% 			case 8
% 				fprintf([ 'Jing''an:' num2str(sdarea(i1)) '\n'] )
% 		end	
% 
% 
% end

