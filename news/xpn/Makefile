# New ports collection makefile for:	xpn
# Date created:		2007-01-14
# Whom:			Nicola Vitale <nivit@FreeBSD.org>
#
# $FreeBSD: ports/news/xpn/Makefile,v 1.11 2012/11/17 06:00:43 svnexp Exp $
#

PORTNAME=	xpn
PORTVERSION=	1.2.6
PORTREVISION=	4
CATEGORIES=	news python
MASTER_SITES=	http://xpn.altervista.org/codice/ \
		http://nivi.interfree.it/distfiles/${PORTNAME}/

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	X Python Newsreader

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/gtk-2.0/gtk/__init__.py:${PORTSDIR}/x11-toolkits/py-gtk2

NO_BUILD=	yes

USE_PYTHON=	2.5+

FIND_DIRS=	-type d
FIND_DATA=	-type f -mindepth 2 -not -name "*~"

SUB_FILES=	${PORTNAME}
SUB_LIST=	PYTHON_CMD=${PYTHON_CMD} XPN=${XPN}

USE_GETTEXT=	yes

XPN=	${PORTNAME}.py

do-install:
	${MKDIR} ${DATADIR}
	${INSTALL_SCRIPT} ${WRKSRC}/${XPN} ${DATADIR}/${XPN}
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${PREFIX}/bin/${PORTNAME}
	cd ${WRKSRC} && ${FIND} . ${FIND_DIRS} -exec ${MKDIR} ${DATADIR}/{} ";"
	cd ${WRKSRC} && ${FIND} . ${FIND_DATA} -exec ${INSTALL_DATA} {} ${DATADIR}/{} ";"
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.html ${DOCSDIR}
.endif

.include <bsd.port.mk>
