# New ports collection makefile for:    gtk-sharp
# Date created:         2003-01-01
# Whom:                 Juli Mallett
#
# $FreeBSD: ports/x11-toolkits/gtk-sharp20/Makefile,v 1.68 2012/11/17 06:03:35 svnexp Exp $
#   $Id: Makefile,v 1.27 2007/10/03 00:48:49 killfill Exp $
#

PORTNAME=	gtk-sharp
PORTVERSION=	2.12.10
PORTREVISION=	1
CATEGORIES=	x11-toolkits
MASTER_SITES=	GNOME

MAINTAINER=	mono@FreeBSD.org
COMMENT=	GTK+ and GNOME interfaces for the .NET runtime

BUILD_DEPENDS=	mono:${PORTSDIR}/lang/mono
RUN_DEPENDS=	mono:${PORTSDIR}/lang/mono \
		p5-XML-LibXML>=0:${PORTSDIR}/textproc/p5-XML-LibXML

LATEST_LINK=	gtk-sharp20
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USE_GMAKE=	yes
USE_PERL5_RUN=	yes
USE_GNOME=	gnomehack gtk20 libglade2

post-patch:
	@${FIND} ${WRKSRC} -name '*.pl' | ${XARGS} ${REINPLACE_CMD} -e \
		's|^#!/usr/bin/perl|#!${PERL}|'

.include "${.CURDIR}/../../lang/mono/bsd.mono.mk"
.include <bsd.port.mk>
