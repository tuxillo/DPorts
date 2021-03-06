# New ports collection makefile for:	intlfonts
# Date created:		99/10/26
# Whom:			Satoshi TAOKA <taoka@FreeBSD.org>
#
# $FreeBSD: ports/x11-fonts/intlfonts/Makefile,v 1.18 2012/11/17 06:03:28 svnexp Exp $
#

PORTNAME=	intlfonts
PORTVERSION=	1.2.1
PORTREVISION=	3
CATEGORIES=	x11-fonts
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	intlfonts

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free X11 fonts for all characters that Emacs can handle

BUILD_DEPENDS=	bdftopcf:${PORTSDIR}/x11-fonts/bdftopcf \
		mkfontdir:${PORTSDIR}/x11-fonts/mkfontdir \
		mkfontscale:${PORTSDIR}/x11-fonts/mkfontscale
RUN_DEPENDS=	type1inst:${PORTSDIR}/x11-fonts/p5-type1inst

USE_XORG=	x11
PLIST_SUB+=	FONTSDIR=${FONTSDIR} T1_FONTSDIR=${T1_FONTSDIR} \
		TT_FONTSDIR=${TT_FONTSDIR}

NORMAL_FONTS=	Asian		\
		Chinese		\
		Ethiopic	\
		European	\
		Japanese	\
		Misc
BIG_FONTS=	Chinese.BIG	\
		European.BIG	\
		Japanese.BIG
SCALABLE_FONTS=	TrueType \
		Type1
FONTSDIR=	lib/X11/fonts/local
T1_FONTSDIR=	lib/X11/fonts/Type1
TT_FONTSDIR=	lib/X11/fonts/TrueType
PKGINSTALL=	${WRKDIR}/INSTALL
PKGDEINSTALL=	${WRKDIR}/DEINSTALL

do-build:
	cd ${WRKSRC}; \
	for dir in ${NORMAL_FONTS} ${BIG_FONTS}; do \
		for bdf in $$dir/*.bdf ; do \
			${ECHO_CMD} $$bdf; \
			pcf_gz=`${ECHO_CMD} $$bdf | ${SED} 's/.bdf$$/.pcf.gz/'`; \
			${CAT} $$bdf | bdftopcf | ${GZIP_CMD} \
				> $$pcf_gz; \
		done \
	done
	for f in INSTALL DEINSTALL; do \
		${SED} -e 's,%%FONTSDIR%%,${FONTSDIR},g' \
			-e 's,%%T1_FONTSDIR%%,${T1_FONTSDIR},g' \
			-e 's,%%TT_FONTSDIR%%,${TT_FONTSDIR},g' \
			-e 's,%%LOCALBASE%%,${LOCALBASE},g' \
			< ${FILESDIR}/$${f}.tmpl > ${WRKDIR}/$${f}; \
	done

pre-install:
	@${SETENV} PKG_PREFIX=${PREFIX} \
		${SH} ${PKGREQ} ${PKGNAME} INSTALL

do-install:
	(cd ${WRKSRC}; \
	  ${MKDIR} ${PREFIX}/${FONTSDIR}; \
	  for dir in ${NORMAL_FONTS} ${BIG_FONTS}; do \
	  	${INSTALL_DATA} $$dir/*.pcf.gz ${PREFIX}/${FONTSDIR} ; \
	  done; \
	  ${MKDIR} ${PREFIX}/${T1_FONTSDIR}; \
	  ${INSTALL_DATA} Type1/*.* ${PREFIX}/${T1_FONTSDIR} ; \
	  ${MKDIR} ${PREFIX}/${TT_FONTSDIR}; \
	  ${INSTALL_DATA} TrueType/*.ttf ${PREFIX}/${TT_FONTSDIR} ; \
	)

post-install:
	@${SETENV} PKG_PREFIX=${PREFIX} \
		${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${WRKSRC}/Emacs.ap ${WRKSRC}/NEWS \
		${DOCSDIR}
.endif

.include <bsd.port.mk>
