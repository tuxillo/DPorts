# Created by: Martin Kammerhofer
# $FreeBSD: ports/print/auctex/Makefile,v 1.47 2013/01/01 23:45:11 svnexp Exp $

PORTNAME=	auctex
PORTVERSION=	11.87
CATEGORIES=	print elisp
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	${PORTNAME}
PKGNAMESUFFIX=		-${EMACS_PORT_NAME}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Integrated environment for writing LaTeX using GNU Emacs

LICENSE=	GPLv3

BUILD_DEPENDS=	${MKTEXLSR}:${PORTSDIR}/print/teTeX-base
RUN_DEPENDS=	${MKTEXLSR}:${PORTSDIR}/print/teTeX-base

USE_GHOSTSCRIPT=yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-lispdir=${PREFIX}/${LISPDIR} \
		--with-auto-dir=${PREFIX}/${LISPDIR}/auctex/auto \
		--with-texmf-dir=${PREFIX}/${TEXMFDIR}
.if defined(NOPORTDOCS)
MAKE_ENV=	WITHOUT_AUCTEX_DOCSDIR=yes
.else
PORTDOCS=	tex-ref.pdf
.endif

USE_EMACS=	yes
LISPDIR=	${EMACS_VERSION_SITE_LISPDIR}

PLIST_SUB+=	LISPDIR=${LISPDIR} \
		TEXMFDIR=${TEXMFDIR} \
		MKTEXLSR=${MKTEXLSR}
INFO=		auctex preview-latex

TEXMFDIR=	share/texmf
MKTEXLSR=	${LOCALBASE}/bin/mktexlsr

NOT_FOR_ARCHS=	ia64

post-install:
	${MKTEXLSR} ${PREFIX}/${TEXMFDIR}
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
