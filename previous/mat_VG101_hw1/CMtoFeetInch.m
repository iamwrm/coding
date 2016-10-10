function [feet,inch]=CMtoFeetInch(input_cm)
%This is for HW1 Q1
input_inch=input_cm/2.54;
input_inch=round(input_inch);
feet=(input_inch-mod(input_inch,12))/12;
inch=mod(input_inch,12);
end