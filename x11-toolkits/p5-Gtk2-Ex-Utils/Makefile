# New ports collection makefile for:	p5-Gtk2-Ex-Utils
# Date created:		22 July 2008
# Whom:			Paul Schmehl <pauls@utdallas.edu>
#
# $FreeBSD: ports/x11-toolkits/p5-Gtk2-Ex-Utils/Makefile,v 1.9 2012/11/17 06:03:37 svnexp Exp $
#

PORTNAME=	Gtk2-Ex-Utils
PORTVERSION=	0.09
PORTREVISION=	6
CATEGORIES=	x11-toolkits perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pauls@utdallas.edu
COMMENT=	Extra Gtk2 utilities for Gtk2 in perl

BUILD_DEPENDS=	p5-Glib2>=1.00:${PORTSDIR}/devel/p5-Glib2 \
		p5-ExtUtils-Depends>=0.3:${PORTSDIR}/devel/p5-ExtUtils-Depends \
		p5-ExtUtils-PkgConfig>=1.1:${PORTSDIR}/devel/p5-ExtUtils-PkgConfig \
		p5-Gtk2>=1.060:${PORTSDIR}/x11-toolkits/p5-Gtk2 \
		p5-Cairo>=0:${PORTSDIR}/graphics/p5-Cairo
RUN_DEPENDS=	p5-Glib2>=1.00:${PORTSDIR}/devel/p5-Glib2 \
		p5-Gtk2>=1.060:${PORTSDIR}/x11-toolkits/p5-Gtk2

PERL_CONFIGURE=	yes

MAN3=	Gtk2::Ex::Constants.3 \
	Gtk2::Ex::Utils.3

.include <bsd.port.mk>
