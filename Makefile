OBJECTS=C.tex preface.tex introduction.tex fs.tex env.tex
c.pdf: $(OBJECTS)
	context --automp --mode=screen C.tex
