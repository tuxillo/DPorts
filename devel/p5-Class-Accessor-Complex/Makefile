# New ports collection makefile for:	p5-Class-Accessor-Complex
# Date created:		2010-11-28
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/devel/p5-Class-Accessor-Complex/Makefile,v 1.7 2012/12/16 06:16:54 svnexp Exp $
#

PORTNAME=	Class-Accessor-Complex
PORTVERSION=	1.100880
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Arrays, hashes, booleans, integers, sets, and more

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor \
		p5-Data-Miscellany>=0:${PORTSDIR}/devel/p5-Data-Miscellany \
		p5-List-MoreUtils>=0:${PORTSDIR}/lang/p5-List-MoreUtils \
		p5-Class-Accessor-Installer>=0:${PORTSDIR}/devel/p5-Class-Accessor-Installer
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Class::Accessor::Complex.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 501001
RUN_DEPENDS+=	p5-parent>=0:${PORTSDIR}/devel/p5-parent
.endif

.include <bsd.port.post.mk>
