# ex:ts=8
# Ports collection makefile for:	Flickr::API
# Date created:			May 19, 2005
# Whom:				ijliao
#
# $FreeBSD: ports/www/p5-Flickr-API/Makefile,v 1.17 2012/11/17 06:02:48 svnexp Exp $
#

PORTNAME=	Flickr-API
PORTVERSION=	1.05
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the Flickr API

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-XML-Parser-Lite-Tree>=0:${PORTSDIR}/textproc/p5-XML-Parser-Lite-Tree

PERL_CONFIGURE=	yes

MAN3=		Flickr::API.3 Flickr::API::Request.3 Flickr::API::Response.3

.include <bsd.port.mk>
