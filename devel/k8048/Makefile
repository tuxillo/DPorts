# Created by: Bruce M. Simpson <bms@FreeBSD.org>
# $FreeBSD: ports/devel/k8048/Makefile,v 1.11 2013/01/16 09:04:18 svnexp Exp $

PORTNAME=	k8048
PORTVERSION=	2.11
CATEGORIES=	devel
MASTER_SITES=	http://dev.kewl.org/k8048/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Programs Microchip PICs using Velleman K8048 board

LICENSE=	BSD

WRKSRC=		${WRKDIR}/${PORTNAME}/Src

USE_GMAKE=	yes
ALL_TARGET=	build

PLIST_FILES=	bin/${PORTNAME} bin/kio ${BIN_SYMLINKS}

BIN_SYMLINKS=	bin/k12 bin/k14 bin/k16 bin/ktest

post-patch:
	@${REINPLACE_CMD} -e \
		's|^CC=|CC?=| ; \
		 s|^CFLAGS=|CFLAGS+=| ; \
		 s|-ggdb||' ${WRKSRC}/Makefile

do-install:
	(cd ${WRKSRC} && ${INSTALL_PROGRAM} ${PORTNAME} kio ${PREFIX}/bin)
.for i in ${BIN_SYMLINKS}
	${LN} -sf ${PORTNAME} ${PREFIX}/${i}
.endfor

.include <bsd.port.mk>
