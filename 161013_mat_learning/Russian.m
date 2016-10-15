
classdef Russian
    properties
        pName
        pLanguage = 'Chinese';
    end
    
    methods
        function aRussianObj = Russian(name, language)
            aRussianObj.pName = name;
            if nargin == 2
                aRussianObj.pLanguage = language;
            end
        end
        
        function sayHi(aRussianObj)
            switch aRussianObj.pLanguage
                case 'Russian' 
                    if strcmp(aRussianObj.pName, 'Putin')
                        hiStr = '来与我一战';
                    else                   
                        hiStr = 'Sorry, MATLAB doesn''t support Russian';               
                    end     
                case 'Chinese'
                    hiStr = '滚你丫的';
                case 'Cantonese'
                    hiStr = '死开啦';
                case 'English'
                    if strcmp(aRussianObj.pName, 'Nabokov')
                        hiStr = 'Lolita, light of my life, fire of my loins';
                    else
                        hiStr = 'Bite me';
                    end
                otherwise
                    hiStr = '对不起，我不会说这种语言';
            end
            disp(hiStr)
        end
    end
end