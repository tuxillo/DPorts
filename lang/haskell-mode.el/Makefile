# New ports collection makefile for:	haskell-mode.el
# Date created:		5 March 2004
# Whom:			Josh Elsasser <jre@vineyard.net>
#
# $FreeBSD: ports/lang/haskell-mode.el/Makefile,v 1.11 2012/11/17 05:58:51 svnexp Exp $
#

PORTNAME=	haskell-mode
PORTVERSION=	2.8.0
CATEGORIES=	lang elisp
MASTER_SITES=	http://projects.haskell.org/haskellmode-emacs/

MAINTAINER=	umq@ueo.co.jp
COMMENT=	An Emacs lisp mode for editing haskell programs

NO_BUILD=	yes

LICENSE=	GPLv3
PORTDOCS=	ChangeLog NEWS fontlock.hs indent.hs README

ELISPDIR=	${PREFIX}/${PLIST_DIRS}
ELISPFILES=	ghc-core.el haskell-c.el haskell-cabal.el haskell-decl-scan.el \
		haskell-doc.el haskell-font-lock.el haskell-ghci.el \
		haskell-hugs.el haskell-indent.el haskell-indentation.el \
		haskell-mode.el haskell-simple-indent.el haskell-site-file.el \
		inf-haskell.el

PLIST_DIRS=	share/emacs/site-lisp/${PORTNAME}/
PLIST_FILES=	${ELISPFILES:C/^| [^ ]/${PLIST_DIRS}/g}
SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${ELISPDIR}
	@${INSTALL_DATA} ${ELISPFILES:S,^,${WRKSRC}/,} ${ELISPDIR}/

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}/
.endif
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
