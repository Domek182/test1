SYSEXIT = 1
EXIT_SUCCESS = 0

.data

	liczba1: .float -2.3454535
	
	liczba2: .float 8.56755456

	liczba3: .float 0.0

.text

.global _start

_start:

		#NaN
	flds liczba1	
	fsqrt
	fstp (%esp)

		# +inf
	flds liczba3
	flds liczba2
	fdivp
	fstp (%esp)

		# -inf
	flds liczba3
	flds liczba1
	fdivp
	fstp (%esp)

		# +0
	flds liczba2
	flds liczba3
	fdivp
	fstp (%esp)

		#-0
	flds liczba1
	flds liczba3
	fdivp
	fstp (%esp)	

		
	#24-bit precision
	movw $0x007f, %ax
	
	push %ax

	fldcw (%esp)
	
	#53-bit precison (default)

	movw $0x027f, %ax

	push %ax

	fldcw (%esp)
	
	#24-bit precision  round up to +infinity
	movw $0x087f, %ax
	push %ax
	fldcw (%esp)

	#load pi
	fldpi

	

	mov $SYSEXIT, %eax
	mov $EXIT_SUCCESS, %ebx
	int $0x80

#sekretny link https://masm32.com/masmcode/rayfil/tutorial/fpuchap1.htm
#sekretny link2 https://ww2.ii.uj.edu.pl/~kapela/pn/splitLecture.php?lectureNumber=9&slideNumber=3
