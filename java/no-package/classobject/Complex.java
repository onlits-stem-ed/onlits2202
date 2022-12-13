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

        return t;
    }

    public static void main(String[] args) {
        Complex c1 = new Complex();
        Complex c2 = new Complex();
        Complex c3;
        c3 = c1.plus(c2);
    }
}



/*
 * 
 * Line no 5 and 6 demonstrates constructor overloading which is a form of 
 * method overloading. Method overloading is a form of Polymorphism.
 */