# New ports collection makefile for:	devel/p5-VCP-Source-cvsbk
# Date created:				Sep 1 2004
# Whom:					June-Yen Huang <jihuang@gate.sinica.edu.tw>
#
# $FreeBSD: ports/devel/p5-VCP-Source-cvsbk/Makefile,v 1.10 2012/11/17 05:56:36 svnexp Exp $
#

PORTNAME=	VCP-Source-cvsbk
PORTVERSION=	0.11
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:CLKAO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	VCP source driver for bk exported cvs repository

BUILD_DEPENDS=	p5-VCP-autrijus>=0:${PORTSDIR}/devel/p5-VCP-autrijus
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		VCP::Source::cvsbk.3 \
		VCP::Filter::cvsbkchangeset.3

.include <bsd.port.mk>
