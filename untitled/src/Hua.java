public class Hua {
    public static void main(String[] args){
        String intValue = "100";
        String doubleValue = "99.88";
        byte b = Byte.parseByte(intValue);
        short s = Short.parseShort(intValue);
        int i = Integer.parseInt(intValue);
        System.out.println("b="+b+";s="+s+";i="+i);
        float f = Float.parseFloat(doubleValue);
        double d = Double.parseDouble(doubleValue);
        System.out.println("f="+f+";d="+d);
    }
}
