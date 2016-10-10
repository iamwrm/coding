function [ y ] = mortgage( amount,rate,years )
%This is for HW1 Q3
%here rate doesn't contain '%', it's just a real number
%for example ARP 6% should be input as 0.06
rate=rate/12;
month=years*12;
y=amount*rate*((1+rate)^month)/((1+rate)^month-1);
end

