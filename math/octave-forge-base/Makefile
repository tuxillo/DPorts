# New ports collection makefile for:	octave-forge-base
# Date created:		8 September 2008
# Whom:			Stephen Montgomery-Smith <stephen@math.missouri.edu>
#
# $FreeBSD: ports/math/octave-forge-base/Makefile,v 1.19 2012/11/17 05:59:24 svnexp Exp $
#

PORTNAME=	octave-forge-base
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	math
MASTER_SITES=	#none
DISTFILES=	#none
EXTRACT_ONLY=	#none

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge baseport for all packages

RUN_DEPENDS+=	octave:${PORTSDIR}/math/octave \
		gmake:${PORTSDIR}/devel/gmake \
		p5-Archive-Tar>=0:${PORTSDIR}/archivers/p5-Archive-Tar \
		p5-IO-Zlib>=0:${PORTSDIR}/archivers/p5-IO-Zlib \
		p5-File-Remove>=0:${PORTSDIR}/devel/p5-File-Remove

USE_PERL5=	yes
SUB_FILES=	load-octave-pkg
SUB_LIST+=	PERL=${PERL}

do-build:
	@${DO_NADA}

do-install:
	${MKDIR} ${PREFIX}/share/octave/tarballs
	${INSTALL_SCRIPT} ${WRKDIR}/load-octave-pkg ${PREFIX}/libexec/octave
	${PREFIX}/libexec/octave/load-octave-pkg

.include <bsd.port.mk>
