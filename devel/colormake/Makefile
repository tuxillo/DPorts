# $FreeBSD: ports/devel/colormake/Makefile,v 1.2 2012/11/17 05:55:38 svnexp Exp $

PORTNAME=	colormake
PORTVERSION=	0.9
CATEGORIES=	devel
MASTER_SITES=	http://bre.klaki.net/programs/colormake/

MAINTAINER=	arved@FreeBSD.org
COMMENT=	Wrapper to color gmake output

RUN_DEPENDS=	gmake:${PORTSDIR}/devel/gmake \
		bash:${PORTSDIR}/shells/bash

NO_BUILD=	yes
USE_PERL5_RUN=	yes
PLIST_FILES=	bin/colormake bin/colormake.pl bin/colormake-short bin/clmake \
		bin/clmake-short

post-patch:
	cd ${WRKSRC} && \
	${REINPLACE_CMD} -e "s,make ,gmake ,g;s,/bin/bash,${LOCALBASE}/bin/bash,g" \
		colormake colormake-short clmake clmake-short

do-install:
	cd ${WRKSRC} && \
	${INSTALL_SCRIPT} colormake.pl colormake colormake-short clmake \
		clmake-short ${PREFIX}/bin

.include <bsd.port.mk>
