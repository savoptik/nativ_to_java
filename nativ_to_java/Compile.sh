#!/bin/sh

#  Compile.sh
#  nativ_to_java
#
#  Created by Артём Семёнов on 22.11.2019.
#  Copyright © 2019 Артём Семёнов. All rights reserved.

cd ./nativ_to_java/ &&
javac -h . HelloWorldJNI.java &&
g++ -c -fPIC -I /Library/Java/JavaVirtualMachines/jdk-11.0.5.jdk/Contents/Home/include -I /Library/Java/JavaVirtualMachines/jdk-11.0.5.jdk/Contents/Home/include/darwin com_baeldung_jni_HelloWorldJNI.cpp -o com_baeldung_jni_HelloWorldJNI.o &&
g++ -dynamiclib -o libnative.dylib com_baeldung_jni_HelloWorldJNI.o -lc &&
java -cp . -Djava.library.path=/NATIVE_SHARED_LIB_FOLDER com.baeldung.jni.HelloWorldJNI
