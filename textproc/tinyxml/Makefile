# New ports collection makefile for:	tinyxml
# Date created:	   28 July 2004
# Whom:		   Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/textproc/tinyxml/Makefile,v 1.13 2012/11/17 06:02:23 svnexp Exp $
#

PORTNAME=	tinyxml
PORTVERSION=	2.6.2
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}_${PORTVERSION:S/./_/g}

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	Small C++ XML parser

WRKSRC=		${WRKDIR}/${PORTNAME}

USE_LDCONFIG=	YES
SHLIB_MAJOR=	3
PLIST_SUB=	SHLIB_MAJOR="${SHLIB_MAJOR}"

.if defined(NOPROFILE) || defined(NO_PROFILE)
PLIST_SUB+=	PROFILE="@comment "
.else
PLIST_SUB+=	PROFILE=""
.endif

post-patch:
	${MV} ${WRKSRC}/Makefile ${WRKSRC}/Makefile.prev
	@${SED} -e "s=%%SHLIB_MAJOR%%=${SHLIB_MAJOR}=g" \
		${FILESDIR}/Makefile > ${WRKSRC}/Makefile

post-install:
.ifndef(NOPORTDOCS)
	@${ECHO_MSG} "===>   Installing documentation for ${PKGNAME}"
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/docs/* ${DOCSDIR}
.endif

.include <bsd.port.mk>
