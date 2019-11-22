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
