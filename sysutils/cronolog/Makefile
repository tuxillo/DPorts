# Created by: Mark Blackman <tmb_ports@maddog.u-net.com>
# $FreeBSD: ports/sysutils/cronolog/Makefile,v 1.26 2012/12/12 02:32:26 svnexp Exp $

PORTNAME=	cronolog
PORTVERSION=	1.6.2
PORTREVISION=	4
CATEGORIES=	sysutils
MASTER_SITES=	http://cronolog.org/download/

MAINTAINER=	bdrewery@FreeBSD.org
COMMENT=	Web log rotation utility that provides datestamp filenames

CONFLICTS_INSTALL=      cronolog-devel-[0-9]*

INFO=		cronolog
MAN1=		cronolog.1m cronosplit.1m

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	SETUID_PATCH
OPTIONS_DEFAULT=	SETUID_PATCH
SETUID_PATCH_DESC=	Build with setuid functionality

EXTRA_PATCHES=	${FILESDIR}/extrapatch-src_cronoutils.c
PATCH_STRIP=	-p1

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MSETUID_PATCH}
MASTER_SITES+=	http://cronolog.org/patches/:patches
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} cronolog-setugid-patch.txt:patches
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}
EXTRA_PATCHES+=	${WRKDIR}/cronolog-setugid-patch.txt
USE_DOS2UNIX=	../cronolog-setugid-patch.txt

post-extract:
	@${CP} ${DISTDIR}/cronolog-setugid-patch.txt ${WRKDIR}/
	@cd ${WRKSRC} && ${TOUCH} aclocal.m4 Makefile.in */Makefile.in
.endif

.include <bsd.port.mk>
