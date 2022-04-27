public class AreaOfShapes {
    public static void main(String[] args) {
        System.out.println(areaOfCircle(8));
        System.out.println(areaOfTriangle(4,3));
        System.out.println(areaOfRectangle(10,8));
        System.out.println(areaOfIsoTriangle(4,3));
        System.out.println(areaOfParalleogram(4,3));
        System.out.println(areaOfEquilateral(6));
    }

    static double areaOfCircle(int radius)
    {
        return radius*radius*Math.PI;
    }

    static double areaOfTriangle(int base,int height)
    {
        return 0.5*base*height;
    }
     
    static double areaOfRectangle(int length,int breadth)
    {

        return length*breadth;
    }

    static double areaOfIsoTriangle(int base,int height)
    {
        return 0.5*base*height;
    }
     static double areaOfParalleogram(int base,int height)
    {
        return base*height;
    }

    static double areaOfRhombus(int diagonal1,int diagonal2)
    {
        return 0.5*diagonal1*diagonal2;
    }

    static double areaOfEquilateral(int side)
    {
        return (Math.sqrt(3)/4)*side*side;
    }
}

