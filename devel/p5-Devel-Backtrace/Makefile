# New ports collection makefile for:  Devel-Backtrace
# Whom:		Andrey Kostenko <andrey@kostenko.name>
# Date created: 02 December 2009
#
# $FreeBSD: ports/devel/p5-Devel-Backtrace/Makefile,v 1.5 2012/11/17 05:56:13 svnexp Exp $
#

PORTNAME=	Devel-Backtrace
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Object-oriented backtrace

BUILD_DEPENDS=	p5-String-Escape>=0:${PORTSDIR}/textproc/p5-String-Escape \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
RUN_DEPENDS=	p5-String-Escape>=0:${PORTSDIR}/textproc/p5-String-Escape \
		p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor

PERL_CONFIGURE=	yes
MAN3=		Devel::Backtrace.3 \
		Devel::Backtrace::Point.3 \
		Devel::DollarAt.3

.include <bsd.port.mk>
