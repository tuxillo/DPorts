# New ports collection makefile for:	cvstrac
# Date created:				29 August 2002
# Whom:					Bruce M Simpson <bms@spc.org>
#
# $FreeBSD: ports/devel/cvstrac/Makefile,v 1.15 2012/11/17 05:55:39 svnexp Exp $
#

PORTNAME?=	cvstrac
PORTVERSION=	2.0.1
CATEGORIES=	devel
MASTER_SITES=	http://www.cvstrac.org/
DISTNAME=	cvstrac-${PORTVERSION}

MAINTAINER=	glarkin@FreeBSD.org
COMMENT?=	Web-Based Bug And Patch-Set Tracking System For CVS

WRKSRC=		${WRKDIR}/cvstrac-${PORTVERSION}
USE_SQLITE=	yes
USE_GNOME=	pkgconfig
USE_GMAKE=	yes

MAKE_ARGS+=	SRCDIR=${WRKSRC} PREFIX=${PREFIX} LOCALBASE=${LOCALBASE}
MAKE_JOBS_UNSAFE=	yes

NOMAN=
PLIST_FILES=	bin/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
