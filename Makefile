#Copyright (C) 2010, shiv Shankar Dayal
#his file is part of Learn Correct programming.

#This book is free document. All conditions of GNU FDL are applicable.

#YOu should have received a copy of the GNU FDL 
#along with this software.  If not, see <http://www.gnu.org/licenses/>.
#Disclaimer: Any damage or loss of data because of programs given in this
#will bear no responsibility to author under any circumstances.

OBJECTS=C.tex preface.tex introduction.tex fs.tex env.tex 
c.pdf: $(OBJECTS)
	context --automp --mode=screen C.tex
