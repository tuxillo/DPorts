# New ports collection makefile for:	p5-MediaWiki
# Date created:		2006-08-15
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/www/p5-MediaWiki/Makefile,v 1.13 2012/11/17 06:02:51 svnexp Exp $
#

PORTNAME=	MediaWiki
PORTVERSION=	1.13
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SPECTRUM
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	OOP MediaWiki engine client

RUN_DEPENDS=	p5-Config-IniHash>=0:${PORTSDIR}/devel/p5-Config-IniHash \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-libwww>=0:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		MediaWiki.3

.include <bsd.port.mk>
