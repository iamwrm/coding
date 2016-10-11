clear
clc


while 1
    
input_function=input('Input function:','s');
               % I LOVE LAB
if strcmp(input_function,'I LOVE LAB')
	break
end

input_accuracy=input('Input accuracy:','s');
if strcmp(input_accuracy,'I LOVE LAB')
	break
end

%input_function='-78*x.^4+x.^3+1*x.^2-6*x;';

input_accuracy=str2num(input_accuracy);

syms f(x);
eval(['f(x)=' input_function ';']);
d_f=diff(f);
x0=(rand-0.5)*10;   %arbitrary point between -5 to 5

if 0
	while 1
	    x0=-(f(x0))/(d_f(x0))+x0;
	    if abs(f(x0))<input_accuracy
	    	break
	    end
	end
end
x0=double(x0);
f1=input_function;

f1=strrep(f1,'-','minus ');
f1=strrep(f1,'+','plus ') ;

f1=strrep(f1,'10*'	,'ten times ');
f1=strrep(f1,'11*'	,'eleven times ');
f1=strrep(f1,'12*'	,'twelve times ');
f1=strrep(f1,'13*'	,'thirteen times ');
f1=strrep(f1,'14*'	,'fourteen times ');
f1=strrep(f1,'15*'	,'fifteen times ');
f1=strrep(f1,'16*'	,'sixteen times ');
f1=strrep(f1,'17*'	,'seventeen times ');
f1=strrep(f1,'18*'	,'eighteen times ');
f1=strrep(f1,'19*'	,'nineteen times ');
f1=strrep(f1,'20*'	,'twenty times ');
f1=strrep(f1,'21*'	,'twenty-one times ');
f1=strrep(f1,'22*'	,'twenty-two times ');
f1=strrep(f1,'23*'	,'twenty-three times ');
f1=strrep(f1,'24*'	,'twenty-four times ');
f1=strrep(f1,'25*'	,'twenty-five times ');
f1=strrep(f1,'26*'	,'twenty-six times ');
f1=strrep(f1,'27*'	,'twenty-seven times ');
f1=strrep(f1,'28*'	,'twenty-eight times ');
f1=strrep(f1,'29*'	,'twenty-nine times ');
f1=strrep(f1,'30*'	,'thirty times ');
f1=strrep(f1,'31*'	,'thirty-one times ');
f1=strrep(f1,'32*'	,'thirty-two times ');
f1=strrep(f1,'33*'	,'thirty-three times ');
f1=strrep(f1,'34*'	,'thirty-four times ');
f1=strrep(f1,'35*'	,'thirty-five times ');
f1=strrep(f1,'36*'	,'thirty-six times ');
f1=strrep(f1,'37*'	,'thirty-seven times ');
f1=strrep(f1,'38*'	,'thirty-eight times ');
f1=strrep(f1,'39*'	,'thirty-nine times ');
f1=strrep(f1,'40*'	,'forty times ');
f1=strrep(f1,'41*'	,'forty-one times ');
f1=strrep(f1,'42*'	,'forty-two times ');
f1=strrep(f1,'43*'	,'forty-three times ');
f1=strrep(f1,'44*'	,'forty-four times ');
f1=strrep(f1,'45*'	,'forty-five times ');
f1=strrep(f1,'46*'	,'forty-six times ');
f1=strrep(f1,'47*'	,'forty-seven times ');
f1=strrep(f1,'48*'	,'forty-eight times ');
f1=strrep(f1,'49*'	,'forty-nine times ');
f1=strrep(f1,'50*'	,'fifty times ');
f1=strrep(f1,'51*'	,'fifty-one times ');
f1=strrep(f1,'52*'	,'fifty-two times ');
f1=strrep(f1,'53*'	,'fifty-three times ');
f1=strrep(f1,'54*'	,'fifty-four times ');
f1=strrep(f1,'55*'	,'fifty-five times ');
f1=strrep(f1,'56*'	,'fifty-six times ');
f1=strrep(f1,'57*'	,'fifty-seven times ');
f1=strrep(f1,'58*'	,'fifty-eight times ');
f1=strrep(f1,'59*'	,'fifty-nine times ');
f1=strrep(f1,'60*'	,'sixty times ');
f1=strrep(f1,'61*'	,'sixty-one times ');
f1=strrep(f1,'62*'	,'sixty-two times ');
f1=strrep(f1,'63*'	,'sixty-three times ');
f1=strrep(f1,'64*'	,'sixty-four times ');
f1=strrep(f1,'65*'	,'sixty-five times ');
f1=strrep(f1,'66*'	,'sixty-six times ');
f1=strrep(f1,'67*'	,'sixty-seven times ');
f1=strrep(f1,'68*'	,'sixty-eight times ');
f1=strrep(f1,'69*'	,'sixty-nine times ');
f1=strrep(f1,'70*'	,'seventy times ');
f1=strrep(f1,'71*'	,'seventy-one times ');
f1=strrep(f1,'72*'	,'seventy-two times ');
f1=strrep(f1,'73*'	,'seventy-three times ');
f1=strrep(f1,'74*'	,'seventy-four times ');
f1=strrep(f1,'75*'	,'seventy-five times ');
f1=strrep(f1,'76*'	,'seventy-six times ');
f1=strrep(f1,'77*'	,'seventy-seven times ');
f1=strrep(f1,'78*'	,'seventy-eight times ');
f1=strrep(f1,'79*'	,'seventy-nine times ');
f1=strrep(f1,'80*'	,'eighty times ');
f1=strrep(f1,'81*'	,'eighty-one times ');
f1=strrep(f1,'82*'	,'eighty-two times ');
f1=strrep(f1,'83*'	,'eighty-three times ');
f1=strrep(f1,'84*'	,'eighty-four times ');
f1=strrep(f1,'85*'	,'eighty-five times ');
f1=strrep(f1,'86*'	,'eighty-six times ');
f1=strrep(f1,'87*'	,'eighty-seven times ');
f1=strrep(f1,'88*'	,'eighty-eight times ');
f1=strrep(f1,'89*'	,'eighty-nine times ');
f1=strrep(f1,'90*'	,'ninety times ');
f1=strrep(f1,'91*'	,'ninety-one times ');
f1=strrep(f1,'92*'	,'ninety-two times ');
f1=strrep(f1,'93*'	,'ninety-three times ');
f1=strrep(f1,'94*'	,'ninety-four times ');
f1=strrep(f1,'95*'	,'ninety-five times ');
f1=strrep(f1,'96*'	,'ninety-six times ');
f1=strrep(f1,'97*'	,'ninety-seven times ');
f1=strrep(f1,'98*'	,'ninety-eight times ');
f1=strrep(f1,'99*'	,'ninety-nine times ');
f1=strrep(f1,'100*'	,'one hundred times ');
f1=strrep(f1,'1*'   ,''             );
f1=strrep(f1,'2*'	,'two times ');
f1=strrep(f1,'3*'	,'three times ');
f1=strrep(f1,'4*'	,'four times ');
f1=strrep(f1,'5*'	,'five times ');
f1=strrep(f1,'6*'	,'six times ');
f1=strrep(f1,'7*'	,'seven times ');
f1=strrep(f1,'8*'	,'eight times ');
f1=strrep(f1,'9*'	,'nine times ');

