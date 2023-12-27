=====
values-nothing
=====

null

-----

(nu_script
  (literal_null)
)

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
_4___2___
-_4__2___
+_4__2___
___4___2___
-___4__2___
+___4__2___
0b100010_1
0b1_0_0_0_1_0_1_
0o10_5
0x4_5
0b_100010_1
0b_1_0_0_0_1_0_1_
0o_10_5
0x_4_5
0b____100010_1
0b____1_0_0_0_1_0_1_
0o____10_5
0x____4_5

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
)

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
4_.
4_.___2
4_.2e1
4_.2E+1
+4_.
+4_._2_____
+4_.2e___3_
+4_.2E+_1
-____4_.
-____4_.2
-____4_.2e1
-____4_.2E-1___
.4_2

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

=====
values-binary
=====

0x[aa]
0x[aabb]
0x[aa bb]
0x[aa, bb]

-----

(nu_script
  (literal_binary)
  (literal_binary)
  (literal_binary)
  (literal_binary)
)

=====
values-date
=====

1985-04-12T23:20:50.52Z
1996-12-19T16:39:57-08:00
1990-12-31T23:59:60Z
1990-12-31T15:59:60-08:00
1937-01-01T12:00:27.87+00:20

-----

(nu_script
  (literal_date)
  (literal_date)
  (literal_date)
  (literal_date)
  (literal_date)
)
