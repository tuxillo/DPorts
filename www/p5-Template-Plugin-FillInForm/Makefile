# New ports collection makefile for:	www/p5-Template-Plugin-FillInForm
# Date created:				07 November 2007
# Whom:					Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Template-Plugin-FillInForm/Makefile,v 1.4 2012/11/17 06:02:54 svnexp Exp $
#

PORTNAME=	Template-Plugin-FillInForm
PORTVERSION=	0.04
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Template
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Template::Plugin::FillInForm - TT plugin for HTML::FillInForm

RUN_DEPENDS=	p5-HTML-FillInForm>=0:${PORTSDIR}/www/p5-HTML-FillInForm \
		p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Template::Plugin::FillInForm.3

.include <bsd.port.mk>
