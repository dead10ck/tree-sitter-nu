=====
values-bool
=====

true
false

-----

(nu_script
  (literal_bool)
  (literal_bool)
)

=====
values-int
=====

42
-42
+42
0b1000101
0o105
0x45
4_2
-4_2
+4_2
4___2___
-4__2___
+4__2___
0b100010_1
0b1_0_0_0_1_0_1_
0o10_5
0x4_5

-----

(nu_script
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int)
  (literal_int))

=====
values-float
=====

4.
4.2
4.2e1
4.2E+1
+4.
+4.2
+4.2e1
+4.2E+1
-4.
-4.2
-4.2e1
-4.2E-1
.42

-----

(nu_script
  (literal_float)
  (literal_float)
  (literal_float)
  (literal_float)
  (literal_float)
  (literal_float)
  (literal_float)
  (literal_float)
  (literal_float)
  (literal_float)
  (literal_float)
  (literal_float)
  (ERROR)
)

