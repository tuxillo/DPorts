# New ports collection makefile for:	p5-DateTime-Event-Sunrise
# Date created:	   2 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-DateTime-Event-Sunrise/Makefile,v 1.11 2012/11/17 05:56:12 svnexp Exp $
#

PORTNAME=	DateTime-Event-Sunrise
PORTVERSION=	0.05.01
DISTVERSION=	${PORTVERSION:C/\.(..)$/\1/}
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DateTime Objects for sunrise and sunset for a given day

RUN_DEPENDS=	p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime \
		p5-DateTime-Set>=0:${PORTSDIR}/devel/p5-DateTime-Set
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		DateTime::Event::Sunrise.3

.include <bsd.port.mk>
