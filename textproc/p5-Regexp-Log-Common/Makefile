# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: ports/textproc/p5-Regexp-Log-Common/Makefile,v 1.11 2012/11/17 06:02:07 svnexp Exp $

PORTNAME=	Regexp-Log-Common
PORTVERSION=	0.07
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Regexp::Log::Common, a parser for the Common Log Format

LICENSE=	ART20

RUN_DEPENDS=	p5-Regexp-Log>=0:${PORTSDIR}/textproc/p5-Regexp-Log
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Regexp::Log::Common.3

.include <bsd.port.mk>
