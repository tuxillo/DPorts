# New ports collection makefile for:	p5-CatalystX-LeakChecker
# Date created:		2011-05-08
# Whom:			Steve Wills <swills@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-CatalystX-LeakChecker/Makefile,v 1.3 2012/11/17 06:02:48 svnexp Exp $
#

PORTNAME=	CatalystX-LeakChecker
PORTVERSION=	0.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:FLORA
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Debug memory leaks in Catalyst applications

BUILD_DEPENDS=	p5-Catalyst-Runtime>=0:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Devel-Cycle>0:${PORTSDIR}/devel/p5-Devel-Cycle \
		p5-PadWalker>0:${PORTSDIR}/devel/p5-PadWalker
RUN_DEPENDS=	p5-Catalyst-Runtime>=0:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Devel-Cycle>0:${PORTSDIR}/devel/p5-Devel-Cycle \
		p5-PadWalker>0:${PORTSDIR}/devel/p5-PadWalker

USE_PERL5=	yes
PERL_CONFIGURE=	yes

MAN3=		CatalystX::LeakChecker.3

.include <bsd.port.mk>
