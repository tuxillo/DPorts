# New ports collection makefile for:	octave-forge-dataframe
# Date created:		26 August 2010
# Whom:			Stephen Montgomery-Smith <stephen@missouri.edu>
#
# $FreeBSD: ports/math/octave-forge-dataframe/Makefile,v 1.10 2012/11/17 05:59:24 svnexp Exp $
#

PORTNAME=	octave-forge-dataframe
PORTVERSION=	0.9.1
PORTREVISION=	2
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${OCTAVE_PKGNAME}

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/Mk/bsd.octave.mk"
do-build:
	@${DO_NADA}

post-build:
	${RM} -f ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.post.mk>
