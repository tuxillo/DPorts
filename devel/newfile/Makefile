# New ports collection makefile for: 	newfile
# Date created:				Thu Jan 30 17:34:12 CET 2003
# Whom:					Miguel Mendez <flynn@energyhq.homeip.net>
#
# $FreeBSD: ports/devel/newfile/Makefile,v 1.21 2012/11/17 05:56:01 svnexp Exp $
#

PORTNAME=	newfile
PORTVERSION=	1.0.14
PORTREVISION=	3
CATEGORIES=	devel
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A tool for creating starter files in various languages

USE_RUBY=	yes
GNU_CONFIGURE=	yes

MAN1=		newfile.1
DOCS=		doc/newfile.html

post-install:
	${INSTALL_MAN} ${WRKSRC}/doc/newfile.1 ${MAN1PREFIX}/man/man1
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
