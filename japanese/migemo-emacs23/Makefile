# New ports collection makefile for:	Migemo (for emacs23)
# Date created:		27 January 2010
# Whom:			MANTANI Nobutaka <nobutaka@FreeBSD.org>
#
# $FreeBSD: ports/japanese/migemo-emacs23/Makefile,v 1.2 2012/11/17 05:58:37 svnexp Exp $
#

PKGNAMESUFFIX=	-${EMACS_PORT_NAME}
COMMENT=	Japanese incremental search tool for emacs
MASTERDIR=	${.CURDIR}/../../japanese/migemo
PKGDIR=	${.CURDIR}
PLIST=		${MASTERDIR}/pkg-plist
PKGMESSAGE=	${MASTERDIR}/pkg-message

USE_EMACS=	yes
BUILD_DEPENDS=	${LOCALBASE}/${EMACS_LIBDIR_WITH_VER}/site-lisp/emu/emu.el:${PORTSDIR}/editors/apel
RUN_DEPENDS=	${LOCALBASE}/${EMACS_LIBDIR_WITH_VER}/site-lisp/emu/emu.el:${PORTSDIR}/editors/apel \
		migemo:${PORTSDIR}/japanese/migemo

CONFLICTS=	ja-migemo-emacs22-[0-9]* \
	ja-migemo-emacs21-[0-9]*

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-emacs=${EMACS_CMD}
ALL_TARGET=	migemo.elc

PLIST_SUB=	MIGEMO="@comment " ELISP=""
SLAVE_PORT=	yes

do-install:
	${INSTALL_DATA} ${WRKSRC}/migemo.el ${PREFIX}/${EMACS_LIBDIR}/site-lisp
	${INSTALL_DATA} ${WRKSRC}/migemo.elc ${PREFIX}/${EMACS_LIBDIR}/site-lisp
.include "${MASTERDIR}/Makefile"
