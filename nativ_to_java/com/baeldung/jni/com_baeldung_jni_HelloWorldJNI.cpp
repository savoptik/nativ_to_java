//
//  com_baeldung_jni_HelloWorldJNI.cpp
//  nativ_to_java
//
//  Created by Артём Семёнов on 22.11.2019.
//  Copyright © 2019 Артём Семёнов. All rights reserved.
//

#include "com_baeldung_jni_HelloWorldJNI.h"
#include <iostream>

JNIEXPORT void JNICALL Java_com_baeldung_jni_HelloWorldJNI_sayHello
  (JNIEnv* env, jobject thisObject) {
    std::cout << "Hello from C++ !!" << std::endl;
}

JNIEXPORT jlong JNICALL Java_com_baeldung_jni_ExampleParametersJNI_sumIntegers
  (JNIEnv* env, jobject thisObject, jint first, jint second) {
    std::cout << "C++: The numbers received are : " << first << " and " << second << std::endl;
    return (long)first + (long)second;
}

JNIEXPORT jstring JNICALL Java_com_baeldung_jni_ExampleParametersJNI_sayHelloToMe
  (JNIEnv* env, jobject thisObject, jstring name, jboolean isFemale) {
    const char* nameCharPointer = env->GetStringUTFChars(name, NULL);
    std::string title;
    if(isFemale) {
        title = "Ms. ";
    }
    else {
        title = "Mr. ";
    }
 
    std::string fullName = title + nameCharPointer;
    return env->NewStringUTF(fullName.c_str());
}
