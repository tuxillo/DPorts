# Created by: Remington Lang <MrL0Lz@gmail.com>
# $FreeBSD: ports/sysutils/915resolution/Makefile,v 1.15 2012/11/17 06:01:24 svnexp Exp $

PORTNAME=	915resolution
PORTVERSION=	0.5.3
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	ehaupt

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Resolution tool for Intel i915 video cards

USE_RC_SUBR=	915resolution

DOCS=		README.txt LICENSE.txt chipset_info.txt changes.log

ONLY_FOR_ARCHS=	i386 amd64

.include <bsd.port.pre.mk>

do-build:
	cd ${WRKSRC} && \
		${CC} ${CFLAGS} 915resolution.c -o 915resolution

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/915resolution ${PREFIX}/sbin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${DOCS:S,^,${WRKSRC}/,} ${DOCSDIR}/
.endif

.include <bsd.port.post.mk>
