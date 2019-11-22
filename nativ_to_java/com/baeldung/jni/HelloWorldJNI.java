package com.baeldung.jni;

public class HelloWorldJNI {

    static {
        System.loadLibrary("native");
    }

    public static void main(String[] args) {
        HelloWorldJNI hvj = new HelloWorldJNI();
        hvj.sayHello();
        String name = "Victoria";
        String str = hvj.sayHelloToMe(name, true);
        System.out.println(str);
    }

    // объявление нативного метода без аргументов и возвращаемого значения
    private native void sayHello();
    private native long sumIntegers(int first, int second);
    private native String sayHelloToMe(String name, boolean isFemale);
}
