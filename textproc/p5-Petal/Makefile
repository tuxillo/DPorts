# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: ports/textproc/p5-Petal/Makefile,v 1.12 2012/12/22 17:29:12 svnexp Exp $

PORTNAME=	Petal
PORTVERSION=	2.21
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:NINE
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl Template Attribute Language - TAL for Perl!

BUILD_DEPENDS=	p5-MKDoc-XML>=0:${PORTSDIR}/textproc/p5-MKDoc-XML
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Petal.3 \
	Petal::Cookbook.3 \
	Petal::Deprecated.3 \
	Petal::Hash::Test.3 \
	Petal::I18N.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
