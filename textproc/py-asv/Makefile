# New ports collection makefile for:	py-asv
# Date created:		4 April 2001
# Whom:	      		Johann Visagie <johann@egenetics.com>
#
# $FreeBSD: ports/textproc/py-asv/Makefile,v 1.13 2012/11/17 06:02:17 svnexp Exp $
#

PORTNAME=	asv
PORTVERSION=	0.5
CATEGORIES=	textproc python
MASTER_SITES=	http://tratt.net/laurie/src/python/asv/releases/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An extensible Python module to parse simple text file formats like CSV

USE_PYTHON=	yes

PORTDOCS=	INSTALL README THANKS
PORTEXAMPLES=	asv_example.py example_data.csv
PLIST_FILES=	bin/asv \
		%%PYTHON_SITELIBDIR%%/ASV.py \
		%%PYTHON_SITELIBDIR%%/ASV.pyc \
		%%PYTHON_SITELIBDIR%%/ASV.pyo

do-build:
	@${PYTHON_CMD} ${PYTHON_LIBDIR}/compileall.py ${WRKSRC}
	@${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py ${WRKSRC}

do-install:
	@printf '#!/bin/sh\n${PYTHON_CMD} ${PYTHONPREFIX_SITELIBDIR}/ASV.py "$$@"\n' \
		> ${WRKDIR}/asv.sh
	${INSTALL_SCRIPT} ${WRKDIR}/asv.sh ${PREFIX}/bin/asv
	${INSTALL_DATA} ${WRKSRC}/ASV.* ${PYTHONPREFIX_SITELIBDIR}
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for docfile in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${docfile} ${DOCSDIR}
.endfor
.endif
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
.for egfile in ${PORTEXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/${egfile} ${EXAMPLESDIR}
.endfor
.endif

.include <bsd.port.mk>
