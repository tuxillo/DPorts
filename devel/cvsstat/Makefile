# New ports collection makefile for:	cvsstat
# Date created:				27 August 2001
# Whom:					petef
#
# $FreeBSD: ports/devel/cvsstat/Makefile,v 1.12 2012/11/17 05:55:39 svnexp Exp $
#

PORTNAME=	cvsstat
PORTVERSION=	2.24
CATEGORIES=	devel
MASTER_SITES=	http://cvs.sslug.dk/cvs2html/utils/
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	# empty
DIST_SUBDIR=	${PORTNAME}-${PORTVERSION}
EXTRACT_ONLY=	# empty

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Transforms the output of 'cvs status' to a sorted ASCII table

USE_PERL5=	yes
NO_BUILD=	yes
PLIST_FILES=	bin/cvsstat

do-extract:
	@${MKDIR} ${WRKSRC}
	@${CP} -p ${DISTDIR}/${DIST_SUBDIR}/${DISTNAME} ${WRKSRC}

post-patch:
	@${PERL} -pi -e 's,^#!/usr/bin/perl,#!${PERL},' ${WRKSRC}/cvsstat

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/cvsstat ${PREFIX}/bin

.include <bsd.port.mk>
