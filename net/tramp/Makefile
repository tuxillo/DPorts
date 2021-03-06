# Created by: Yoichi NAKAYAMA <yoichi@FreeBSD.org>
# $FreeBSD: ports/net/tramp/Makefile,v 1.66 2013/01/14 12:47:16 svnexp Exp $

PORTNAME=	tramp
PORTVERSION=	2.2.6
CATEGORIES=	net elisp
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
PKGNAMESUFFIX=	-${EMACS_PORT_NAME}

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Transparent remote file access tool for emacsen

USE_EMACS=	yes

USE_GMAKE=	yes
USE_AUTOTOOLS=	autoconf

TRAMP_LISPDIR=	${EMACS_VERSION_SITE_LISPDIR}/${PORTNAME}
PLIST_SUB+=	TRAMP_LISPDIR=${TRAMP_LISPDIR}
CONFIGURE_ENV=	TEXI2DVI=no
CONFIGURE_ARGS=	--with-contrib --prefix=${PREFIX} \
		--with-lispdir=${PREFIX}/${TRAMP_LISPDIR} \
		--with-emacs=${EMACS_CMD}

INFO=		tramp21

.if defined(JAPANESE_INFO)
CONFIGURE_ARGS+=	--with-japanese-manual
INFO+=		tramp
.endif

.include <bsd.port.pre.mk>

.if ${EMACS_PORT_NAME} == emacs20
PLIST_SUB+=	EMACS20_ONLY=""
.else
PLIST_SUB+=	EMACS20_ONLY="@comment "
.endif

pre-build:
.if ${EMACS_PORT_NAME} == emacs20
	(cd ${WRKSRC}/contrib; ${GMAKE})
.endif
	${LN} -sf ../contrib/password.el ${WRKSRC}/lisp

post-install:
.if ${EMACS_PORT_NAME} == emacs20
	(cd ${WRKSRC}/contrib; ${GMAKE} install)
.endif

.include <bsd.port.post.mk>
