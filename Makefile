#Copyright (C) 2010, shiv Shankar Dayal
#his file is part of Learn Correct programming.

#This book is free document. All conditions of GNU FDL 1.3 are applicable.

#YOu should have received a copy of the GNU FDL along with this document.  If
#not, see <http://www.gnu.org/licenses/>.
#Disclaimer: Any damage or loss of data because of programs given in this
#will bear no responsibility to author under any circumstances.

OBJECTS=oz.tex preface.tex pcm.tex introduction.tex fs.tex env.tex language.tex
oz.pdf: $(OBJECTS)
	context  --mode=screen --btachmde oz.tex
clean: oz.pdf
	rm oz.pdf