f1=strrep(f1,';',' ');

f1=strrep(f1,'x','x ');
f1=strrep(f1,'x.^2','x squared ');
f1=strrep(f1,'x.^3','x cubed ');
f1=strrep(f1,'x.^4','the fourth power of x ');
f1=strrep(f1,'x.^5','the fifth power of x ');
f1=strrep(f1,'x.^6','the sixth power of x ');
f1=strrep(f1,'x.^7','the seventh power of x ');
f1=strrep(f1,'x.^8','the eighth power of x ');
f1=strrep(f1,'x.^9','the ninth power of x ');
f1=strrep(f1,'x.^10','the tenth power of x ');


f1=strrep(f1,'x  .^2','x squared ');
f1=strrep(f1,'x  .^3','x cubed ');
f1=strrep(f1,'x  .^4','the fourth power of x ');
f1=strrep(f1,'x  .^5','the fifth power of x ');
f1=strrep(f1,'x  .^6','the sixth power of x ');
f1=strrep(f1,'x  .^7','the seventh power of x ');
f1=strrep(f1,'x  .^8','the eighth power of x ');
f1=strrep(f1,'x  .^9','the ninth power of x ');
f1=strrep(f1,'x  .^10','the tenth power of x ');

f1=strrep(f1,'x .^2','x squared ');
f1=strrep(f1,'x .^3','x cubed ');
f1=strrep(f1,'x .^4','the fourth power of x ');
f1=strrep(f1,'x .^5','the fifth power of x ');
f1=strrep(f1,'x .^6','the sixth power of x ');
f1=strrep(f1,'x .^7','the seventh power of x ');
f1=strrep(f1,'x .^8','the eighth power of x ');
f1=strrep(f1,'x .^9','the ninth power of x ');
f1=strrep(f1,'x .^10','the tenth power of x ');

disp(['an approximate zero point of y equals to ' f1 'is ' num2str(x0)]);

end
