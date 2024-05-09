=====
expression-subexpression
=====

(1; 4)
(1; 4.2)
(1 ;4.2)
(2023-12-29T00:01:00)
(true; 0x[01ff]; null)
(
  true;
  0x[01ff];
  null
)
(true;
  0x[01ff]; 0x[aabb];
  (
    42; 42
  );
  null)

-----

(nu_script
  (block
    (pipeline
      (subexpression
        (block
          (pipeline (literal_int))
          (pipeline (literal_int))
        )
      )
    )
    (pipeline
      (subexpression
        (block
          (pipeline (literal_int))
          (pipeline (literal_float))
        )
      )
    )
    (pipeline
      (subexpression
        (block
          (pipeline (literal_int))
          (pipeline (literal_float))
        )
      )
    )
    (pipeline
      (subexpression
        (block
          (pipeline (literal_date))
        )
      )
    )
    (pipeline
      (subexpression
        (block
          (pipeline (literal_bool))
          (pipeline (literal_binary))
          (pipeline (literal_null))
        )
      )
    )
    (pipeline
      (subexpression
        (block
          (pipeline (literal_bool))
          (pipeline (literal_binary))
          (pipeline (literal_null))
        )
      )
    )
    (pipeline
      (subexpression
        (block
          (pipeline (literal_bool))
          (pipeline (literal_binary))
          (pipeline (literal_binary))
          (pipeline (subexpression (block
            (pipeline (literal_int))
            (pipeline (literal_int))
          )))
          (pipeline (literal_null))
        )
      )
    )
  )
)
