	PROGRAM FLTDEC
C FLOATING POINT DEMONSTRATION
	REAL F
	INTEGER I(2)
C
	EQUIVALENCE(F,I)
C
	TYPE *,'ENTER FLOATING POINT NUMBER '
	ACCEPT *,F
C
10	FORMAT(' FLOATING POINT: ',F10.5,' STORED AS: ',O6,O6)
	TYPE 10,F,I(2),I(1)
	END
                                                                                                                                                                                                                                                                               