# New ports collection makefile for:	ruby-xmms2
# Date created:				18 Mar 2006
# Whom:					Alexander Botero-Lowry <alex@foxybanana.com>
#
# $FreeBSD: ports/audio/ruby-xmms2/Makefile,v 1.12 2012/11/17 05:54:43 svnexp Exp $
#

PORTREVISION=	4
CATEGORIES=	audio ruby
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby Bindings for XMMS2

LIB_DEPENDS+=	xmmsclient.6:${PORTSDIR}/audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2

USE_RUBY=	yes
USE_GNOME=	glib20

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	ruby

.include "${MASTERDIR}/Makefile"
