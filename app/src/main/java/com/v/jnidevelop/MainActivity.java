package com.v.jnidevelop;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = findViewById(R.id.sample_text);
        tv.setText(stringFromJNI());


        printLog(1,2);



        TextView tvType = findViewById(R.id.sample_data_type);
        tvType.setText(stringFromJNI());
        StringBuffer buffer=new StringBuffer();
        buffer.append("add(10,8) = "+add(10,8)+"\n");

        short s1=789,s2=456;
        buffer.append("sub(789,456) = "+sub(s1,s2)+"\n");

        buffer.append("multi(11.0,8.33) = "+multi(11.0,8.33)+"\n");


        buffer.append("divi(180,30) = "+divi(180,30)+"\n");


        buffer.append("getChar('A') = "+getChar('A')+"\n");

        byte num=25;
        buffer.append("sqrt(num) = "+sqrt(num)+"\n");

        buffer.append("power(2,4) = "+power(2,4)+"\n");

        buffer.append("isTrue(true) = "+isTrue(true)+"\n");

        tvType.setText(buffer.toString());

    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    public native void printLog(int a, int b);

    public native int add(int a,int b);

    public native short sub(short a,short b);

    public native double multi(double a,double b);

    public native long divi(long a,long b);

    public native char getChar(char a);

    public native byte sqrt(byte a);

    public native float power(float num,float b);

    public native boolean isTrue(boolean b);
}
