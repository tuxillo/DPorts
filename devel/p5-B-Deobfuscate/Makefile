# New ports collection makefile for:	p5-B-Deobfuscate
# Date created:	   7 july 2003
# Whom:		   Mathieu Arnold <m@absolight.net>
#
# $FreeBSD: ports/devel/p5-B-Deobfuscate/Makefile,v 1.15 2012/11/17 05:56:05 svnexp Exp $
#

PORTNAME=	B-Deobfuscate
PORTVERSION=	0.20
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Extension to B::Deparse for use in de-obfuscating source code

RUN_DEPENDS=	p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML \
		p5-B-Keywords>=0:${PORTSDIR}/devel/p5-B-Keywords
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		B::Deobfuscate.3 B::Deobfuscate::Dict::Flowers.3 B::Deobfuscate::Dict::PGPHashWords.3

.include <bsd.port.mk>
