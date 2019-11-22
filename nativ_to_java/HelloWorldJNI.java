package com.baeldung.jni;

public class HelloWorldJNI {
 
    static {
        System.loadLibrary("native");
    }

    public static void main(String[] args) {
        new HelloWorldJNI().sayHello();
    }

    // объявление нативного метода без аргументов и возвращаемого значения
    private native void sayHello();
}
