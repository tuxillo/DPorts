# New ports collection makefile for:    ha
# Date created:         24 Jan 1995
# Whom:                 ache
#
# $FreeBSD: ports/archivers/ha/Makefile,v 1.27 2012/11/17 05:54:20 svnexp Exp $
#

PORTNAME=	ha
PORTVERSION=	0.999b
PORTREVISION=	1
CATEGORIES=	archivers
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}
DISTNAME=	ha0999
EXTRACT_SUFX=	.tgz

MAINTAINER=	ak@FreeBSD.org
COMMENT=	The HA archiver using the HSC compression method

PROJECTHOST=	ak-various-projects

NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/ha
MAKEFILE=	makefile.nix
ALL_TARGET=	ha
USE_GMAKE=	yes

post-patch:
	@${REINPLACE_CMD} 's,<malloc.h>,<stdlib.h>,' \
		${WRKSRC}/c/hsc.c ${WRKSRC}/c/cpy.c \
		${WRKSRC}/c/asc.c
	@${REINPLACE_CMD} -e 's|CC =|CC ?=|' \
		-e 's|LDFLAGS = -O2||' \
		-e 's|CFLAGS = -Wall -O2|CFLAGS += -Wall|' \
		${WRKSRC}/makefile.nix

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/ha ${PREFIX}/bin

.include <bsd.port.mk>
