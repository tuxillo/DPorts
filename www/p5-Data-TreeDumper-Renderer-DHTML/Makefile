# New ports collection makefile for:	p5-Data-TreeDumper-Renderer-DHTML
# Date Created:				26 Dec 2005
# Whom:					Zach Thompson <hideo@lastamericanempire.com>
#
# $FreeBSD: ports/www/p5-Data-TreeDumper-Renderer-DHTML/Makefile,v 1.10 2012/11/17 06:02:48 svnexp Exp $
#

PORTNAME=	Data-TreeDumper-Renderer-DHTML
PORTVERSION=	0.09
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DHTML renderer for Data::TreeDumper

BUILD_DEPENDS=	p5-Data-TreeDumper>=0:${PORTSDIR}/devel/p5-Data-TreeDumper
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Data::TreeDumper::Renderer::DHTML.3

.include <bsd.port.mk>
