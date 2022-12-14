class Complex {
    private float real;
    private float imaginary;

    public Complex() {      //Default Constructor

    }

    public Complex(float real, float imaginary) {
        this.real = real;       //this is a keyword
        this.imaginary = imaginary;
    }

    Complex plus(Complex c) {
        Complex t = new Complex();
        t.real = this.real + c.real;
        t.imaginary = this.imaginary + c.imaginary;
        return t;
    }

    float getReal() {
        return this.real;
    }

    float getImaginary() {
        return this.imaginary;
    }

    public static void main(String[] args) {
        Complex c1 = new Complex(11.5f, 10.6f);
        Complex c2 = new Complex(15.7f, 20.9f);
        Complex c3;
        c3 = c1.plus(c2);
        System.out.printf("The sum is %1.2f + %1.2fi\n", c3.getReal(), c3.getImaginary());
    }
}



/*
 * 
 * Line no 5 and 6 demonstrates constructor overloading which is a form of 
 * method overloading. Method overloading is a form of Polymorphism.
 */