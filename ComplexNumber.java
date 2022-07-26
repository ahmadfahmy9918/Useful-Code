package coe318.lab2;
/** 
* ComplexNumber models a complex number expressed
* in rectangular form (real and imaginary parts).
* it is an <em>immutable</em> object.abstract*
* @author Ahmad Fahmy
*/

public class ComplexNumber {
	//Instance variable declarations 
	double real;
	double imag;
	
	/** 
	 * * Construct a ComplexNumber given its 
	 * real and imaginary parts.
	 * @param re The real component
	 * @param im The imaginary component
	 */
	
	public ComplexNumber(double re, double im) {
		//Initialize the instance variables
		real = re;
		imag = im;
	}
	
	/**
	 * Returns the real component
	 * @return the real
	 */
	
	public double getReal() {
		return real; 
	}
	

	/**
	 * Returns the imaginary component
	 * @return the imaginary
	 */
	
	public double getImaginary() {
		return imag; 
	}
	
	/**
	 * Returns a new ComplexNumber number that is
	 * the negative of <em>this</em>. Note: the 
	 * original ComplexNumber is <b>NOT</b>
	 * modified.
	 * @return -this
	 */
	
	public ComplexNumber negate() {
		//THIS IS THE WRONG WAY >>ComplexNumber tempNum = new ComplexNumber (-1,-2);
		ComplexNumber tempNum = new ComplexNumber((-1)*real, (-1)*imag);
		return (tempNum);  
	}
	
	/**
	 * Returns a new Complex number that is the
	 * sum of <em>this</em> and <em>z</em>
	 * Note: the original ComplexNumber is
	 * <b>NOT</b> modified
	 *///@param z
	 //* @return this + z
	// */
	
	public ComplexNumber add(ComplexNumber z) {
		ComplexNumber tempNum2 = new ComplexNumber((real+z.real), (imag+z.imag));

		return tempNum2; 
	}

	/**
	 * Returns a new ComplexNumber that is the 
	 * difference of <em>this</em> and <em>z</em>
	 * Note: the original ComplexNumber is
	 * <b>NOT</b> modified.
	 * @param z
	 * @return this + z
	 */
	
	public ComplexNumber subtract(ComplexNumber z) {
		ComplexNumber tempNum3 = new ComplexNumber((real-z.real), (imag-z.imag));

		return tempNum3; 
	}
	
	/**
	 * Returns a new ComplexNumber that is the
	 * product of <em>this</em> and <em>z</em>
	 * Note: the original ComplexNumber is
	 * @param z
	 * @return this * z
	 */
	public ComplexNumber multiply(ComplexNumber z) {
		ComplexNumber tempNum4 = new ComplexNumber((real*z.real + (-1)*imag*z.imag), (imag*z.real + real*z.imag));
		return tempNum4; 
	}
	
	
	/**
	 * Returns a new ComplexNumber that is the
	 * reciprocal of <em>this</em> and <em>z</em>
	 * Note: the original ComplexNumber is
	 * <b>NOT</b> modified
	 * @return 1.0 /this
	 */
	public ComplexNumber reciprocal() {
		ComplexNumber tempNum5 = new ComplexNumber((real/((real*real) + (imag)*imag)), (((-1)*imag)/((real*real) + (imag)*imag)));
		
		return tempNum5; 
	}
	
	
	/**
	 * Returns a new ComplexNumber that is 
	 * <em>this</em> divided by <em>z</em>
	 * Note: the original ComplexNumber is
	 * @param z
	 * @return this / z
	 */
	public ComplexNumber divide(ComplexNumber z) {
		
		double tempTopNoDivideRe = ((real*z.real) + (imag)*z.imag);
		double tempTopNoDivideImag = (real*z.imag*(-1) + imag*z.real);
		double tempBottom = ((z.real*z.real) + (z.imag)*z.imag);
		ComplexNumber tempNum6 = new ComplexNumber(tempTopNoDivideRe/tempBottom, tempTopNoDivideImag/tempBottom);
		
		//System.out.println(tempTopNoDivideImag); //For debugging purposes
		
		
		return tempNum6;
	}
	
	/**
	 * Returns a string representation of 
	 * <em>this</em> in the format:
	 * <pre>
	 * real +-(optional) i imaginary
	 * </pre> 
	 * If the imaginary part is zero, only the 
	 * real part is converted to a String
	 * A "+" or "-" is placed between the real
	 * and imaginary parts depending on the 
	 * sign of the imaginary part
	 *<p>
	 *Examples:
	 *<pre>
	 *..println(new ComplexNumber(0,0); ->"0.0"
	 *..println(new ComplexNumber(1,1); ->"1.0 + i1.0"
	 *..println(new ComplexNumber(1,-1); ->"1.0 - i1.0"
	 *</pre>
	 *@return the String representation.
	 */
	
	//@override
	public String toString() {
		//DO NOT MODIFY THIS CODE!
		String str = "" + this.getReal();
		if (this.getImaginary() == 0.0) {
			return str;
		}
		if (this.getImaginary() > 0) {
			return str + " + i" + this.getImaginary();
		}
		else {
			return str + " - i" + -this.getImaginary();
		}
	}
	
}