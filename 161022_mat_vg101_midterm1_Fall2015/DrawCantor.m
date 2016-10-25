%% DrawCantor: function description
function DrawCantor(n)
	hold on;
	p1=[0;0];
	p5=[1;0];
	drawtri(p1,p5,1,n)
	axis equal

end


function drawtri(p1,p5,lev,n)
	if lev>n
		return;
	end

	p2=p1+(p5-p1)/3;
	p4=p1+2*(p5-p1)/3;

	vec=(p5-p1)/3;
	p3=[p2(1)+vec(1)/2;vec(1)*sqrt(3)/2];

	together=[p1 p2 p3 p4 p5];
	whitetogether=[p2 p4];
	plot(together(1,:),together(2,:),'b');
	plot(whitetogether(1,:),whitetogether(2,:),'w');

	drawtri(p1,p2,lev+1,n);
	drawtri(p4,p5,lev+1,n);
end
