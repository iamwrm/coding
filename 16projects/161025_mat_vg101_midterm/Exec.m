%now I have only solved the fprintf part by using index
function Exec(filename)


fid=fopen(filename);


command={};
i1=1;
while feof(fid)~=1
command{i1,1}=fscanf(fid,'%s',1);
i1=i1+1;
end


c=1;
var={};vi=1;

for i2=1:size(command,1)
    temp=command{i2,1};
   if strfind(temp,'fprintf')
       if strfind(temp,',')
           fprintf([temp(10:11) '%d\n'],c);
       else
           fprintf([temp(10:end-3)]);
       end
       
   else 
       if strfind(temp,'=')
           oper=' ';
           if strfind(temp,'+')
               oper='+';
           end
           if strfind(temp,'-')
               oper='-';
           end
           if strfind(temp,'*')
               oper='*';
           end
           if strfind(temp,'/')
               oper='/';
           end
           
           switch oper
               case ' '
                   existence=0;
                   if ~isempty(var)
                   for i3=1:vi-1
                       if var{i3,1}==temp(1:strfind(temp,'=')-1)
                           existence=1;
                           break
                       end
                   end
                   end
                   if ~existence
                    var{vi,1}=temp(1:strfind(temp,'=')-1);
                    var{vi,2}=str2num(temp(strfind(temp,'=')+1:end-1));
                    vi=vi+1;
                    %frintf([temp(1:strfind(temp,'=')-1) '=' num2str(var{vi,2})]);
                   end
                   
               
           end
           
       end
   end   
end
