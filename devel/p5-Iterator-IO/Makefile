# New ports collection makefile for:	Iterator-IO
# Date created:				18 Feb 2006
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Iterator-IO/Makefile,v 1.9 2012/11/17 05:56:19 svnexp Exp $
#

PORTNAME=	Iterator-IO
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Filesystem and stream iterators

BUILD_DEPENDS=	p5-Iterator>=0:${PORTSDIR}/devel/p5-Iterator
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Iterator::IO.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
