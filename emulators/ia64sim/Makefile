# ex:ts=8
# Ports collection makefile for:  ia64sim
# Date created:			  Tue Oct 10, 2000
# Whom:				  David O'Brien (obrien@NUXI.com)
#
# $FreeBSD: ports/emulators/ia64sim/Makefile,v 1.22 2012/11/17 05:57:20 svnexp Exp $
#

PORTNAME=	ia64sim
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	emulators
MASTER_SITES=	http://www.boo.net/~jasonp/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	IA64 simulator (Intel(R) Architecture 64)

USE_ZIP=	yes

.include <bsd.port.pre.mk>

.if ${ARCH} == "alpha"
BROKEN=		Does not compile on alpha
.endif

EXTRACT_BEFORE_ARGS=	-qLa
WRKSRC=		${WRKDIR}/home/chuck/ia64simcc
USE_GMAKE=	yes
MAKEFILE=	makefile.unx

PLIST_FILES=	bin/ia64sim
PORTDOCS=	ia64user.txt readme

pre-build:
	${RM} -f ${WRKSRC}/obj/*.o
	${RM} -f ${WRKSRC}/ia64sim

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ia64sim ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/ia64user.txt ${WRKSRC}/readme ${DOCSDIR}
.endif

.include <bsd.port.post.mk>
