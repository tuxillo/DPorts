# New ports collection makefile for:    p5-ZConf-RSS
# Date created:         2009-11-09
# Whom:                 Zane C, Bowers <vvelox@vvelox.net>
#
# $FreeBSD: ports/www/p5-ZConf-RSS/Makefile,v 1.6 2012/11/17 06:02:56 svnexp Exp $
#

PORTNAME=	ZConf-RSS
PORTVERSION=	2.2.0
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VVELOX
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	ZConf backed RSS fetching and viewing

BUILD_DEPENDS=	p5-ZConf>=0:${PORTSDIR}/net/p5-ZConf \
		p5-ZConf-GUI>=0:${PORTSDIR}/devel/p5-ZConf-GUI \
		p5-XML-FeedPP>=0:${PORTSDIR}/textproc/p5-XML-FeedPP \
		p5-Text-NeatTemplate>=0:${PORTSDIR}/textproc/p5-Text-NeatTemplate \
		p5-HTML-FormatText-WithLinks>=0:${PORTSDIR}/textproc/p5-HTML-FormatText-WithLinks
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		ZConf::RSS.3 \
		ZConf::RSS::GUI.3

.include <bsd.port.mk>
