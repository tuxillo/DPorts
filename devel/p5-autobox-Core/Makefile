# New ports collection makefile for:	p5-autobox-Core
# Date created:				5th March, 2010
# Whom:					Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/p5-autobox-Core/Makefile,v 1.7 2012/11/17 05:56:36 svnexp Exp $
#

PORTNAME=	autobox-Core
PORTVERSION=	1.24
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	wen@FreeBSD.org
COMMENT=	Core functions exposed as methods in primitive types

BUILD_DEPENDS=	p5-autobox>=0:${PORTSDIR}/devel/p5-autobox
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		autobox::Core.3

.include <bsd.port.mk>
