# Created by: Baptiste Daroussin <bapt@FreeBSD.org>
# $FreeBSD: ports/portuguese/hunspell/Makefile,v 1.25 2012/11/17 06:00:47 svnexp Exp $

PORTNAME=	hunspell
PORTVERSION=	20121006
CATEGORIES=	portuguese textproc
MASTER_SITES=	http://natura.di.uminho.pt/download/sources/Dictionaries/hunspell/ \
		http://www.broffice.org/files/:BR
DISTFILES=	hunspell-pt_PT-${PORTVERSION}.tar.gz \
		pt_BR-2012-06-09AOC.zip:BR
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	office@FreeBSD.org
COMMENT=	Portuguese hunspell dictionaries

# rely on bsdtar ability to extract .gz and .zip archives
EXTRACT_CMD=	${CAT}
EXTRACT_BEFORE_ARGS=	# empty

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/hunspell-pt_PT-${PORTVERSION}

PLIST_FILES=	%%DATADIR%%/pt_BR.aff \
		%%DATADIR%%/pt_BR.dic \
		%%DATADIR%%/pt_PT.aff \
		%%DATADIR%%/pt_PT.dic
PLIST_DIRSTRY=	%%DATADIR%%

do-install:
	${MKDIR} ${DATADIR}/
	${INSTALL_DATA} ${WRKDIR}/pt_BR.aff ${WRKDIR}/pt_BR.dic \
	  	${WRKSRC}/pt_PT.aff ${WRKSRC}/pt_PT.dic ${DATADIR}/

.include <bsd.port.mk>
