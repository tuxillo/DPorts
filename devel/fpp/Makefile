# New ports collection makefile for: Sun fortran preprocessor fpp
# Date created:		30 January 1996
# Whom:		 	vazquez@iqm.unicamp.br
#
# $FreeBSD: ports/devel/fpp/Makefile,v 1.13 2012/11/17 05:55:43 svnexp Exp $
#

PORTNAME=	fpp
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	NL
MASTER_SITE_SUBDIR=	fortran
DISTNAME=	fdfpp
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fortran preprocessor for FORTRAN 77 and Fortran 90 programs

USE_GMAKE=	yes
ALL_TARGET=	bsd44
INSTALL_TARGET=	bsd44-install
MAN1=		fpp.1

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/README ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/fpp_spec ${DOCSDIR}
	${INSTALL_MAN} ${WRKSRC}/fpp_license.ps ${DOCSDIR}
.endif

.include <bsd.port.mk>
