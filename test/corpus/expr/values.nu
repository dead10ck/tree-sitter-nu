=====
values-nothing
=====

null

-----

(nu_script
  (block
    (pipeline (literal_null))
  )
)

=====
values-bool
=====

true
false

-----

(nu_script
  (block
    (pipeline (literal_bool))
    (pipeline (literal_bool))
  )
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
  (block
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
    (pipeline (literal_int))
  )
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

-----

(nu_script
  (block
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
    (pipeline (literal_float))
  )
)

=====
values-binary
=====

0x[aa]
0x[aabb]
0x[aa bb]
0x[aa, bb]
0o[01234567]
0o[01 23 45 67]
0o[01, 23, 45, 67]
0b[011001001]
0b[01 100 1 001]
0b[0, 1, 100 1, 001]

0b[,,,,,,0,
  1,
  100 1,
  001
]

0b[
0,
  1
  100 1,,,
  001 ]

-----

(nu_script
  (block
    (pipeline (literal_binary))
    (pipeline (literal_binary))
    (pipeline (literal_binary))
    (pipeline (literal_binary))
    (pipeline (literal_binary))
    (pipeline (literal_binary))
    (pipeline (literal_binary))
    (pipeline (literal_binary))
    (pipeline (literal_binary))
    (pipeline (literal_binary))
    (pipeline (literal_binary))
    (pipeline (literal_binary))
  )
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
  (block
    (pipeline (literal_date))
    (pipeline (literal_date))
    (pipeline (literal_date))
    (pipeline (literal_date))
    (pipeline (literal_date))
  )
)

=====
values-string-plain
=====

'this is a string @#$_&-+'
`this is a string with a multi code point emoji 👩‍👩‍👦‍👦`
"double quoted string with an\"\'\\\/\{\}\(\)\$\^\#\|\~\a\b\e\f\n\r\t\u{00}\u{eee}\u{ffff}\u{10ffff}escape sequence"

-----

(nu_script
  (block
    (pipeline (string))
    (pipeline (string))
    (pipeline
      (string
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
        (escape_sequence)
      )
    )
  )
)

=====
values-string-interpolation
=====

"double quoted string with (0) ('interpolation')s"
$"double quoted string with an\"\'escape sequence and (2) ("interpolation")s"

-----

(nu_script
  (block
    (pipeline (string))
    (pipeline
      (string
        (escape_sequence)
        (escape_sequence)
        (subexpression
          (block
            (pipeline (literal_int))
          )
        )
        (subexpression
          (block
            (pipeline (string))
          )
        )
      )
    )
  )
)

=====
values-range-literals
=====

0..1
1..100
1..5..100
1..5..=100
20..30..<100

-----

(nu_script
  (block
    (pipeline
      (range
        from: (literal_int)
        op: (range_op_inclusive)
        to: (literal_int)
      )
    )
    (pipeline
      (range
        from: (literal_int)
        op: (range_op_inclusive)
        to: (literal_int)
      )
    )
    (pipeline
      (range
        from: (literal_int)
        next: (literal_int)
        op: (range_op_inclusive)
        to: (literal_int)
      )
    )
    (pipeline
      (range
        from: (literal_int)
        next: (literal_int)
        op: (range_op_inclusive)
        to: (literal_int)
      )
    )
    (pipeline
      (range
        from: (literal_int)
        next: (literal_int)
        op: (range_op_right_exclusive)
        to: (literal_int)
      )
    )
  )
)

=====
values-range-subexpressions
=====

1..(5)..100
(1)..(5)..(100)
(1)..(5)..<(100)
(1)..(5)..=100

-----

(nu_script
  (block
    (pipeline
      (range
        from: (literal_int)
        next: (subexpression (block (pipeline (literal_int))))
        op: (range_op_inclusive)
        to: (literal_int)
      )
    )
    (pipeline
      (range
        from: (subexpression (block (pipeline (literal_int))))
        next: (subexpression (block (pipeline (literal_int))))
        op: (range_op_inclusive)
        to: (subexpression (block (pipeline (literal_int))))
      )
    )
    (pipeline
      (range
        from: (subexpression (block (pipeline (literal_int))))
        next: (subexpression (block (pipeline (literal_int))))
        op: (range_op_right_exclusive)
        to: (subexpression (block (pipeline (literal_int))))
      )
    )
    (pipeline
      (range
        from: (subexpression (block (pipeline (literal_int))))
        next: (subexpression (block (pipeline (literal_int))))
        op: (range_op_inclusive)
        to: (literal_int)
      )
    )
  )
)
