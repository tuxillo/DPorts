# New ports collection makefile for:	p5-Text-Decorator
# Date created:				05 Jun 06
# Whom:					Aaron Dalton <aaron@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Text-Decorator/Makefile,v 1.7 2012/11/17 06:02:09 svnexp Exp $
#

PORTNAME=	Text-Decorator
PORTVERSION=	1.65
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Apply a chain of filters to text

BUILD_DEPENDS=	p5-URI-Find>=0:${PORTSDIR}/textproc/p5-URI-Find \
		p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-UNIVERSAL-require>=0:${PORTSDIR}/devel/p5-UNIVERSAL-require
RUN_DEPENDS:=	${BUILD_DEPENDS}

MAN3=	Text::Decorator.3 \
	Text::Decorator::Filter.3 \
	Text::Decorator::Filter::Quoted.3 \
	Text::Decorator::Filter::TTBridge.3 \
	Text::Decorator::Filter::Test.3 \
	Text::Decorator::Filter::URIFind.3 \
	Text::Decorator::Group.3 \
	Text::Decorator::Node.3

PERL_MODBUILD=	yes

.include <bsd.port.mk>
