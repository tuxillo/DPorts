# New ports collection makefile for:		swatch
# Date created:					May 2 97
# Whom:						jfitz
#
# $FreeBSD: ports/security/swatch/Makefile,v 1.34 2012/11/17 06:01:21 svnexp Exp $
#

PORTNAME=	swatch
PORTVERSION=	3.2.3
PORTREVISION=	2
CATEGORIES=	security sysutils
MASTER_SITES=	SF

MAINTAINER=	joseph@randomnetworks.com
COMMENT=	The Simple WATCHer and filter

BUILD_DEPENDS=	\
	p5-TimeDate>=0:${PORTSDIR}/devel/p5-TimeDate \
	p5-Date-Manip>=0:${PORTSDIR}/devel/p5-Date-Manip \
	p5-Date-Calc>=0:${PORTSDIR}/devel/p5-Date-Calc \
	p5-File-Tail>=0:${PORTSDIR}/devel/p5-File-Tail
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
CONFIGURE_ARGS=	INSTALLMAN1DIR=${PREFIX}/man/man1
USE_RC_SUBR=	${PORTNAME}

MAN1=	swatch.1
MAN3=	Swatch::Actions.3 Swatch::Throttle.3 Swatch::Threshold.3

post-patch:
	${FIND} ${WRKSRC} -name "*.orig" -delete

.include <bsd.port.mk>
