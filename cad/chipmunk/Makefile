# New ports collection makefile for:	chipmunk
# Date created:		29 July 1995
# Whom:			janek@gaja.ipan.lublin.pl
#
# $FreeBSD: ports/cad/chipmunk/Makefile,v 1.29 2012/11/17 05:54:53 svnexp Exp $
#

PORTNAME=	chipmunk
PORTVERSION=	5.65
CATEGORIES=	cad
MASTER_SITES=	http://www.cs.berkeley.edu/~lazzaro/chipmunk/pickup/sources/
DISTFILES=	psys-1.60.tar.gz log-5.65.tar.gz netcmp-1.14.tar.gz \
		mosis-1.15.tar.gz wol-1.15.tar.gz wolcomp-1.15.tar.gz \
		until-1.15.tar.gz util-1.12.tar.gz view-1.15.tar.gz \
		Makefile
DIST_SUBDIR=	chipmunk
EXTRACT_ONLY=	psys-1.60.tar.gz log-5.65.tar.gz netcmp-1.14.tar.gz \
		mosis-1.15.tar.gz wol-1.15.tar.gz wolcomp-1.15.tar.gz \
		until-1.15.tar.gz util-1.12.tar.gz view-1.15.tar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An electronic CAD system

LICENSE=	GPLv2

NO_WRKSUBDIR=	yes

USE_XORG=	x11
USE_GMAKE=	yes
MAKE_JOBS_SAFE=	yes

.include <bsd.port.pre.mk>

.if ${ARCH} == "sparc64"
BROKEN=		Fails to install
.endif

post-extract:
	@${CP} -f ${DISTDIR}/${DIST_SUBDIR}/Makefile ${WRKSRC}/Makefile

.include <bsd.port.post.mk>
