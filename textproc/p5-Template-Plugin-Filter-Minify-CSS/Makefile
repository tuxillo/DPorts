# New ports collection makefile for:	p5-Template-Plugin-Filter-Minify-CSS
# Date created:		2011-09-03
# Whom:			Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
#
# $FreeBSD: ports/textproc/p5-Template-Plugin-Filter-Minify-CSS/Makefile,v 1.4 2012/11/17 06:02:09 svnexp Exp $
#

PORTNAME=	Template-Plugin-Filter-Minify-CSS
PORTVERSION=	0.94
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	CSS::Minifier filter for Template Toolkit

BUILD_DEPENDS=	p5-CSS-Minifier>=0:${PORTSDIR}/textproc/p5-CSS-Minifier \
		p5-Module-Signature>=0:${PORTSDIR}/security/p5-Module-Signature \
		p5-Template-Toolkit>=2:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS=	p5-CSS-Minifier>=0:${PORTSDIR}/textproc/p5-CSS-Minifier \
		p5-Template-Toolkit>=2:${PORTSDIR}/www/p5-Template-Toolkit

PERL_CONFIGURE=	yes

MAN3=		Template::Plugin::Filter::Minify::CSS.3

.include <bsd.port.pre.mk>

.if ${PERL_LEVEL} < 500808
BUILD_DEPENDS+=	p5-ExtUtils-MakeMaker>=6.30:${PORTSDIR}/devel/p5-ExtUtils-MakeMaker
.endif

.include <bsd.port.post.mk>
