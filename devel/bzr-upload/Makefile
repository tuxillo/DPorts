# Ports collection makefile for:	bzr-upload
# Date created:				2010-12-11
# Whom:					Carlo Strub <c-s@c-s.li>
#
# $FreeBSD: ports/devel/bzr-upload/Makefile,v 1.6 2012/11/17 05:55:36 svnexp Exp $
#

PORTNAME=	bzr-upload
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://launchpadlibrarian.net/96912507/ \
		http://www.c-s.li/ports/

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Bzr plugin to incrementally upload changes to a dumb server

LICENSE=	GPLv2

BUILD_DEPENDS=	bzr:${PORTSDIR}/devel/bzr
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USE_PYTHON=		yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_PKGNAME=	bzr_upload

.include <bsd.port.mk>
