# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: ports/archivers/mar/Makefile,v 1.16 2012/12/18 08:04:12 svnexp Exp $

PORTNAME=	mar
DISTVERSION=	0.5
CATEGORIES=	archivers
MASTER_SITES=	CRITICAL
DISTNAME=	${PORTNAME}-${DISTVERSION}-src

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Simple binary file format for storing arbitrary meta and user data

LICENSE=	MIT

MAKE_JOBS_SAFE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${DISTVERSION}

MAN1=		mar.1

post-patch:
	@${REINPLACE_CMD} -E "s#^(CFLAGS\ |CXXFLAGS\ |CC\ |CXX\ )#\1?#" \
		${WRKSRC}/src/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/man/man1/mar.1 ${MAN1PREFIX}/man/man1

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/html/*.html ${DOCSDIR}
.endif

.include <bsd.port.mk>
