# New ports collection makefile for:    boa-constructor
# Date created:         		15 December 2000
# Whom:                 		Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/devel/boaconstructor/Makefile,v 1.28 2012/11/17 05:55:35 svnexp Exp $
#

PORTNAME=	boaconstructor
PORTVERSION=	0.6.1
PORTREVISION=	4
CATEGORIES=	devel python
#MASTER_SITES=	SF/boa-constructor/Boa-Constructor/${PORTVERSION}-alpha
MASTER_SITES=	SF/boa-constructor/Boa-Constructor/${PORTVERSION}-beta
DISTNAME=	boa-constructor-${PORTVERSION}.src

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A cross platform RAD GUI Building IDE for wxPython

WRKSRC=		${WRKDIR}/boa-constructor-${PORTVERSION}

USE_ZIP=	yes
USE_GETTEXT=	yes
USE_PYTHON=	yes
USE_WX=		2.6
WX_COMPS=	python
DATADIR=	${PREFIX}/share/Boa

do-build:
	@${PYTHON_CMD} ${PYTHON_LIBDIR}/compileall.py -x zoa ${WRKSRC}
	@${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py -x zoa ${WRKSRC}
	@${PYTHON_CMD} ${PYTHON_LIBDIR}/py_compile.py ${WRKSRC}/ZopeLib/zoa/breakpoint.py
	@${PYTHON_CMD} -O ${PYTHON_LIBDIR}/py_compile.py ${WRKSRC}/ZopeLib/zoa/breakpoint.py

do-install:
	@${MKDIR} ${DATADIR}
	@${TAR} cCf ${WRKSRC} - --exclude "*.orig" . | ${TAR} xUCf ${DATADIR} -
	@printf "#!/bin/sh\n${PYTHON_CMD} ${DATADIR}/Boa.py\n" \
		> ${WRKDIR}/Boa.sh
	@${INSTALL_SCRIPT} ${WRKDIR}/Boa.sh ${PREFIX}/bin/Boa

.include <bsd.port.mk>
