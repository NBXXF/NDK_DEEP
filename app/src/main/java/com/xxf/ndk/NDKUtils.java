package com.xxf.ndk;

public class NDKUtils {
    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("test_lib");
    }

    public static native String getName();
}
