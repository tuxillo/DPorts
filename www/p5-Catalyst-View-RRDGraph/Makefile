# New ports collection makefile for:	p5-Catalyst-View-RRDGraph
# Date created:		2008-12-22
# Whom:			Andrej Zverev <az@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Catalyst-View-RRDGraph/Makefile,v 1.11 2012/11/17 06:02:48 svnexp Exp $
#

PORTNAME=	Catalyst-View-RRDGraph
PORTVERSION=	0.05
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	RRD graph view class for catalyst

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-Catalyst-Plugin-Static-Simple>=0.17:${PORTSDIR}/www/p5-Catalyst-Plugin-Static-Simple \
		rrdtool>=0:${PORTSDIR}/databases/rrdtool \
		p5-MRO-Compat>=0:${PORTSDIR}/devel/p5-MRO-Compat
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-MockObject>=1.07:${PORTSDIR}/devel/p5-Test-MockObject \
		p5-Catalyst-Plugin-ConfigLoader>=0.22:${PORTSDIR}/www/p5-Catalyst-Plugin-ConfigLoader

PERL_CONFIGURE=	yes

MAN3=	Catalyst::Helper::View::RRDGraph.3 \
	Catalyst::View::RRDGraph.3

.include <bsd.port.mk>
