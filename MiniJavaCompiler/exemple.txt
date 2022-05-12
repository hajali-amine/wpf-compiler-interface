class Factorial{
    public static void main(String[] a){
	int x;
	int y;
	int z;
	int t;
	x=5;
	y=7;
	z=x+y;
	z=5+z;
	t=0;
	if ( t <= z ){
		z=t+1;
		t=z+1;
	}else{
		x=y;
	}
	while(x!=y){
		y=y+1;
		x=x-1;
	}
	x=5;
    }


}
