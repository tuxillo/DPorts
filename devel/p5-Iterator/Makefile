# New ports collection makefile for:	Iterator
# Date created:				18 Feb 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Iterator/Makefile,v 1.11 2012/11/26 22:23:10 svnexp Exp $
#

PORTNAME=	Iterator
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	A general-purpose iterator class

BUILD_DEPENDS=	p5-Exception-Class>=0:${PORTSDIR}/devel/p5-Exception-Class
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Iterator.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
