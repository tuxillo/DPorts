# New ports collection makefile for:	pure (for emacs20)
# Date Created:		3 May 2001
# Whom:			Yoichi NAKAYAMA <yoichi@eken.phys.nagoya-u.ac.jp>
#
# $FreeBSD: ports/irc/pure-emacs21/Makefile,v 1.10 2012/11/17 05:58:29 svnexp Exp $
#

PORTNAME=	pure
PORTVERSION=	0.6
PORTREVISION=	6
CATEGORIES=	irc elisp
MASTER_SITES=	http://his.luky.org/ftp/mirrors/irchat-pj/2.5/
PKGNAMESUFFIX=	-${EMACS_PORT_NAME}
DISTNAME=	pure-${PORTVERSION}p

PATCH_SITES=	${MASTER_SITES}
PATCHFILES=	${PORTNAME}-${PORTVERSION}pl2.diff.gz
PATCH_DIST_STRIP=	-p1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Primitive Universal Relay-chat Environment

USE_BZIP2=	yes
USE_EMACS=	yes
EMACS_PORT_NAME?=	emacs21
LISPDIR?=	${EMACS_VERSION_SITE_LISPDIR}/${PORTNAME}
EMACS_ONLY?=	""
XEMACS_ONLY?=	"@comment "
PUREBIN?=	bin
MAKE_ARGS+=	LISPDIR=${PREFIX}/${LISPDIR} \
		PACKDIR=${PREFIX}/${EMACS_LIBDIR}/site-packages \
		BINDIR=${PREFIX}/${PUREBIN}

PLIST_SUB=	PURELISP=${LISPDIR} \
		EMACS_ONLY=${EMACS_ONLY} \
		XEMACS_ONLY=${XEMACS_ONLY} \
		PUREBIN=${PUREBIN}

.include <bsd.port.mk>
