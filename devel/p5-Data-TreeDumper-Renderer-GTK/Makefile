# New ports collection makefile for:	p5-Data-TreeDumper-Renderer-GTK
# Date Created:				21 Apr 2008
# Whom:					Emanuel Haupt <ehaupt@FreeBSD.org>
#
# $FreeBSD: ports/devel/p5-Data-TreeDumper-Renderer-GTK/Makefile,v 1.11 2012/11/17 05:56:11 svnexp Exp $
#

PORTNAME=	Data-TreeDumper-Renderer-GTK
PORTVERSION=	0.02
PORTREVISION=	4
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	GTK renderer for Data::TreeDumper

BUILD_DEPENDS=	p5-Data-TreeDumper>=0:${PORTSDIR}/devel/p5-Data-TreeDumper \
		p5-Gtk2>=0:${PORTSDIR}/x11-toolkits/p5-Gtk2
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

MAN3=		Data::TreeDumper::Renderer::GTK.3

.include <bsd.port.mk>
